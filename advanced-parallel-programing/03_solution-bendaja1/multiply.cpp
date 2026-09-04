#include <mpi.h>
#include <iostream>
#include <fstream>
#include <string>

void init(int argc, char **argv, int (&dim_A)[2], int (&dim_B)[2])
{
    if (argc != 4)
    {
        throw std::runtime_error("Incorrect number of args");
    }
    char *path_A = argv[1];
    char *path_B = argv[2];

    std::fstream A_file(path_A, std::ios::in | std::ios::binary);
    std::fstream B_file(path_B, std::ios::in | std::ios::binary);

    if (!A_file || !B_file)
    {
        throw std::runtime_error("One of the files could not be opened");
    }

    int tmp[2];

    // Swapping the order since someone cannot read the problem statement properly
    A_file.read(reinterpret_cast<char *>(tmp), sizeof tmp);
    dim_A[0] = tmp[1];
    dim_A[1] = tmp[0];

    B_file.read(reinterpret_cast<char *>(tmp), sizeof tmp);
    dim_B[0] = tmp[1];
    dim_B[1] = tmp[0];

    std::cout << "Multiplying " << dim_A[0] << "x" << dim_A[1] << " with " << dim_B[0] << "x" << dim_B[1] << std::endl;
    if (dim_A[1] != dim_B[0])
    {
        throw std::runtime_error("Wrong dimensions of matrices");
    }
    A_file.close();
    B_file.close();
}

void MPICH(int err)
{
    if (err != MPI_SUCCESS)
    {
        char errstr[MPI_MAX_ERROR_STRING];
        int resultlen;
        MPI_Error_string(err, errstr, &resultlen);
        std::cerr << "MPI error: " << errstr << std::endl;
    }
}

void log(std::string l, int rank)
{
    bool debug = true;
    if (debug && rank == 0)
        std::cout << "DEBUG: " << l << std::endl;
}

void add_mat_mul(float *A, float *B, float *R, size_t A_rows, size_t A_cols, size_t B_cols, bool omit_first)
{
    int k0 = omit_first ? 1 : 0;

    for (size_t i = 0; i < A_rows; ++i)
    {
        for (size_t k = k0; k < A_cols; ++k)
        {
            float a = A[i * A_cols + k];
            for (size_t j = 0; j < B_cols; ++j)
            {
                R[i * B_cols + j] += a * B[k * B_cols + j];
            }
        }
    }
}

void vec_sum(void *invec, void *inoutvec, int *len, MPI_Datatype *dtype)
{
    float *in = (float *)invec;
    float *inout = (float *)inoutvec;

    for (int i = 0; i < *len; ++i)
        inout[i] += in[i];
}

