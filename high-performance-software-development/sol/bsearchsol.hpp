#ifndef bsearchsol_hpp_
#define bsearchsol_hpp_

#include <cstdint>
#include <utility>
#include <algorithm>
#include <immintrin.h>

///////////////////////////////

namespace bsearchsol
{

	using data_element = std::int32_t;
	using size_t = std::size_t;
	using bucket_id = std::int32_t;

	template <typename policy>
	class bsearch_inner
	{
	public:
		data_element *idata_bst; // [isize]
		size_t isize;
		data_element last_border;
		bsearch_inner(const data_element *data, size_t size)
		{
			idata_bst = (data_element *)std::aligned_alloc(32, size * sizeof(data_element));
			isize = size;
			int start = size / 2 - 1;
			int stride = size;
			int dest_i = 0;
			last_border = data[isize - 1];

			// Group idata in BFS ordering of BST, expecting isize to be 2**N
			while (stride >= 2)
			{
				for (int src_i = start; src_i < size; src_i += stride)
				{
					idata_bst[dest_i] = data[src_i];
					dest_i++;
				}
				start = (start + 1) / 2 - 1;
				stride /= 2;
			}
		}

		~bsearch_inner()
		{
			std::free(idata_bst);
		}
	};

	template <typename policy>
	class bsearch_outer
	{
	private:
		const bsearch_inner<policy> &inner;
		size_t osize;
		data_element *odata;
		bucket_id *bucket_asgn;
		data_element *sorted_odata;
		size_t *offsets;

	public:
		bsearch_outer(const bsearch_inner<policy> &inner, size_t osize)
			: inner(inner), osize(osize)
		{
			odata = (data_element *)std::aligned_alloc(32, osize * sizeof(data_element));
			bucket_asgn = (bucket_id *)std::aligned_alloc(32, osize * sizeof(bucket_id));
			sorted_odata = nullptr;
			offsets = nullptr;
		}

		~bsearch_outer()
		{
			std::free(odata);
			std::free(bucket_asgn);
			if (sorted_odata)
				delete[] sorted_odata;
			if (offsets)
				delete[] offsets;
		}

		void bucketize(const data_element *data) // size of data is osize
		{
			// Ppepare
			std::copy(data, data + osize, odata);
			for (size_t i = 0; i < osize; ++i)
			{
				bucket_asgn[i] = 0;
			}

			// Assign
			for (size_t level = 1; level < inner.isize; level <<= 1)
			{
				policy::inner_loop(odata, osize, bucket_asgn, inner.idata_bst, inner.isize);
			}
			policy::bsearch_finish(odata, bucket_asgn, inner.last_border, osize, inner.isize);

			// Finish
			if (offsets)
				delete[] offsets;
			offsets = policy::calculate_offsets(bucket_asgn, osize, inner.isize);
			if (sorted_odata)
				delete[] sorted_odata;
			sorted_odata = policy::sort(odata, bucket_asgn, osize, inner.isize, offsets);
		}

		using bucket_rv = std::pair<const data_element *, bucket_id>;

		bucket_rv bucket(bucket_id k) const
		{
			if (!offsets || !sorted_odata || k >= inner.isize + 1)
				return {nullptr, 0};
			size_t start = offsets[k];
			size_t end = k < inner.isize ? offsets[k + 1] : osize;
			return {sorted_odata + start, end - start};
		}
	};

	struct policy_scalar
	{
		static void inner_loop(data_element *odata, size_t osize, bucket_id *bucket_asgn, data_element *idata_bst, size_t isize)
		{
			for (size_t i = 0; i < osize; i++)
			{
				data_element d = odata[i];
				data_element b = idata_bst[bucket_asgn[i]];
				bucket_asgn[i] = (bucket_asgn[i] << 1) + 1 + (d >= b);
			}
		}

		static void bsearch_finish(data_element *odata, bucket_id *bucket_asgn, data_element last_border, size_t osize, size_t isize)
		{
			for (size_t i = 0; i < osize; ++i)
			{
				bucket_asgn[i] += (odata[i] >= last_border); // takes care of the last border
				bucket_asgn[i] -= isize - 1;				 // shifts to the bin numbres
			}
		}

