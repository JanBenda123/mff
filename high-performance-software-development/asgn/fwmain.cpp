#include "fwasgn.hpp"

#include "fmwkng.hpp"

#include "fwsol.hpp"

#include <iostream>
#include <sstream>
#include <fstream>

///////////////////////////////

namespace fwmain {
	template<typename G>
	struct run_thread_ftor {
		template< typename CTX>
		void operator()(CTX&& ctx2) const
		{
			using namespace fmwkng;
			using policy = typename platform_t<decltype(ctx2)>::policy;
			for (auto&& ctx3 : for_range<size>(ctx2))
			{
				G gen(
					std::mt19937_64::default_seed + ctx2.thread_index()
				);

				auto s = get<size>(ctx3);

				auto vec = fwasgn::prepare_fill(gen, s);

				using matrix_t = fwsol::matrix<policy>;
				matrix_t c(s);

				for (auto&& ctx5 : auto_measurement<repeat_policy>(ctx3, 1024))
				{
					for (auto i : for_index<repeats>(ctx5))
					{
						fwasgn::fill_matrix(c, vec);
						c.floyd_warshall();
						fmwkng::sink(i);
					}
					if (stop_for_results(ctx5))
					{
						std::size_t h = fwasgn::chksum(c);
						store_result<chksum>(ctx5, h);
					}
				}

				/*{
					auto g = guard(ctx3);
					fwasgn::verify(std::cout, c, a, b);
				}*/
			}
		}
	};

	template<typename G>
	struct run_platform_ftor {
		template< typename CTX>
		void operator()(CTX&& ctx1) const
		{
			using namespace fmwkng;
#ifdef NDEBUG
			for_parallel(ctx1, run_thread_ftor<G>());
#else
			run_thread_ftor<G>()(ctx1);
#endif
		}
	};

	fmwkng::gold_holder& gold_master()
	{
		static fmwkng::gold_holder the;
		return the;
	}
}


int main(int argc, char** argv)
{
	using namespace fmwkng;
	root<fwmain::root_config> ctx1(argc, argv, fwmain::gold_master().collect());
	//std::cout << "Running..." << std::endl;
	//for_platforms(ctx1, fwmain::run_platform_ftor< fwasgn::policy_zero>());
	for_platforms(ctx1, fwmain::run_platform_ftor< fwasgn::policy_random>());
	//for_platforms(ctx1, fwmain::run_platform_ftor< fwasgn::policy_one>());
	//std::cout << "Done." << std::endl;
	return 0;
}

///////////////////////////////
