#include "kernels.cuh"

#include "cuda_runtime.h"
#include "device_launch_parameters.h"

#include <cstdint>

template <int DIM, typename NUM_TYPE>
__device__ __forceinline__ int getSigFeatureCount(sig_id_t i, const db_offset_t *dIndex)
{
	db_offset_t start = (i > 0) ? dIndex[i - 1] : 0;
	return dIndex[i] - start;
}

template <int DIM, typename NUM_TYPE>
__device__ __forceinline__ const NUM_TYPE *getFeaturePtr(sig_id_t i, const NUM_TYPE *dData, const db_offset_t *dIndex)
{

	db_offset_t start = (i > 0) ? dIndex[i - 1] : 0;
	db_offset_t sigFeatureCount = getSigFeatureCount<DIM, NUM_TYPE>(i, dIndex);
	return dData + start * (DIM + 1) + sigFeatureCount; // Skip weigths
}

template <int DIM, typename NUM_TYPE>
__device__ __forceinline__ const NUM_TYPE *getWeightPtr(sig_id_t i, const NUM_TYPE *dData, const db_offset_t *dIndex)
{
	db_offset_t offset = (i > 0) ? dIndex[i - 1] : 0;
	return dData + offset * (db_offset_t)(DIM + 1);
}

/**
 * \brief Calculates "dot product" between features. Must be with the same args for the whole block and with BLOCK_SIZE * sizeof(IN_TYPE) shared memory.
 * \param out pointer to the result. Only the first thread in the block will get the result
 * \param fl1 Pointer to the beginning of the first feature list
 * \param w1 Pointer to the beginning of the first weight list
 * \param fl2 Pointer to the beginning of the second feature list
 * \param w2 Pointer to the beginning of the second weight list
 * \param sigFeatureCount1 Number of features in the first list
 * \param sigFeatureCount2 Number of features in the second list
 * \param alpha Alpha parameter
 */
template <int DIM, typename NUM_TYPE, typename IN_TYPE>
__device__ void calculateDotProd(IN_TYPE *out, const NUM_TYPE *fl1, const NUM_TYPE *w1, const NUM_TYPE *fl2, const NUM_TYPE *w2,
								 const int sigFeatureCount1, const int sigFeatureCount2, const IN_TYPE alpha)
{
	int tidx = threadIdx.x;
	int blocksize = blockDim.x;

	extern __shared__ char shared_mem_raw[];
	IN_TYPE *block_subresults = reinterpret_cast<IN_TYPE *>(shared_mem_raw);
	block_subresults[tidx] = 0.0;

	size_t totalSummands = (size_t)sigFeatureCount1 * sigFeatureCount2;
	for (size_t s = tidx; s < totalSummands; s += blocksize)
	{
		int i1 = s % sigFeatureCount1;
		int i2 = s / sigFeatureCount1;

		IN_TYPE L2_acc = 0.0;
		IN_TYPE diff;
		const NUM_TYPE *f1 = fl1 + i1 * DIM;
		const NUM_TYPE *f2 = fl2 + i2 * DIM;
		for (int i = 0; i < DIM; ++i)
		{
			diff = (IN_TYPE)f1[i] - f2[i];
			L2_acc += diff * diff;
		}
		L2_acc *= -alpha;
		L2_acc = __expf(L2_acc);
		L2_acc *= ((IN_TYPE)w1[i1]) * w2[i2];
		block_subresults[tidx] += L2_acc;
	}
	__syncthreads();
	// reduction
	for (int s = blockDim.x / 2; s > 0; s >>= 1)
	{
		if (tidx < s)
		{
			block_subresults[tidx] += block_subresults[tidx + s];
		}
		__syncthreads();
	}
	if (tidx == 0)
		*out = block_subresults[0];
}