		static size_t *calculate_offsets(bucket_id *bucket_asgn, size_t osize, size_t isize)
		{
			size_t *offsets = new size_t[isize + 1];
			// annulate offsets
			for (size_t i = 0; i < isize + 1; ++i)
			{
				offsets[i] = 0;
			}

			// count elements
			for (size_t i = 0; i < osize; i++)
			{
				bucket_id b = bucket_asgn[i];
				if (b < isize)
					offsets[b + 1]++;
			}

			// calculate offsets
			for (size_t i = 0; i < isize; ++i)
			{
				offsets[i + 1] = offsets[i + 1] + offsets[i];
			}
			return offsets;
		}

		static data_element *sort(data_element *odata, bucket_id *bucket_asgn, size_t osize, size_t isize, size_t *offsets)
		{
			data_element *odata_sorted = new data_element[osize];
			size_t *bucket_count = new size_t[isize + 1]();
			// assign
			for (size_t i = 0; i < osize; ++i)
			{
				bucket_id b = bucket_asgn[i];
				size_t pos = offsets[b] + bucket_count[b]++;
				odata_sorted[pos] = odata[i];
			}
			delete[] bucket_count;
			return odata_sorted;
		}
	};

	struct policy_sse
	{
		static void inner_loop(data_element *odata, size_t osize, bucket_id *bucket_asgn, data_element *idata_bst, size_t isize)
		{
			return policy_scalar::inner_loop(odata, osize, bucket_asgn, idata_bst, isize);
		}

		static void bsearch_finish(data_element *odata, bucket_id *bucket_asgn, data_element last_border, size_t osize, size_t isize)
		{
			return policy_scalar::bsearch_finish(odata, bucket_asgn, last_border, osize, isize);
		}

		static size_t *calculate_offsets(bucket_id *bucket_asgn, size_t osize, size_t isize)
		{
			return policy_scalar::calculate_offsets(bucket_asgn, osize, isize);
		}

		static data_element *sort(data_element *odata, bucket_id *bucket_asgn, size_t osize, size_t isize, size_t *offsets)
		{
			return policy_scalar::sort(odata, bucket_asgn, osize, isize, offsets);
		}
	};

	struct policy_avx
	{
		static void inner_loop(data_element *odata, size_t osize, bucket_id *bucket_asgn, data_element *idata_bst, size_t isize)
		{
			return policy_scalar::inner_loop(odata, osize, bucket_asgn, idata_bst, isize);
		}

		static void bsearch_finish(data_element *odata, bucket_id *bucket_asgn, data_element last_border, size_t osize, size_t isize)
		{
			return policy_scalar::bsearch_finish(odata, bucket_asgn, last_border, osize, isize);
		}

		static size_t *calculate_offsets(bucket_id *bucket_asgn, size_t osize, size_t isize)
		{
			return policy_scalar::calculate_offsets(bucket_asgn, osize, isize);
		}

		static data_element *sort(data_element *odata, bucket_id *bucket_asgn, size_t osize, size_t isize, size_t *offsets)
		{
			return policy_scalar::sort(odata, bucket_asgn, osize, isize, offsets);
		}
	};

	struct policy_avx512
	{
		static void inner_loop(data_element *odata, size_t osize, bucket_id *bucket_asgn, data_element *idata_bst, size_t isize)
		{
			return policy_scalar::inner_loop(odata, osize, bucket_asgn, idata_bst, isize);
		}

		static void bsearch_finish(data_element *odata, bucket_id *bucket_asgn, data_element last_border, size_t osize, size_t isize)
		{
			return policy_scalar::bsearch_finish(odata, bucket_asgn, last_border, osize, isize);
		}

		static size_t *calculate_offsets(bucket_id *bucket_asgn, size_t osize, size_t isize)
		{
			return policy_scalar::calculate_offsets(bucket_asgn, osize, isize);
		}

		static data_element *sort(data_element *odata, bucket_id *bucket_asgn, size_t osize, size_t isize, size_t *offsets)
		{
			return policy_scalar::sort(odata, bucket_asgn, osize, isize, offsets);
		}
	};

}
#endif
