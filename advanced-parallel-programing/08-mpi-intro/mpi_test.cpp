#include <vector>
#include <limits>
#include <random>
#include <iostream>
#include <cstdint>
#include <cstdio>
#include <cstring>

#include <mpi.h>

template<typename T = std::int64_t>
void generate_data(std::vector<T> &data, std::size_t count, unsigned seed)
{
    std::mt19937 generator(seed);
    std::uniform_int_distribution<T> distribution(std::numeric_limits<T>::min(), std::numeric_limits<T>::max());

	data.resize(count);
	for (auto && x : data) {
		x = distribution(generator);
	}
}

template<typename T = std::int64_t>
T get_data_min(std::vector<T> &data)
{
	if (data.empty()){
		return T();
	}

	T m = data[0];
	for (auto && i : data) {
		if (m > i) {
			m = i;
		}
	}
	return m;
}


int main(int argc, char **argv)
{
	const int tag = 42;
	int rank, size;

	MPI_Init(&argc, &argv);
	MPI_Comm_size(MPI_COMM_WORLD, &size);
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);

	std::vector<int> data;
	generate_data(data, 1024*1024, rank);
	int m = get_data_min(data);
	std::cout << "Rank #" << rank << " has local minimum " << m << std::endl;

	do {
		if (rank == 0) {
			std::vector<int> minima(size);
			std::vector<MPI_Request> requests(size-1);
			std::vector<MPI_Status> statuses(size-1);

			for (int i = 1; i < size; i++) {
				int res = MPI_Irecv(&minima[i], 1, MPI_INT, i, tag, MPI_COMM_WORLD, &requests[i-1]);
				if (res != MPI_SUCCESS) {
					std::cout << "MPI_Irecv error (" << res << ") for i==" << i << std::endl;
					break;
				}

			}
			int res = MPI_Waitall(size-1, &requests[0], &statuses[0]);
			if (res != MPI_SUCCESS) {
				std::cout << "MPI_Waitall error (" << res << ")" << std::endl;
				break;
			}

			minima[0] = m;
			m = get_data_min(minima);
			std::cout << "Final minimum = " << m << std::endl;
		} else {
			int res = MPI_Send(&m, 1, MPI_INT, 0, tag, MPI_COMM_WORLD);
			if (res != MPI_SUCCESS) {
				std::cout << "MPI_Send error (" << res << ") at rank #" << rank << std::endl;
				break;
			}
		}
	} while (false);
	
	MPI_Finalize();
	return 0;
}