/**
 * \brief Calculates the SQFD distance between two signatures. Must be with the same args for the whole block and with BLOCK_SIZE * sizeof(IN_TYPE) shared memory.
 * \param out Output pointer
 * \param i1 Index of the first signature
 * \param i2 Index of the second signature
 * \param dData GPU pointer to the data array
 * \param dIndex GPU pointer to the signature offset array
 * \param dSelfDistance GPU pointer to the self distance array
 * \param alpha Alpha parameter
 */
template <int DIM, typename NUM_TYPE, typename IN_TYPE>
__device__ void calculateSQFD(IN_TYPE *out, sig_id_t i1, sig_id_t i2, IN_TYPE alpha, const NUM_TYPE *dData, const db_offset_t *dIndex, IN_TYPE *dSelfDistance)
{
	const NUM_TYPE *w1 = getWeightPtr<DIM, NUM_TYPE>(i1, dData, dIndex);
	const NUM_TYPE *fl1 = getFeaturePtr<DIM, NUM_TYPE>(i1, dData, dIndex);
	int sigFeatureCount1 = getSigFeatureCount<DIM, NUM_TYPE>(i1, dIndex);
	const NUM_TYPE *w2 = getWeightPtr<DIM, NUM_TYPE>(i2, dData, dIndex);
	const NUM_TYPE *fl2 = getFeaturePtr<DIM, NUM_TYPE>(i2, dData, dIndex);
	int sigFeatureCount2 = getSigFeatureCount<DIM, NUM_TYPE>(i2, dIndex);
	calculateDotProd<DIM, NUM_TYPE, IN_TYPE>(out, fl1, w1, fl2, w2, sigFeatureCount1, sigFeatureCount2, alpha);
	if (threadIdx.x == 0)
	{
		*out *= -2;
		IN_TYPE temp = dSelfDistance[i1] + dSelfDistance[i2];
		*out += temp;
		*out = (i1 == i2) ? 0.0 : *out;
	}
}

////////////////////////

////////////////////////

template <int DIM, typename NUM_TYPE>
__global__ void normalizeWeights(int sigCount, NUM_TYPE *dData, const db_offset_t *dIndex)
{
	for (int i = threadIdx.x + blockIdx.x * blockDim.x; i < sigCount; i += gridDim.x * blockDim.x)
	{
		db_offset_t offset = (i > 0) ? dIndex[i - 1] : 0;
		NUM_TYPE *w = dData + offset * (db_offset_t)(DIM + 1);
		int sigSize = getSigFeatureCount<DIM, NUM_TYPE>(i, dIndex);
		NUM_TYPE sum = 0.0;
		for (int j = 0; j < sigSize; j++)
			sum += w[j];
		for (int j = 0; j < sigSize; j++)
			w[j] /= sum;
	}
}

/**
 * \brief Kernel computing self-distances.
 * \param dData GPU pointer to the data array
 * \param dIndex GPU pointer to the signature offset array
 * \param dSelfDistance GPU pointer to the self distance array
 * \param fromId Index of the first signature to be processed
 * \param toId Index of the last signature to be processed
 * \param alpha Alpha parameter
 */
template <int DIM, typename NUM_TYPE, typename IN_TYPE>
__global__ void computeSelfDistances(sig_id_t fromSigId, sig_id_t toSigId, IN_TYPE alpha, const NUM_TYPE *dData,
									 const db_offset_t *dIndex, IN_TYPE *dSelfDistance)
{
	for (sig_id_t localId = blockIdx.x; localId < toSigId - fromSigId; localId += gridDim.x)
	{
		const NUM_TYPE *w = getWeightPtr<DIM, NUM_TYPE>(localId + fromSigId, dData, dIndex);
		const NUM_TYPE *f = getFeaturePtr<DIM, NUM_TYPE>(localId + fromSigId, dData, dIndex);
		int sigFeatureCount = getSigFeatureCount<DIM, NUM_TYPE>(localId + fromSigId, dIndex);
		calculateDotProd<DIM, NUM_TYPE, IN_TYPE>(dSelfDistance + localId, f, w, f, w, sigFeatureCount, sigFeatureCount, alpha);
	}
}

