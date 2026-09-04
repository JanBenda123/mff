#ifndef KMEDOIDS_SHARED_SIGNATURES_GPU_HPP
#define KMEDOIDS_SHARED_SIGNATURES_GPU_HPP

#include "signatures.hpp"

template <int DIM, typename NUM_TYPE = float>
class SignatureGpuAccessor : public DBSignatureList<DIM, NUM_TYPE>
{
    DBSignatureList<DIM, NUM_TYPE> *original_;

public:
    SignatureGpuAccessor(DBSignatureList<DIM, NUM_TYPE> *original)
        : DBSignatureList<DIM, NUM_TYPE>(*original)
    {
        original_ = original;
    }
    ~SignatureGpuAccessor()
    {
        delete original_;
    }

    const NUM_TYPE *getRawData() const
    {
        return this->mData;
    }

    const db_offset_t *getIndex() const
    {
        return this->mIndex;
    }

    std::size_t getTotalDataSize() const
    {
        if (this->mCount == 0)
            return 0;
        db_offset_t totalCentroids = this->mIndex[this->mCount - 1];
        return totalCentroids * (DIM + 1);
    }

    std::size_t getIndexSize() const
    {
        return this->mCount;
    }
};

#endif