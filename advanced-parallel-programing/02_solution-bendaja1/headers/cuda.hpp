#ifndef HISTOGRAM_CUDA_HPP
#define HISTOGRAM_CUDA_HPP

#include "kernels.cuh"
#include "interface.hpp"

#include "cuda/cuda.hpp"

#include <vector>
#include <cstdint>
#include <cstring>
#include <iostream>

template <typename T = std::uint8_t, typename RES = std::uint32_t>
class CudaHistogramAlgorithm : public IHistogramAlgorithm<T, RES>
{
protected:
	const T *mData;
	std::size_t mN;
	T *d_data;
	RES *d_hist;

public:
	virtual void initialize(const T *data, std::size_t N, T fromValue, T toValue, bpp::ProgramArguments &args) override
	{
		IHistogramAlgorithm<T, RES>::initialize(data, N, fromValue, toValue, args);
		mData = data;
		mN = N;

		CUCH(cudaSetDevice(0));

		CUCH(cudaMalloc(&d_data, N * sizeof(T)));
		CUCH(cudaMalloc(&d_hist, (toValue - fromValue + 1) * sizeof(RES)));
	}

	virtual void prepare() override
	{
		if (!mData || !mN)
			return;

		CUCH(cudaMemcpy(d_data, this->mData, this->mN * sizeof(T), cudaMemcpyHostToDevice));
	}

	virtual void finalize() override
	{
		CUCH(cudaMemcpy(this->mResult.data(), d_hist, (this->mToValue - this->mFromValue + 1) * sizeof(RES), cudaMemcpyDeviceToHost));
	}
};

template <typename T = std::uint8_t, typename RES = std::uint32_t>
class SyncFreeHistogramAlgorithm : public CudaHistogramAlgorithm<T, RES>
{
public:
	virtual void run() override
	{
		if (!this->mData || !this->mN)
			return;

		// Execute
		run_sync_free(this->d_data, this->mN, this->d_hist, this->mBlockSize, this->mFromValue, this->mToValue);

		CUCH(cudaDeviceSynchronize());
	}
};

template <typename T = std::uint8_t, typename RES = std::uint32_t>
class SfwAtomicHistogramAlgorithm : public CudaHistogramAlgorithm<T, RES>
{
public:
	virtual void run() override
	{
		if (!this->mData || !this->mN)
			return;

		// Execute
		run_sfw_atomic(this->d_data, this->mN, this->d_hist, this->mBlockSize, this->mFromValue, this->mToValue);

		CUCH(cudaDeviceSynchronize());
	}
};

template <typename T = std::uint8_t, typename RES = std::uint32_t>
class PrivatizedHistogramAlgorithm : public CudaHistogramAlgorithm<T, RES>
{
protected:
	RES *d_priv_hist;

public:
	virtual void initialize(const T *data, std::size_t N, T fromValue, T toValue, bpp::ProgramArguments &args) override
	{
		CudaHistogramAlgorithm<T, RES>::initialize(data, N, fromValue, toValue, args);
		CUCH(cudaMalloc(&d_priv_hist, (toValue - fromValue + 1) * this->mPrivCopies * sizeof(RES)));
	}
	virtual void run() override
	{
		if (!this->mData || !this->mN)
			return;

		// Execute
		run_privatized(this->d_data, this->mN, this->d_hist, d_priv_hist, this->mPrivCopies, this->mBlockSize, this->mFromValue, this->mToValue);

		CUCH(cudaDeviceSynchronize());
	}
};

template <typename T = std::uint8_t, typename RES = std::uint32_t>
class AtomicShmHistogramAlgorithm : public CudaHistogramAlgorithm<T, RES>
{
public:
	virtual void run() override
	{
		if (!this->mData || !this->mN)
			return;

		// Execute
		run_atomic_shm(this->d_data, this->mN, this->d_hist, this->mPrivCopies, this->mItemsPerThread, this->mBlockSize, this->mFromValue, this->mToValue, 0);

		CUCH(cudaDeviceSynchronize());
	}
};

