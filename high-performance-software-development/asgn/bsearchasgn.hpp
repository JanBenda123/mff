#ifndef bsearchasgn_hpp_
#define bsearchasgn_hpp_

#include <cstddef>
#include <memory>
#include <vector>
#include <cassert>
#include <random>

#include "fmwkng.hpp"

//#include <emmintrin.h>

///////////////////////////////

namespace bsearchasgn {

	using data_element = std::int32_t;

	struct core_generator {

		template< typename E>
		core_generator(std::size_t opsize, E&& engine)
			: data_(opsize)
		{
			fmwkng::well_defined_uniform uni(0, 0x7FFFFFFF);
			for (std::size_t j = 0; j < opsize; ++j)
			{
				data_[j] = data_element(uni(engine));
			}
		}

		std::vector< data_element> data_;
	};

	struct core_generator_sorted : public core_generator {

		template< typename E>
		core_generator_sorted(std::size_t opsize, E&& engine)
			: core_generator(opsize, std::forward<E>(engine))
		{
			std::sort(data_.begin(), data_.end());
		}
	};

	struct generator_inner {

		const data_element* inner_data() const
		{

			return inner_data_.data_.data();
		}

		std::size_t inner_size() const
		{
			return inner_data_.data_.size();
		}

		generator_inner(std::uint_fast64_t seed, std::size_t isize)
			: engine_(seed),
			inner_data_(isize, engine_)
		{
		}

	private:
		std::mt19937_64 engine_;
		core_generator_sorted inner_data_;
	};

	struct generator_outer {

		const data_element* outer_data() const
		{
			return outer_data_.data_.data();
		}

		std::size_t outer_size() const
		{
			return outer_data_.data_.size();
		}

		generator_outer(std::uint_fast64_t seed, std::size_t osize)
			: engine_(seed),
			outer_data_(osize, engine_)
		{
		}

	private:
		std::mt19937_64 engine_;
		core_generator outer_data_;
	};

	inline void check_low(std::ostream& log, const data_element* bd, std::size_t bs, data_element cmp, std::size_t k)
	{
		for (std::size_t j = 0; j < bs; ++j)
		{
			if (bd[j] < cmp)
			{
				log << "Too low value at bucket[" << k << "][" << j << "]" << std::endl;
			}
		}
	}

	inline void check_high(std::ostream& log, const data_element* bd, std::size_t bs, data_element cmp, std::size_t k)
	{
		for (std::size_t j = 0; j < bs; ++j)
		{
			if (bd[j] >= cmp)
			{
				log << "Too high value at bucket[" << k << "][" << j << "]" << std::endl;
			}
		}
	}

	template< typename D>
	inline void final_check(std::ostream & log, const generator_inner& igen, const generator_outer& ogen, const D& output)
	{
		std::size_t total = 0;
		{
			// inspect first bucket
			std::pair< const data_element*, std::size_t> rv = output.bucket(0);
			check_high(log, rv.first, rv.second, igen.inner_data()[0], 0);
			total += rv.second;
		}
		for (std::size_t k = 1; k < igen.inner_size(); ++k)
		{
			// inspect k-th bucket
			std::pair< const data_element*, std::size_t> rv = output.bucket(k);
			check_low(log, rv.first, rv.second, igen.inner_data()[k - 1], k);
			check_high(log, rv.first, rv.second, igen.inner_data()[k], k);
			total += rv.second;
		}
		{
			// inspect last bucket
			std::pair< const data_element*, std::size_t> rv = output.bucket(igen.inner_size());
			check_low(log, rv.first, rv.second, igen.inner_data()[igen.inner_size() - 1], igen.inner_size());
			total += rv.second;
		}
		if (total != ogen.outer_size())
		{
			log << "TOTAL SIZE OF BUCKETS " << total << " DOES NOT MATCH OUTER DATA SIZE " << ogen.outer_size() << std::endl;
		}
	}

