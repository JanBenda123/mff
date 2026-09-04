#ifndef HISTOGRAM_KEKRNELS_CUH
#define HISTOGRAM_KEKRNELS_CUH

#include <cstddef>
#include <cstdint>
#include "cuda/cuda.hpp"

template <typename T, typename RES>
void run_sync_free(const T *data, std::size_t N, RES *result, int blockSize, T fromValue, T toValue);
template <typename T, typename RES>
void run_sfw_atomic(const T *data, std::size_t N, RES *result, int blockSize, T fromValue, T toValue);
template <typename T, typename RES>
void run_privatized(const T *data, std::size_t N, RES *result, RES *priv_hist, int privCopies, int blockSize, T fromValue, T toValue);
template <typename T, typename RES>
void run_atomic_shm(const T *data, std::size_t N, RES *result, int privCopies, int itemsPerThread, int blockSize, T fromValue, T toValue, cudaStream_t stream);

#endif
