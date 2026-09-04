#include "mpi.h"
#include "results.hpp"
#include "signatures.hpp"
#include "results.hpp"
#include "signatures_gpu.hpp"
#include "chronologger.hpp"
#include "cli/args.hpp"
#include "kernels.cuh"
#include <cuda_runtime.h>
#include "cuda/cuda.hpp"

#include <vector>
#include <random>
#include <iostream>
#include <cstring>

constexpr int DIM = 7;

constexpr bool DEBUG = true;

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

void printResultStats(const KMedoidsResults &results)
{
    std::cout << std::endl
              << "Results:" << std::endl
              << std::endl;
    std::vector<std::size_t> sizes(results.mMedoids.size());
    for (auto &&a : results.mAssignment)
    {
        ++sizes[a];
    }

    for (std::size_t i = 0; i < results.mMedoids.size(); ++i)
    {
        std::cout << results.mMedoids[i] << "\t(" << sizes[i] << ")\n";
    }
    std::cout << std::endl;
}

template <int DIM, typename NUM_TYPE, typename IN_TYPE>
class ParaKMedoids
{
    int k_;
    int maxIter_;
    IN_TYPE alpha_;
    int seed_;

    ChronoLogger logger_;
    int rank_;
    int size_;
    sig_id_t sigCount_ = 0;

    cluster_id_t *nodeClusterCount_; // How many clusters each rank processes
    cluster_id_t *nodeClusterStart_; // Start of Each rank's process domain

    sig_id_t *hRepresentants_;
    KMedoidsResults results;
    NUM_TYPE *dData;
    db_offset_t *dIndex;
    IN_TYPE *dSelfDistance;
    sig_id_t **dClusterPtr;
    sig_id_t **hClusterPtr;
    cluster_size_t *dClusterSizes;
    sig_id_t *dRepresentants;
    IN_TYPE *dSigDistSum;

    SignatureGpuAccessor<DIM, NUM_TYPE> *accessor_;

    void log(const std::string &msg)
    {
        if (!DEBUG || rank_ != 0)
            return;
        CUCH(cudaDeviceSynchronize());
        //  MPI_Barrier(MPI_COMM_WORLD);
        logger_.log(msg);
    }

    /**
     * \brief Initializes the algorithm - random init of representatives and prepares GPU for the KMedoids alg.
     */
    void initialize()
    {

        // KMedoids initialization
        results.mMedoids.resize(sigCount_);
        for (sig_id_t i = 0; i < sigCount_; ++i)
        {
            results.mMedoids[i] = i;
        }

        std::mt19937 gen((unsigned int)seed_);
        std::shuffle(results.mMedoids.begin(), results.mMedoids.end(), gen);
        results.mMedoids.resize(k_);

        // Data Allocation
        CUCH(cudaMalloc(&dData, accessor_->getTotalDataSize() * sizeof(NUM_TYPE)));
        CUCH(cudaMalloc(&dIndex, sigCount_ * sizeof(db_offset_t)));
        CUCH(cudaMalloc(&dRepresentants, k_ * sizeof(sig_id_t)));

        CUCH(cudaMemcpy(dData, accessor_->getRawData(), accessor_->getTotalDataSize() * sizeof(NUM_TYPE), cudaMemcpyHostToDevice));
        CUCH(cudaMemcpy(dIndex, accessor_->getIndex(), sigCount_ * sizeof(db_offset_t), cudaMemcpyHostToDevice));
        CUCH(cudaMemcpy(dRepresentants, results.mMedoids.data(), k_ * sizeof(sig_id_t), cudaMemcpyHostToDevice));

        run_normalizeWeights<DIM, NUM_TYPE>(sigCount_, dData, dIndex);

        // Cluster Pointers Allocation

        nodeClusterStart_ = new cluster_id_t[size_];
        nodeClusterCount_ = new cluster_id_t[size_];
        for (int r = 0; r < size_; r++)
        {
            nodeClusterCount_[r] = k_ / size_ + (r < k_ % size_);
            nodeClusterStart_[r] = r > 0 ? nodeClusterStart_[r - 1] + nodeClusterCount_[r - 1] : 0;
        }
        cluster_id_t localClusterCount = nodeClusterCount_[rank_];

        CUCH(cudaMalloc(&dClusterPtr, localClusterCount * sizeof(sig_id_t *)));
        CUCH(cudaMalloc(&dClusterSizes, localClusterCount * sizeof(cluster_size_t)));
        CUCH(cudaMalloc(&dSigDistSum, sigCount_ * sizeof(IN_TYPE)));
        hClusterPtr = new sig_id_t *[localClusterCount];
        for (int i = 0; i < localClusterCount; ++i)
        {
            CUCH(cudaMalloc(&hClusterPtr[i], sigCount_ * sizeof(sig_id_t)));
        }
        CUCH(cudaMemcpy(dClusterPtr, hClusterPtr, localClusterCount * sizeof(sig_id_t *), cudaMemcpyHostToDevice));
    }