/**
 * \brief Kernel assigning signatures to clusters.
 * \param dData GPU pointer to the data array
 * \param dIndex GPU pointer to the signature offset array
 * \param dSelfDistance GPU pointer to the self distance array
 * \param alpha Alpha parameter
 * \param dRepresentants GPU pointer to the array of representants
 * \param dClusterPtr GPU pointer to the array of individual cluster members
 * \param fromCluster Index of the first cluster to be assigned to
 * \param toCluster Index of the last cluster to be assigned to
 */
template <int DIM, typename NUM_TYPE, typename IN_TYPE>
__global__ void assignToClusters(cluster_id_t fromCluster, cluster_id_t toCluster, int sigCount, int k, IN_TYPE alpha, const NUM_TYPE *dData,
								 const db_offset_t *dIndex, IN_TYPE *dSelfDistance, sig_id_t *dRepresentants, sig_id_t **dClusterPtr,
								 cluster_size_t *dClusterSizes)
{
	for (sig_id_t localSigId = blockIdx.x; localSigId < sigCount; localSigId += gridDim.x)
	{
		IN_TYPE closestDist;
		cluster_id_t closestCluster = 0;
		calculateSQFD<DIM, NUM_TYPE, IN_TYPE>(&closestDist, localSigId, dRepresentants[0], alpha, dData, dIndex, dSelfDistance);
		for (int clusterId = 1; clusterId < k; clusterId++)
		{
			sig_id_t representantId = dRepresentants[clusterId];
			if (representantId == localSigId)
			{
				closestCluster = clusterId;
				break;
			}

			IN_TYPE dist;
			calculateSQFD<DIM, NUM_TYPE, IN_TYPE>(&dist, localSigId, representantId, alpha, dData, dIndex, dSelfDistance);
			if (dist < closestDist)
			{
				closestDist = dist;
				closestCluster = clusterId;
			}
		}
		if (fromCluster <= closestCluster && closestCluster < toCluster && threadIdx.x == 0)
		{
			size_t oldVal = atomicAdd(&dClusterSizes[closestCluster - fromCluster], (cluster_size_t)1);
			dClusterPtr[closestCluster - fromCluster][oldVal] = localSigId;
		}
	}
}

/**
 * \brief Computes the sum of distances to elemnts in cluster from each other.
 * \param dData GPU pointer to the data array
 * \param dIndex GPU pointer to the signature offset array
 * \param dSelfDistance GPU pointer to the self distance array
 * \param alpha Alpha parameter
 * \param dClusterPtr GPU pointer to the array of individual cluster members
 * \param localClusterToProcess GPU-local index of the cluster to be processed
 * \param dClusterSizes GPU pointer to the array of cluster sizes
 * \param dSigDistSum GPU pointer to the distance array
 */
