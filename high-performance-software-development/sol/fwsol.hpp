#ifndef fwsol_hpp
#define fwsol_hpp

#include <cstddef>
#include <cstdint>
#include <vector>

#include <cstdlib>
#include <new>
#include <algorithm>
#include <immintrin.h>

namespace fwsol
{
	using size_t = std::size_t;
	using matrix_element = std::uint16_t;

	template <typename T, size_t K>
	class AlignedAllocator
	{
	public:
		using value_type = T;
		using pointer = T *;
		using const_pointer = const T *;
		using reference = T &;
		using const_reference = const T &;

		AlignedAllocator() noexcept = default;

		template <typename U>
		AlignedAllocator(const AlignedAllocator<U, K> &) noexcept {}

		template <typename U>
		struct rebind
		{
			using other = AlignedAllocator<U, K>;
		};

		T *allocate(size_t n)
		{
			if (n == 0)
				return nullptr;

			size_t alignment = 1ULL << K;
			size_t total_size = n * sizeof(T);

			if (total_size % alignment != 0)
			{
				total_size = ((total_size / alignment) + 1) * alignment;
			}

			void *ptr = std::aligned_alloc(alignment, total_size);

			if (!ptr)
			{
				throw std::bad_alloc();
			}

			return reinterpret_cast<T *>(ptr);
		}

		void deallocate(T *p, [[maybe_unused]] size_t n) noexcept
		{
			std::free(p);
		}
	};

	template <typename T, typename U, size_t K>
	bool operator==(const AlignedAllocator<T, K> &, const AlignedAllocator<U, K> &) { return true; }

	template <typename T, typename U, size_t K>
	bool operator!=(const AlignedAllocator<T, K> &, const AlignedAllocator<U, K> &) { return false; }

	template <typename policy>
	class matrix
	{
	public:
		static constexpr matrix_element inf = 0x7FFF;

		matrix(size_t s)
			: v_(s * s, inf), size_(s)
		{
			for (size_t i = 0; i < size_; ++i)
				set(i, i, 0);
		}

		void clear()
		{
			for (auto &&a : v_)
				a = inf;
			for (size_t i = 0; i < size_; ++i)
				set(i, i, 0);
		}

		size_t size() const
		{
			return size_;
		}

		void set(size_t i, size_t j, matrix_element e)
		{
			v_[pos(i, j)] = e;
		}

		matrix_element get(size_t i, size_t j) const
		{
			return v_[pos(i, j)];
		}

		void floyd_warshall()
		{
			for (size_t k = 0; k < size_; ++k)
			{
				matrix_element *row_k = &v_[k * size_];
				for (size_t i = 0; i < size_; ++i)
				{
					matrix_element v_ik = get(i, k);
					if (v_ik >= inf)
						continue;

					policy::dispatch_impl(&v_[i * size_], row_k, v_ik, size_);
				}
			}
		}

	private:
		std::vector<matrix_element, AlignedAllocator<matrix_element, 6>> v_;
		size_t size_;

		size_t pos(size_t i, size_t j) const
		{
			return size_ * i + j;
		}

		void scalar_impl(matrix_element *row_i, matrix_element *row_k, matrix_element v_ik)
		{
			for (size_t j = 0; j < size_; ++j)
			{
				row_i[j] = std::min(row_i[j], (matrix_element)(v_ik + row_k[j])); // No vectorization because of required but unnecessary cast
			}
		}
	};

	struct policy_sse
	{
		static void dispatch_impl(matrix_element *row_i, matrix_element *row_k, matrix_element v_ik, size_t size)
		{
			__m128i _v_ik = _mm_set1_epi16(v_ik);
			for (size_t j = 0; j < size; j += 8)
			{
				__m128i _v_ij = _mm_load_si128((__m128i *)&row_i[j]);
				__m128i _v_kj = _mm_load_si128((__m128i *)&row_k[j]);

				__m128i _sum = _mm_adds_epu16(_v_ik, _v_kj);
				__m128i _min = _mm_min_epu16(_sum, _v_ij);

				_mm_store_si128((__m128i *)&row_i[j], _min);
			}
		}
	};

#ifdef USE_AVX
	struct policy_avx
	{
		static void dispatch_impl(matrix_element *row_i, matrix_element *row_k, matrix_element v_ik, size_t size)
		{
			__m256i _v_ik = _mm256_set1_epi16(v_ik);
			for (size_t j = 0; j < size; j += 16)
			{
				__m256i _v_ij = _mm256_load_si256((__m256i *)&row_i[j]);
				__m256i _v_kj = _mm256_load_si256((__m256i *)&row_k[j]);

				__m256i _sum = _mm256_adds_epu16(_v_ik, _v_kj);
				__m256i _min = _mm256_min_epu16(_sum, _v_ij);

				_mm256_store_si256((__m256i *)&row_i[j], _min);
			}
		}
	};
#endif

#ifdef USE_AVX512
	struct policy_avx512
	{
		static void dispatch_impl(matrix_element *row_i, matrix_element *row_k, matrix_element v_ik, size_t size)
		{
			__m512i _v_ik = _mm512_set1_epi16(v_ik);
			for (size_t j = 0; j < size; j += 32)
			{
				__m512i _v_ij = _mm512_load_si512((__m512i *)&row_i[j]);
				__m512i _v_kj = _mm512_load_si512((__m512i *)&row_k[j]);

				__m512i _sum = _mm512_adds_epu16(_v_ik, _v_kj);
				__m512i _min = _mm512_min_epu16(_sum, _v_ij);

				_mm512_store_si512((__m512i *)&row_i[j], _min);
			}
		}
	};
#endif
}

#endif