template <typename T = std::uint8_t, typename RES = std::uint32_t>
class OverlapHistogramAlgorithm : public CudaHistogramAlgorithm<T, RES>
{
protected:
	static constexpr int N_STREAMS = 2;
	cudaStream_t streams[N_STREAMS];
	T *data_buffers[N_STREAMS];
	T *pinnedData;

public:
	virtual void initialize(const T *data, std::size_t N, T fromValue, T toValue, bpp::ProgramArguments &args) override
	{
		IHistogramAlgorithm<T, RES>::initialize(data, N, fromValue, toValue, args);
		CUCH(cudaSetDevice(0));
		if (this->mPinned)
		{
			CUCH(cudaHostAlloc((void **)&pinnedData, N * sizeof(T), cudaHostAllocDefault));
			memcpy(pinnedData, data, N * sizeof(T));
		}
		else
			this->mData = data;
		this->mN = N;

		for (int i = 0; i < N_STREAMS; ++i)
			CUCH(cudaMalloc(&data_buffers[i], this->mChunkSize * sizeof(T)));
		CUCH(cudaMalloc(&this->d_hist, (toValue - fromValue + 1) * sizeof(RES)));

		// Init streams
		for (int i = 0; i < N_STREAMS; ++i)
			cudaStreamCreate(&streams[i]);
	}

	virtual void prepare() override
	{
		if (!this->mData || !this->mN)
			return;

		// No data transfer here
	}

	virtual void run() override
	{
		if (!(this->mData || pinnedData) || !this->mN)
			return;

		// Execute
		int streamId = 0;
		const T *src = this->mPinned ? pinnedData : this->mData;
		for (size_t offset = 0; offset < this->mN; offset += this->mChunkSize)
		{
			cudaStream_t stream = streams[streamId];
			int sizeToProcess = std::min(this->mChunkSize, this->mN - offset);
			cudaMemcpyAsync(data_buffers[streamId], &(src[offset]), sizeToProcess * sizeof(T), cudaMemcpyHostToDevice, stream);
			run_atomic_shm(data_buffers[streamId], sizeToProcess, this->d_hist, this->mPrivCopies, this->mItemsPerThread, this->mBlockSize, this->mFromValue, this->mToValue, stream);

			streamId = (streamId + 1) % N_STREAMS;
		}
		CUCH(cudaDeviceSynchronize());
	}
};

template <typename T = std::uint8_t, typename RES = std::uint32_t>
class UnifiedHistogramAlgorithm : public CudaHistogramAlgorithm<T, RES>
{
public:
	virtual void initialize(const T *data, std::size_t N, T fromValue, T toValue, bpp::ProgramArguments &args) override
	{
		IHistogramAlgorithm<T, RES>::initialize(data, N, fromValue, toValue, args);
		this->mData = data;
		this->mN = N;

		CUCH(cudaSetDevice(0));

		CUCH(cudaMallocManaged(&this->d_data, N * sizeof(T)));
		CUCH(cudaMallocManaged(&this->d_hist, (toValue - fromValue + 1) * sizeof(RES)));

		cudaMemAdvise(this->d_data, this->mN * sizeof(T), cudaMemAdviseSetAccessedBy, cudaCpuDeviceId);
		cudaMemPrefetchAsync(this->d_data, this->mN * sizeof(T), cudaCpuDeviceId); // send pages to CPU
	}
	virtual void prepare() override
	{
		if (!this->mData || !this->mN)
			return;

		std::memcpy(this->d_data, this->mData, this->mN * sizeof(T));
		cudaMemPrefetchAsync(this->d_data, this->mN * sizeof(T), 0);
		cudaMemAdvise(this->d_data, this->mN * sizeof(T), cudaMemAdviseUnsetAccessedBy, cudaCpuDeviceId);
		cudaMemAdvise(this->d_data, this->mN * sizeof(T), cudaMemAdviseSetReadMostly, 0);
		cudaMemAdvise(this->d_data, this->mN * sizeof(T), cudaMemAdviseSetPreferredLocation, 0);
	}
	virtual void run() override
	{
		if (!this->mData || !this->mN)
			return;

		// Execute
		run_atomic_shm(this->d_data, this->mN, this->d_hist, this->mPrivCopies, this->mItemsPerThread, this->mBlockSize, this->mFromValue, this->mToValue, 0);

		CUCH(cudaDeviceSynchronize());
	}
	virtual void finalize() override
	{
		this->mResult.assign(this->d_hist, this->d_hist + (this->mToValue - this->mFromValue + 1));
	}
};

#endif