template <int DIM, typename NUM_TYPE, typename IN_TYPE>
__global__ void computeClusterDistances(cluster_id_t localClusterToProcess, IN_TYPE alpha, const NUM_TYPE *dData, const db_offset_t *dIndex,
										IN_TYPE *dSelfDistance, sig_id_t **dClusterPtr, cluster_size_t *dClusterSizes, IN_TYPE *dSigDistSum)
{
	// check host/device cluster indexing
	cluster_size_t clusterSize = dClusterSizes[localClusterToProcess];
	sig_id_t *cluster = dClusterPtr[localClusterToProcess];
	cluster_size_t totalSummands = (clusterSize * clusterSize);
	for (size_t I = blockIdx.x; I < totalSummands; I += 8 * gridDim.x)
	{
		size_t i = I;
		for (size_t t = 0; t < 8; t++)
		{
			cluster_size_t sigClusterId1 = i % clusterSize;
			cluster_size_t sigClusterId2 = i / clusterSize;
			if (!(sigClusterId1 > sigClusterId2))
				continue;

			IN_TYPE d = 0.0;
			calculateSQFD<DIM, NUM_TYPE, IN_TYPE>(&d, cluster[sigClusterId1], cluster[sigClusterId2], alpha, dData, dIndex, dSelfDistance);
			if (threadIdx.x == 0)
			{
				atomicAdd(&dSigDistSum[sigClusterId1], d);
				atomicAdd(&dSigDistSum[sigClusterId2], d);
			}
			i++;
			if (i >= totalSummands)
				break;
		}
	}
}
/**
 * \brief finds the new cluster representant and sets it locally to dSigDistSum
 * \param dRepresentants GPU pointer to the array of representants
 * \param dClusterPtr GPU pointer to the array of individual cluster members
 * \param clusterToProcess GPU-local index of the cluster to be processed
 * \param sigCount Number of signatures
 * \param dClusterSizes GPU pointer to the array of cluster sizes
 * \param dSigDistSum GPU pointer to the distance array
 */
template <int DIM, typename NUM_TYPE, typename IN_TYPE>
__global__ void findClusterRepresentant(cluster_id_t locClusterId, cluster_id_t globClusterId, sig_id_t *dRepresentants, sig_id_t **dClusterPtr,
										cluster_size_t *dClusterSizes, IN_TYPE *dSigDistSum)
{
	cluster_size_t clusterSize = dClusterSizes[locClusterId];
	sig_id_t *cluster = dClusterPtr[locClusterId];
	if (threadIdx.x == 0 && blockIdx.x == 0)
	{
		sig_id_t reprCandidate = 0;
		IN_TYPE minTotalDist = INFINITY;
		for (int i = 0; i < clusterSize; i++)
		{
			if (minTotalDist > dSigDistSum[i])
			{
				minTotalDist = dSigDistSum[i];
				reprCandidate = cluster[i];
			}
		}
		dRepresentants[globClusterId] = reprCandidate;
	}
}

////////////////////////

////////////////////////

template <int DIM, typename NUM_TYPE>
void run_normalizeWeights(int sigCount, NUM_TYPE *dData, const db_offset_t *dIndex)
{
	const unsigned int BLOCK_NUMBER = 256;
	constexpr unsigned int BLOCK_SIZE = 256;
	normalizeWeights<DIM, NUM_TYPE><<<BLOCK_NUMBER, BLOCK_SIZE>>>(sigCount, dData, dIndex);
}

template <int DIM, typename NUM_TYPE, typename IN_TYPE>
void run_computeSelfDistances(sig_id_t fromSigId, sig_id_t toSigId, IN_TYPE alpha, const NUM_TYPE *dData, const db_offset_t *dIndex, IN_TYPE *dSelfDistance)
{
	const unsigned int BLOCK_NUMBER = 256;
	constexpr unsigned int BLOCK_SIZE = 256; // MIN 32 - > warp size
	constexpr unsigned int SHM_SIZE = BLOCK_SIZE * sizeof(IN_TYPE);
	computeSelfDistances<DIM, NUM_TYPE, IN_TYPE><<<BLOCK_NUMBER, BLOCK_SIZE, SHM_SIZE>>>(fromSigId, toSigId, alpha, dData, dIndex, dSelfDistance);
}

