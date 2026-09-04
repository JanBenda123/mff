// dcnnasgn.hpp - Macroprocessor - The Assignment
//

#ifndef dcnnasgn_hpp_
#define dcnnasgn_hpp_

#include "fmwkng.hpp"

#include <cstddef>
#include <string>
#include <vector>
#include <random>

namespace dcnnsol {

	struct policy_scalar;
	struct policy_sse;
	struct policy_avx;
	struct policy_avx512;
};

namespace dcnnmain {
	struct platform_scalar {
		using tag_category = fmwkng::platform_tag_category;
		static auto name() { return "scalar"; }
		static auto code_name() { return "dcnnmain::platform_scalar"; }
		using policy = dcnnsol::policy_scalar;
	};

	struct platform_sse {
		using tag_category = fmwkng::platform_tag_category;
		static auto name() { return "sse"; }
		static auto code_name() { return "dcnnmain::platform_sse"; }
		using policy = dcnnsol::policy_sse;
	};

	struct platform_avx {
		using tag_category = fmwkng::platform_tag_category;
		static auto name() { return "avx"; }
		static auto code_name() { return "dcnnmain::platform_avx"; }
		using policy = dcnnsol::policy_avx;
	};

	struct platform_avx512 {
		using tag_category = fmwkng::platform_tag_category;
		static auto name() { return "avx512"; }
		static auto code_name() { return "dcnnmain::platform_avx512"; }
		using policy = dcnnsol::policy_avx512;
	};

	struct minibatch {
		using tag_category = fmwkng::range_tag_category;
		static auto name() { return "minibatch"; }
		static auto code_name() { return "dcnnmain::minibatch"; }
		static auto enumerator() {
			return fmwkng::logarithmic(
#ifdef NDEBUG				
				16, 16, 5
#else
				16, 16, 5
#endif
			);
		}
	};

	struct superbatch {
		using tag_category = fmwkng::range_tag_category;
		static auto name() { return "superbatch"; }
		static auto code_name() { return "dcnnmain::superbatch"; }
		static auto enumerator() {
			return fmwkng::logarithmic(
#ifdef NDEBUG				
				8, 8, 2
#else
				1, 1, 2
#endif
			);
		}
	};

	struct total {
		using tag_category = fmwkng::range_tag_category;
		static auto name() { return "total"; }
		static auto code_name() { return "dcnnmain::total"; }
		static auto enumerator() {
			return fmwkng::logarithmic(
#ifdef NDEBUG				
				2048, 2048, 2
#else
				16, 16, 2
#endif
			);
		}
	};

	struct loss {
		using tag_category = fmwkng::result_tag_category;
		static auto name() { return "loss"; }
		static auto code_name() { return "dcnnmain::loss"; }
		using value_type = std::size_t;
		static value_type reduction(value_type a, value_type b) {
			return std::min(a, b);
		}
		static bool ok(value_type a, value_type b) {
			return std::abs((std::ptrdiff_t)a - (std::ptrdiff_t)b) < 5;
		}
	};

	struct time {
		static auto name() { return "time"; }
		static auto code_name() { return "dcnnmain::time"; }
		static auto log10factor()
		{
			return 380;
		}
	};

	struct data_folder {
		using tag_category = fmwkng::range_tag_category;
		static auto name() { return "data-folder"; }
		static auto code_name() { return "dcnnmain::data_folder"; }
		static auto enumerator() {
			return fmwkng::parameter<std::string>("data");
		}
	};

	struct save_folder {
		using tag_category = fmwkng::range_tag_category;
		static auto name() { return "save-folder"; }
		static auto code_name() { return "dcnnmain::save_folder"; }
		static auto enumerator() {
			return fmwkng::parameter<std::string>("");
		}
	};

	struct load_folder {
		using tag_category = fmwkng::range_tag_category;
		static auto name() { return "load-folder"; }
		static auto code_name() { return "dcnnmain::load_folder"; }
		static auto enumerator() {
			return fmwkng::parameter<std::string>("");
		}
	};

	struct root_config {
		static auto code_name() { return "dcnnmain::root_config"; }
		static auto code_header_name() { return "dcnnasgn.hpp"; }
		static auto code_namespace_name() { return "dcnnmain"; }
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
		using ranges = fmwkng::ranges<data_folder, save_folder, load_folder, minibatch, superbatch, total>;
	};

	fmwkng::gold_holder& gold_master();
}

#endif
