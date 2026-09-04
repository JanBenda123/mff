#ifndef fwasgn_hpp_
#define fwasgn_hpp_

#include <cstddef>
#include <memory>
#include <vector>
#include <cassert>
#include <random>
#include <algorithm>

#include "fmwkng.hpp"

namespace fwasgn {

	using matrix_element = std::uint16_t;

	inline matrix_element matrix_element_zero()
	{
		return 0xFFFF;
	}

	inline matrix_element matrix_element_add_mul(matrix_element c, matrix_element a, matrix_element b)
	{
		using std::min;
		return min((int)c, a + b);	// '+' done in int32_t; min() causes saturation
	}

	template< typename M>
	inline std::int_fast64_t chksum(const M& m)
	{
		std::int_fast64_t chksum = 0;

		for (std::size_t i = 0; i < m.size(); ++i)
			for (std::size_t j = 0; j < m.size(); ++j)
			{
				matrix_element x = m.get(i, j);

				chksum = chksum * 3 + (std::int_fast64_t)x;
			}

		return chksum;
	}

	template< typename P>
	inline auto prepare_fill(P& gen, std::size_t n)
	{
		std::vector< std::tuple< std::size_t, std::size_t, matrix_element>> vec;

		auto w = 1000;
		auto m = 3 * n;
		for (std::size_t k = 0; k < m; ++k)
		{
			auto i = gen.get() % n;
			auto j = gen.get() % (n - 1);
			if (j >= i)
				++j;
			auto v = matrix_element((gen.get() % w) + 1);
			vec.emplace_back(i, j, v);
		}
		return vec;
	}

	template< typename M, typename V>
	inline void fill_matrix(M& s, V& vec)
	{
		s.clear();
		for (auto && a : vec)
		{
			s.set(std::get<0>(a), std::get<1>(a), std::get<2>(a));
		}
	}

	struct policy_zero {

		static std::string name() { return "zero"; }

		policy_zero(std::size_t seed)
		{
		}

		matrix_element get()
		{
			return 0;
		}
	};

	const int one = 1000;

	struct policy_one {

		static std::string name() { return "one"; }

		policy_one(std::size_t seed)
		{
		}

		matrix_element get()
		{
			return matrix_element(one);
		}
	};

	struct policy_random {

		static std::string name() { return "random"; }

		policy_random(std::size_t seed)
			: engine_(seed), ui_(0, 0x7FFF)	// avoid overflow for 16-bit add
		{
		}

		matrix_element get()
		{
			return matrix_element(ui_(engine_));	
		}
	private:
		std::mt19937_64 engine_;
		fmwkng::well_defined_uniform ui_;
	};

	struct policy_linear {

		static std::string name() { return "linear"; }

		policy_linear(std::size_t seed)
			: counter(0)
		{
		}

		void reset()
		{
			counter = 0;
		}

		matrix_element get()
		{
			return matrix_element((counter++) & 0x7FFF);	// avoid overflow in '+'
		}
	private:
		unsigned counter;
	};

}

namespace fwsol {

	//struct policy_scalar;
	struct policy_sse;
	struct policy_avx;
	struct policy_avx512;
}

namespace fwmain {
	/*
	struct platform_scalar {
		using tag_category = fmwkng::platform_tag_category;
		static auto name() { return "scalar"; }
		static auto code_name() { return "fwmain::platform_scalar"; }
		using policy = fwsol::policy_scalar;
	};
	*/
	struct platform_sse {
		using tag_category = fmwkng::platform_tag_category;
		static auto name() { return "sse"; }
		static auto code_name() { return "fwmain::platform_sse"; }
		using policy = fwsol::policy_sse;
	};

	struct platform_avx {
		using tag_category = fmwkng::platform_tag_category;
		static auto name() { return "avx"; }
		static auto code_name() { return "fwmain::platform_avx"; }
		using policy = fwsol::policy_avx;
	};

	struct platform_avx512 {
		using tag_category = fmwkng::platform_tag_category;
		static auto name() { return "avx512"; }
		static auto code_name() { return "fwmain::platform_avx512"; }
		using policy = fwsol::policy_avx512;
	};

	struct size {
		using tag_category = fmwkng::range_tag_category;
		static auto name() { return "size"; }
		static auto code_name() { return "fwmain::size"; }
		static auto enumerator() {
			return fmwkng::logarithmic(
				0x40,
#ifdef NDEBUG				
				0x400,
#else
				0x40,
#endif
				0x2
			);
		}
	};

	struct repeats {
		using tag_category = fmwkng::range_tag_category;
		static auto name() { return "repeats"; }
		static auto code_name() { return "fwmain::repeats"; }
		static auto enumerator() {
			return fmwkng::auto_repeat(
#ifdef NDEBUG				
				0x1000000
#else
				0x80000
#endif
			);
		}
	};

	struct repeat_policy {
		using ranges = fmwkng::ranges< repeats>;
		static auto name() { return "time_per_cell"; }
		static auto code_name() { return "fwmain::repeat_policy"; }
		template< typename CTX>
		static auto complexity(CTX&& ctx)
		{
			return (std::uint_fast64_t)fmwkng::get<size>(ctx) * fmwkng::get<size>(ctx) * fmwkng::get<size>(ctx);
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
		static auto code_name() { return "fwmain::chksum"; }
		using value_type = std::size_t;
	};

	struct root_config {
		static auto code_name() { return "fwmain::root_config"; }
		static auto code_header_name() { return "fwasgn.hpp"; }
		static auto code_namespace_name() { return "fwmain"; }
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
		using ranges = fmwkng::ranges<size, repeats>;
	};

	fmwkng::gold_holder& gold_master();
}

#endif

