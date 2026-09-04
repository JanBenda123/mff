#ifndef KMEDOIDS_KEKRNELS_CUH
#define KMEDOIDS_KEKRNELS_CUH

#include "signatures.hpp"
#include <cstddef>
#include <cstdint>

using size_t = std::size_t;
using sig_id_t = std::size_t;
using cluster_id_t = int;
using cluster_size_t = unsigned long long; // so that atomicAdd won't complain

template <int DIM, typename NUM_TYPE>
void run_normalizeWeights(int sigCount, NUM_TYPE *dData, const db_offset_t *dIndex);

template <int DIM, typename NUM_TYPE, typename IN_TYPE>
void run_computeSelfDistances(sig_id_t fromSigId, sig_id_t toSigId, IN_TYPE alpha, const NUM_TYPE *dData, const db_offset_t *dIndex, IN_TYPE *dSelfDistance);

template <int DIM, typename NUM_TYPE, typename IN_TYPE>
void run_assignToClusters(cluster_id_t fromCluster, cluster_id_t toCluster, int sigCount, int k, IN_TYPE alpha, const NUM_TYPE *dData, const db_offset_t *dIndex, IN_TYPE *dSelfDistance, sig_id_t *dRepresentants, sig_id_t **dClusterPtr, cluster_size_t *dClusterSizes);

template <int DIM, typename NUM_TYPE, typename IN_TYPE>
void run_findRepresentant(cluster_id_t locClusterId, cluster_id_t globClusterId, int sigCount, const NUM_TYPE *dData, const db_offset_t *dIndex, IN_TYPE *dSelfDistance, IN_TYPE alpha, sig_id_t *dRepresentants, sig_id_t **dClusterPtr, cluster_size_t *dClusterSizes, IN_TYPE *dSigDistSum);
#endif