    void computeSelfDistances()
    {
        size_t preprocessSize = ((sigCount_ - 1) / size_ + 1);
        sig_id_t fromId = preprocessSize * (sig_id_t)rank_;
        sig_id_t toId = std::min(preprocessSize * ((sig_id_t)rank_ + 1), sigCount_);

        CUCH(cudaMalloc(&dSelfDistance, (toId - fromId) * sizeof(IN_TYPE)));

        run_computeSelfDistances<DIM, NUM_TYPE, IN_TYPE>(fromId, toId, alpha_, dData, dIndex, dSelfDistance);

        IN_TYPE *hSelfDistancesPart = new IN_TYPE[toId - fromId];
        IN_TYPE *hSelfDistances = new IN_TYPE[sigCount_];
        int *recvcounts = new int[size_];
        int *displs = new int[size_];

        CUCH(cudaMemcpy(hSelfDistancesPart, dSelfDistance, (toId - fromId) * sizeof(IN_TYPE), cudaMemcpyDeviceToHost));

        for (int r = 0; r < size_; r++)
        {
            recvcounts[r] = preprocessSize;
            displs[r] = preprocessSize * r;
        }
        recvcounts[size_ - 1] = sigCount_ - (preprocessSize * (size_ - 1));

        const MPI_Datatype mpi_in_type = (sizeof(IN_TYPE) == sizeof(double)) ? MPI_DOUBLE : MPI_FLOAT;
        MPICH(MPI_Allgatherv(
            hSelfDistancesPart, // Data to send
            toId - fromId,      // number of sending elements
            mpi_in_type,        // data type
            hSelfDistances,     // gather target
            recvcounts,         // array: number of elements each rank sends
            displs,             // array: offsets
            mpi_in_type,        // recieved datatype
            MPI_COMM_WORLD      // comm
            ));
        CUCH(cudaFree(dSelfDistance));
        CUCH(cudaMalloc(&dSelfDistance, sigCount_ * sizeof(IN_TYPE)));
        CUCH(cudaMemcpy(dSelfDistance, hSelfDistances, sigCount_ * sizeof(IN_TYPE), cudaMemcpyHostToDevice));

        delete[] hSelfDistancesPart;
        delete[] hSelfDistances;
        delete[] recvcounts;
        delete[] displs;
    }

    void assignToClusters()
    {
        cluster_id_t fromCluster = nodeClusterStart_[rank_];
        cluster_id_t toCluster = fromCluster + nodeClusterCount_[rank_];
        run_assignToClusters<DIM, NUM_TYPE, IN_TYPE>(fromCluster, toCluster, sigCount_, k_, alpha_, dData,
                                                     dIndex, dSelfDistance, dRepresentants, dClusterPtr, dClusterSizes);
    }

    void updateCentroids()
    {
        cluster_id_t localClusterStart = nodeClusterStart_[rank_];
        cluster_id_t localClusterCount = nodeClusterCount_[rank_];
        for (int locClusterId = 0; locClusterId < localClusterCount; ++locClusterId)
        {
            cluster_id_t globClusterId = localClusterStart + locClusterId;
            run_findRepresentant<DIM, NUM_TYPE, IN_TYPE>(locClusterId, globClusterId, sigCount_, dData, dIndex, dSelfDistance, alpha_, dRepresentants,
                                                         dClusterPtr, dClusterSizes, dSigDistSum);
        }
    }

    bool synchronizeRepresentatives()
    {
        sig_id_t *hRepresentantsNew = new sig_id_t[k_];
        sig_id_t *toSend = new sig_id_t[nodeClusterCount_[rank_]];

        CUCH(cudaMemcpy(toSend, dRepresentants + nodeClusterStart_[rank_], nodeClusterCount_[rank_] * sizeof(sig_id_t), cudaMemcpyDeviceToHost));

        MPI_Datatype MPI_SIZE_T = MPI_UINT64_T;
        MPICH(MPI_Allgatherv(
            toSend,                   // Data to send
            nodeClusterCount_[rank_], // number of sending elements
            MPI_SIZE_T,               // data type
            hRepresentantsNew,        // gather target
            nodeClusterCount_,        // array: number of elements each rank sends
            nodeClusterStart_,        // array: where to start storing data from i-th rank
            MPI_SIZE_T,               // recieved datatype
            MPI_COMM_WORLD            // comm
            ));

        // check Convergence

        bool shouldEnd = std::memcmp(hRepresentantsNew, results.mMedoids.data(), k_ * sizeof(sig_id_t)) == 0;

        if (!shouldEnd)
            CUCH(cudaMemcpy(dRepresentants, hRepresentantsNew, k_ * sizeof(sig_id_t), cudaMemcpyHostToDevice));

        results.mMedoids.assign(hRepresentantsNew, hRepresentantsNew + k_);
        delete[] hRepresentantsNew;
        delete[] toSend;
        return shouldEnd;
    }

