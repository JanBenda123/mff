#include "kernels.cuh"

#include "cuda/cuda.hpp"

#include "cuda_runtime.h"
#include "device_launch_parameters.h"

#include <cstdint>

using int32 = std::uint32_t;
using int8 = std::uint8_t;
using size_t = std::size_t;

template <typename T = int8, typename RES = int32>
__global__ void sync_free(const T *data, RES N, RES *result, T fromValue, T toValue)
{
	auto idx = threadIdx.x + blockIdx.x * blockDim.x;
	if (idx < (toValue - fromValue + 1))
	{
		T c;
		for (size_t i = 0; i < N; i++)
		{
			c = data[i];
			if (c >= fromValue && c <= toValue && c == fromValue + idx)
			{
				result[idx]++;
			}
		}
	}
}

template <typename T = int8, typename RES = int32>
__global__ void sfw_atomic(const T *data, RES N, RES *result, T fromValue, T toValue)
{
	auto idx = threadIdx.x + blockIdx.x * blockDim.x;
	if (idx >= N)
		return;
	T c = data[idx];
	if (c >= fromValue && c <= toValue)
		atomicAdd(&result[c - fromValue], 1);
}

template <typename T = int8, typename RES = int32>
__global__ void privatized_map(const T *data, RES N, RES *result, RES *priv_hist, int privCopies, T fromValue, T toValue)
{
	auto idx = threadIdx.x + blockIdx.x * blockDim.x;
	if (idx < N)
	{
		T c = data[idx];
		if (c >= fromValue && c <= toValue)
			atomicAdd(&priv_hist[(c - fromValue) * privCopies + idx % privCopies], 1);
	}
}

template <typename T = int8, typename RES = int32>
__global__ void privatized_reduce(const T *data, RES N, RES *result, RES *priv_hist, int privCopies, T fromValue, T toValue)
{
	auto idx = threadIdx.x + blockIdx.x * blockDim.x;
	if (idx < (toValue - fromValue + 1))
	{
		RES count = 0;
		for (size_t i = 0; i < privCopies; i++)
			count += priv_hist[i + idx * privCopies];
		result[idx] = count;
	}
}

template <typename T = int8, typename RES = int32>
__global__ void atomic_shm(const T *data, RES N, RES *result, int privCopies, int itemsPerThread, T fromValue, T toValue)
{
	extern __shared__ RES local_hist[];
	auto idx = threadIdx.x + blockIdx.x * blockDim.x;
	auto tidx = threadIdx.x;
	auto shm_size = (toValue - fromValue + 1) * privCopies;

	for (int i = tidx; i < shm_size; i += blockDim.x)
	{
		local_hist[i] = 0;
	}
	__syncthreads();
	for (RES i = 0; i < itemsPerThread; ++i)
	{
		RES data_i = i + idx * itemsPerThread;
		if (data_i < N)
		{
			T c = data[data_i];
			if (c >= fromValue && c <= toValue)
				atomicAdd(&local_hist[(c - fromValue) * privCopies + tidx % privCopies], 1);
		}
	}
	__syncthreads();
	for (int bin_offset = 0; bin_offset < (toValue - fromValue + 1); bin_offset += blockDim.x)
	{
		int bin_id = tidx + bin_offset;
		if (bin_id < (toValue - fromValue + 1))
		{
			RES count = 0;
			RES priv_offset = bin_id * privCopies;
			for (RES i = 0; i < privCopies; i++)

				count += local_hist[(i) + priv_offset];
			atomicAdd(&result[bin_id], count);
		}
	}
}

template <typename T, typename RES>
void run_sync_free(const T *data, size_t N, RES *result, int blockSize, T fromValue, T toValue)
{
	constexpr unsigned int BLOCK_SIZE = 256;
	sync_free<T, RES><<<1, BLOCK_SIZE>>>(data, (RES)N, result, fromValue, toValue);
}
template <typename T, typename RES>
void run_sfw_atomic(const T *data, size_t N, RES *result, int blockSize, T fromValue, T toValue)
{
	sfw_atomic<T, RES><<<N / blockSize + 1, blockSize>>>(data, (RES)N, result, fromValue, toValue);
}
template <typename T, typename RES>
void run_privatized(const T *data, size_t N, RES *result, RES *priv_hist, int privCopies, int blockSize, T fromValue, T toValue)
{
	// Needs to be run in two kernels to synchronize globally
	privatized_map<T, RES><<<N / blockSize + 1, blockSize>>>(data, (RES)N, result, priv_hist, privCopies, fromValue, toValue);
	privatized_reduce<T, RES><<<N / blockSize + 1, blockSize>>>(data, (RES)N, result, priv_hist, privCopies, fromValue, toValue);
}
template <typename T, typename RES>
void run_atomic_shm(const T *data, size_t N, RES *result, int privCopies, int itemsPerThread, int blockSize, T fromValue, T toValue, cudaStream_t stream)
{
	unsigned int BLOCK_NUMBER = N / (blockSize * itemsPerThread) + 1;
	unsigned int SHM_SIZE = (toValue - fromValue + 1) * privCopies * sizeof(RES);
	if (SHM_SIZE > 48 << 10)
	{
		throw std::runtime_error("Tried to allocate too much shared memory");
	}

	atomic_shm<T, RES><<<BLOCK_NUMBER, blockSize, SHM_SIZE>>>(data, (RES)N, result, privCopies, itemsPerThread, fromValue, toValue);
}

template void run_sync_free<int8, int32>(const int8 *data, size_t N, int32 *result, int blockSize, int8 fromValue, int8 toValue);
template void run_sfw_atomic<int8, int32>(const int8 *data, size_t N, int32 *result, int blockSize, int8 fromValue, int8 toValue);
template void run_privatized<int8, int32>(const int8 *data, size_t N, int32 *result, int32 *priv_hist, int privCopies, int blockSize, int8 fromValue, int8 toValue);
template void run_atomic_shm<int8, int32>(const int8 *data, size_t N, int32 *result, int privCopies, int itemsPerThread, int blockSize, int8 fromValue, int8 toValue, cudaStream_t stream);