template <int DIM, typename NUM_TYPE, typename IN_TYPE>
void run_assignToClusters(cluster_id_t fromCluster, cluster_id_t toCluster, int sigCount, int k, IN_TYPE alpha, const NUM_TYPE *dData,
						  const db_offset_t *dIndex, IN_TYPE *dSelfDistance, sig_id_t *dRepresentants, sig_id_t **dClusterPtr, cluster_size_t *dClusterSizes)
{
	const unsigned int BLOCK_NUMBER = 256;
	constexpr unsigned int BLOCK_SIZE = 256; // MIN 32 - > warp size
	constexpr unsigned int SHM_SIZE = BLOCK_SIZE * sizeof(IN_TYPE);
	cudaMemset(dClusterSizes, 0, (toCluster - fromCluster) * sizeof(cluster_size_t));
	assignToClusters<DIM, NUM_TYPE, IN_TYPE><<<BLOCK_NUMBER, BLOCK_SIZE, SHM_SIZE>>>(fromCluster, toCluster, sigCount, k, alpha, dData,
																					 dIndex, dSelfDistance, dRepresentants, dClusterPtr, dClusterSizes);
}

template <int DIM, typename NUM_TYPE, typename IN_TYPE>
void run_findRepresentant(cluster_id_t locClusterId, cluster_id_t globClusterId, int sigCount, const NUM_TYPE *dData, const db_offset_t *dIndex,
						  IN_TYPE *dSelfDistance, IN_TYPE alpha, sig_id_t *dRepresentants, sig_id_t **dClusterPtr, cluster_size_t *dClusterSizes,
						  IN_TYPE *dSigDistSum)
{
	const unsigned int BLOCK_NUMBER = 256;
	constexpr unsigned int BLOCK_SIZE = 256; // MIN 32 - > warp size
	constexpr unsigned int SHM_SIZE = BLOCK_SIZE * sizeof(IN_TYPE);

	cudaMemset(dSigDistSum, 0.0, sigCount * sizeof(IN_TYPE));
	computeClusterDistances<DIM, NUM_TYPE, IN_TYPE><<<BLOCK_NUMBER, BLOCK_SIZE, SHM_SIZE>>>(locClusterId, alpha, dData, dIndex, dSelfDistance,
																							dClusterPtr, dClusterSizes, dSigDistSum);
	findClusterRepresentant<DIM, NUM_TYPE, IN_TYPE><<<1, 1>>>(locClusterId, globClusterId, dRepresentants, dClusterPtr, dClusterSizes, dSigDistSum);
}

////////////////////////

////////////////////////

template void run_normalizeWeights<7, float>(int sigCount, float *dData, const db_offset_t *dIndex);
template void run_computeSelfDistances<7, float, float>(sig_id_t fromId, sig_id_t toId, float alpha, const float *dData, const db_offset_t *dIndex, float *dSelfDistance);
template void run_computeSelfDistances<7, float, double>(sig_id_t fromId, sig_id_t toId, double alpha, const float *dData, const db_offset_t *dIndex, double *dSelfDistance);
template void run_assignToClusters<7, float, float>(cluster_id_t fromCluster, cluster_id_t toCluster, int sigCount, int k, float alpha, const float *dData, const db_offset_t *dIndex, float *dSelfDistance, sig_id_t *dRepresentants, sig_id_t **dClusterPtr, cluster_size_t *dClusterSizes);
template void run_assignToClusters<7, float, double>(cluster_id_t fromCluster, cluster_id_t toCluster, int sigCount, int k, double alpha, const float *dData, const db_offset_t *dIndex, double *dSelfDistance, sig_id_t *dRepresentants, sig_id_t **dClusterPtr, cluster_size_t *dClusterSizes);
template void run_findRepresentant<7, float, float>(cluster_id_t locClusterId, cluster_id_t globClusterId, int sigCount, const float *dData, const db_offset_t *dIndex, float *dSelfDistance, float alpha, sig_id_t *dRepresentants, sig_id_t **dClusterPtr, cluster_size_t *dClusterSizes, float *dSigDistSum);
template void run_findRepresentant<7, float, double>(cluster_id_t locClusterId, cluster_id_t globClusterId, int sigCount, const float *dData, const db_offset_t *dIndex, double *dSelfDistance, double alpha, sig_id_t *dRepresentants, sig_id_t **dClusterPtr, cluster_size_t *dClusterSizes, double *dSigDistSum);