    void synchronizeAssignments()
    {
        results.mAssignment.resize(sigCount_);
        for (sig_id_t i = 0; i < sigCount_; ++i)
        {
            results.mAssignment[i] = -1; // set max value
        }

        sig_id_t *cluster = new sig_id_t[sigCount_];
        cluster_size_t *clusterSizes = new cluster_size_t[nodeClusterCount_[rank_]];
        cudaMemcpy(clusterSizes, dClusterSizes, nodeClusterCount_[rank_] * sizeof(cluster_size_t), cudaMemcpyDeviceToHost);
        for (cluster_id_t locClusterId = 0; locClusterId < nodeClusterCount_[rank_]; ++locClusterId)
        {
            cluster_id_t cluster_id = nodeClusterStart_[rank_] + locClusterId;
            cudaMemcpy(cluster, hClusterPtr[locClusterId], sigCount_ * sizeof(sig_id_t), cudaMemcpyDeviceToHost);

            for (cluster_size_t i = 0; i < clusterSizes[locClusterId]; ++i)
            {
                if (results.mAssignment[cluster[i]] == (sig_id_t)(-1))
                    results.mAssignment[cluster[i]] = cluster_id;
                else
                    std::runtime_error("Double assignment");
            }
        }
        MPICH(MPI_Allreduce(MPI_IN_PLACE, results.mAssignment.data(), sigCount_, MPI_UINT64_T, MPI_MIN, MPI_COMM_WORLD));
        for (sig_id_t i = 0; i < sigCount_; ++i)
        {
            if (results.mAssignment[i] == (sig_id_t)(-1))
                std::runtime_error("No assignment");
        }
        delete[] cluster;
        delete[] clusterSizes;
    }

public:
    ParaKMedoids(std::string src, int k, int maxIter, IN_TYPE alpha, int seed, int rank, int size)
        : k_(k), maxIter_(maxIter), alpha_(alpha), seed_(seed), logger_(ChronoLogger(DEBUG, rank)), rank_(rank), size_(size)
    {
        DBSignatureListMapped<DIM, NUM_TYPE> *db = new DBSignatureListMapped<DIM, NUM_TYPE>(src);
        accessor_ = new SignatureGpuAccessor<DIM, NUM_TYPE>(db);
        sigCount_ = accessor_->getIndexSize();
        logger_.log("DB read");
    }

    void run()
    {
        initialize();
        log("GPU initialization done");

        computeSelfDistances();
        log("Self-distances computed");

        for (int iter = 1; iter < maxIter_ + 1; ++iter)
        {
            assignToClusters();
            log("Iter: " + std::to_string(iter) + " Clusters assigned");

            updateCentroids();
            log("Iter: " + std::to_string(iter) + " Centroids updated locally");

            bool shouldEnd = synchronizeRepresentatives();
            log("Iter: " + std::to_string(iter) + " Synchronised");

            if (shouldEnd)
                break;
        }

        synchronizeAssignments();
        log("Finished");

        if (rank_ == 0)
            printResultStats(results);
    }
};

void initArgs(int argc, char *argv[], bpp::ProgramArguments &args)
{
    args = bpp::ProgramArguments(1, 1);
    args.setNamelessCaption(0, "Input .bsf file");

    try
    {
        args.registerArg<bpp::ProgramArguments::ArgString>("save", "Path to a file to which the results are saved.", false);

        args.registerArg<bpp::ProgramArguments::ArgInt>("iterations", "Maximal number of iterations", false, 16, 0, 4096);
        args.registerArg<bpp::ProgramArguments::ArgInt>("k", "Number of clusters", false, 32, 0, 1024 * 1024);
        args.registerArg<bpp::ProgramArguments::ArgInt>("images", "Limit for number of images (only first N images from the input file are taken)", false, 1024, 0);
        args.registerArg<bpp::ProgramArguments::ArgFloat>("alpha", "Alpha tuning parameter for SQFD", false, 0.2, 0.0001, 100);

        args.registerArg<bpp::ProgramArguments::ArgInt>("seed", "Seed for random generator (to make results deterministic)", false, 42);

        // Process the arguments ...
        args.process(argc, argv);
    }
    catch (bpp::ArgumentException &e)
    {
        std::cout << "Invalid arguments: " << e.what() << std::endl
                  << std::endl;
        args.printUsage(std::cout);
        std::runtime_error("");
    }
}

int main(int argc, char *argv[])
{
    int rank, size;
    MPI_Init(&argc, &argv);
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    CUCH(cudaSetDevice(0));

    if (rank == 0)
        std::cout << size << " ranks initialized" << std::endl;

    bpp::ProgramArguments args;
    initArgs(argc, argv, args);

    ParaKMedoids<7, float, double> pkm(args[0], args.getArgInt("k").getValue(), args.getArgInt("iterations").getValue(),
                                       args.getArgFloat("alpha").getValue(), args.getArgInt("seed").getValue(), rank, size);
    pkm.run();

    MPI_Finalize();
    return 0;
}