int main(int argc, char **argv)
{
    int rank, size;
    MPI_Init(&argc, &argv);
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    // Will use (rows, columns) since it is more intuitive
    int dim_A[2];
    int dim_B[2];

    // INIT AND BROADCAST MATRIX DIMS
    if (rank == 0)
        init(argc, argv, dim_A, dim_B);
    MPI_Bcast(dim_A, 2, MPI_INT, 0, MPI_COMM_WORLD);
    MPI_Bcast(dim_B, 2, MPI_INT, 0, MPI_COMM_WORLD);
    const size_t MATRIX_R_SIZE = dim_A[0] * dim_B[1];
    const int FILE_HEADER_SIZE = 2 * sizeof(int);

    const bool IS_EXTENDED_RANK = rank < dim_A[1] % size;

    const int ROWS_TO_PROCESS = dim_A[1] / size + (IS_EXTENDED_RANK ? 1 : 0);
    const int MAX_ROWS_PER_PROC = (dim_A[1] - 1) / size + 1;

    log("Dimensions broadcasted", rank);

    // SET UP TYPES FOR FILE VIEWS
    MPI_Datatype MPI_MAT_A, MPI_MAT_B;
    // MPI_Type_vector(block_count, blocklen, stride, type, &ref);
    MPICH(MPI_Type_vector(dim_A[0], MAX_ROWS_PER_PROC, dim_A[1], MPI_FLOAT, &MPI_MAT_A));
    MPICH(MPI_Type_vector(MAX_ROWS_PER_PROC, dim_B[1], dim_B[1], MPI_FLOAT, &MPI_MAT_B));

    MPICH(MPI_Type_commit(&MPI_MAT_A));
    MPICH(MPI_Type_commit(&MPI_MAT_B));

    log("Types set", rank);

    // OPEN FILES
    MPI_File fh_A, fh_B, fh_R;
    MPICH(MPI_File_open(MPI_COMM_WORLD, argv[1], MPI_MODE_RDONLY, MPI_INFO_NULL, &fh_A));
    MPICH(MPI_File_open(MPI_COMM_WORLD, argv[2], MPI_MODE_RDONLY, MPI_INFO_NULL, &fh_B));
    MPICH(MPI_File_open(MPI_COMM_WORLD, argv[3], MPI_MODE_CREATE | MPI_MODE_WRONLY, MPI_INFO_NULL, &fh_R));

    log("Filehandlers open", rank);

    MPI_Op vec_sum_op;
    MPICH(MPI_Op_create(vec_sum, /* commute = */ 1, &vec_sum_op));

    auto set_block_offset_A = [fh_A, MPI_MAT_A](int startrow)
    {
        MPI_Offset disp = startrow * sizeof(float) + FILE_HEADER_SIZE;
        MPICH(MPI_File_set_view(fh_A, disp, MPI_FLOAT, MPI_MAT_A, "native", MPI_INFO_NULL));
    };

    auto set_block_offset_B = [fh_B, MPI_MAT_B, &dim_B](int startcol)
    {
        MPI_Offset disp = (startcol * dim_B[1]) * sizeof(float) + FILE_HEADER_SIZE;
        MPICH(MPI_File_set_view(fh_B, disp, MPI_FLOAT, MPI_MAT_B, "native", MPI_INFO_NULL));
    };

    float *A_submat = new float[dim_A[0] * MAX_ROWS_PER_PROC];
    float *B_submat = new float[MAX_ROWS_PER_PROC * dim_B[1]];
    float *R_subres = new float[MATRIX_R_SIZE];

    log("Memory allocated", rank);

    for (size_t i = 0; i < MATRIX_R_SIZE; i++)
    {
        R_subres[i] = 0.0;
    }

    log("R_subres cleared", rank);

    MPI_Request bc_handle1, bc_handle2;

    bool omit_first = ROWS_TO_PROCESS != MAX_ROWS_PER_PROC;
    int start_row = MAX_ROWS_PER_PROC * rank - (omit_first ? rank - dim_A[1] % size : 0);
    if (omit_first)
        start_row -= 1; // start loading one row sooner

    set_block_offset_A(start_row);
    set_block_offset_B(start_row);

    MPICH(MPI_File_iread_all(fh_A, A_submat, dim_A[0] * MAX_ROWS_PER_PROC, MPI_FLOAT, &bc_handle1));
    MPICH(MPI_File_iread_all(fh_B, B_submat, MAX_ROWS_PER_PROC * dim_B[1], MPI_FLOAT, &bc_handle2));

    MPICH(MPI_Wait(&bc_handle1, MPI_STATUS_IGNORE));
    MPICH(MPI_Wait(&bc_handle2, MPI_STATUS_IGNORE));
    add_mat_mul(A_submat, B_submat, R_subres, dim_A[0], MAX_ROWS_PER_PROC, dim_B[1], omit_first); // then omit sooner loaded row

    log("Reducing", rank);
    MPI_Allreduce(MPI_IN_PLACE, R_subres, MATRIX_R_SIZE, MPI_FLOAT, vec_sum_op, MPI_COMM_WORLD);

    log("Storing data", rank);
    if (rank == 0)
    {
        int dim_R[2] = {dim_A[0], dim_B[1]};
        MPI_File_write_at(fh_R, 0, dim_R, 2, MPI_INT, MPI_STATUS_IGNORE);
        MPI_File_write_at(fh_R, FILE_HEADER_SIZE, R_subres, MATRIX_R_SIZE, MPI_FLOAT, MPI_STATUS_IGNORE);
    }

    // FINALIZATIONS
    delete[] A_submat;
    delete[] B_submat;
    delete[] R_subres;
    MPI_Op_free(&vec_sum_op);
    MPI_Type_free(&MPI_MAT_A);
    MPI_Type_free(&MPI_MAT_B);

    MPI_File_close(&fh_A);
    MPI_File_close(&fh_B);
    MPI_File_close(&fh_R);
    MPI_Finalize();
    return 0;
}