	template< typename D>
	inline std::uint_fast64_t chksum(const generator_inner& igen, const D& output)
	{
		std::uint_fast64_t total = 0;
		for (std::size_t k = 0; k <= igen.inner_size(); ++k)
		{
			// inspect k-th bucket
			std::pair< const data_element*, std::size_t> rv = output.bucket(k);
			std::uint_fast64_t chash = 0;
			for (std::size_t i = 0; i < rv.second; ++i)
			{
				static constexpr auto prime = (std::uint_fast64_t(1) << 61) - 1;
				auto v = rv.first[i];
				if ( v )
					chash += prime / v;	
			}
			total = (total << 7) ^ (total >> 57) ^ chash;
		}
		return total;
	}
}

namespace bsearchsol {

	struct policy_scalar;
	struct policy_sse;
	struct policy_avx;
	struct policy_avx512;
};

namespace bsearchmain {
	struct platform_scalar {
		using tag_category = fmwkng::platform_tag_category;
		static auto name() { return "scalar"; }
		static auto code_name() { return "bsearchmain::platform_scalar"; }
		using policy = bsearchsol::policy_scalar;
	};

	struct platform_sse {
		using tag_category = fmwkng::platform_tag_category;
		static auto name() { return "sse"; }
		static auto code_name() { return "bsearchmain::platform_sse"; }
		using policy = bsearchsol::policy_sse;
	};

	struct platform_avx {
		using tag_category = fmwkng::platform_tag_category;
		static auto name() { return "avx"; }
		static auto code_name() { return "bsearchmain::platform_avx"; }
		using policy = bsearchsol::policy_avx;
	};

	struct platform_avx512 {
		using tag_category = fmwkng::platform_tag_category;
		static auto name() { return "avx512"; }
		static auto code_name() { return "bsearchmain::platform_avx512"; }
		using policy = bsearchsol::policy_avx512;
	};

	struct isize {
		using tag_category = fmwkng::range_tag_category;
		static auto name() { return "isize"; }
		static auto code_name() { return "bsearchmain::isize"; }
		static auto enumerator() {
			return fmwkng::logarithmic(
				0x40,
#ifdef NDEBUG				
				0x10000,
#else
				0x4000,
#endif
#ifdef NDEBUG				
				0x4
#else
				0x10
#endif
			);
		}
	};

	struct osize {
		using tag_category = fmwkng::range_tag_category;
		static auto name() { return "osize"; }
		static auto code_name() { return "bsearchmain::osize"; }
		static auto enumerator() {
			return fmwkng::logarithmic(
				0x400,
#ifdef NDEBUG				
				0x40000,
#else
				0x4000,
#endif
				0x10
			);
		}
	};

	struct repeats {
		using tag_category = fmwkng::range_tag_category;
		static auto name() { return "repeats"; }
		static auto code_name() { return "bsearchmain::repeats"; }
		static auto enumerator() {
			return fmwkng::auto_repeat(
#ifdef NDEBUG				
				0x1000000
#else
				0x10000
#endif
			);
		}
	};

	inline std::size_t log2(std::size_t s)
	{
		std::size_t i = 0;
		for (; s; s >>= 1)
			++i;
		return i;
	}

	struct repeat_policy {
		using ranges = fmwkng::ranges< repeats>;
		static auto name() { return "time_per_comparison"; }
		static auto code_name() { return "bsearchmain::repeat_policy"; }
		template< typename CTX>
		static auto complexity(CTX&& ctx)
		{
			return (std::uint_fast64_t)log2(fmwkng::get<isize>(ctx)) * fmwkng::get<osize>(ctx) + fmwkng::get<isize>(ctx);
		}
		static constexpr fmwkng::average_t minimum_count =
#ifdef NDEBUG				
			1000000000ULL
#else
			100000000ULL
#endif
			;
	};

	struct chksum {
		using tag_category = fmwkng::result_tag_category;
		static auto name() { return "chksum"; }
		static auto code_name() { return "bsearchmain::chksum"; }
		using value_type = std::size_t;
	};

	struct root_config {
		static auto code_name() { return "bsearchmain::root_config"; }
		static auto code_header_name() { return "bsearchasgn.hpp"; }
		static auto code_namespace_name() { return "bsearchmain"; }
		using platforms = fmwkng::platforms<
#ifdef USE_AVX512
			platform_avx512
#else
#ifdef USE_AVX
			platform_avx
#else
			platform_sse
#endif
#endif
		>;
		using ranges = fmwkng::ranges<isize, osize, repeats>;
	};

	fmwkng::gold_holder& gold_master();
}
#endif

