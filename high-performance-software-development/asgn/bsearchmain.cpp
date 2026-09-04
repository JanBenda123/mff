#include "bsearchsol.hpp"
#include "bsearchasgn.hpp"

#include "fmwkng.hpp"

#include <iostream>
#include <fstream>
#include <sstream>

///////////////////////////////
///////////////////////////////
///////////////////////////////


namespace bsearchmain {
	template< typename policy>
	struct run_thread_ftor {
		run_thread_ftor(const bsearchasgn::generator_inner & igen, const bsearchsol::bsearch_inner<policy> & idata)
			: igen(igen), idata(idata)
		{}
		template< typename CTX>
		void operator()(CTX&& ctx2) const
		{
			using namespace fmwkng;

			for (auto&& ctx4 : for_range<osize>(ctx2))
			{
				bsearchasgn::generator_outer ogen(
					std::mt19937_64::default_seed + 1 + ctx4.thread_index(),
					get<osize>(ctx4));

				bsearchsol::bsearch_outer<policy> odata(idata, ogen.outer_size());

				for (auto&& ctx5 : auto_measurement<repeat_policy>(ctx4, 1024))
				{
					for (auto i : for_index<repeats>(ctx5))
					{
						odata.bucketize(ogen.outer_data());
						fmwkng::sink(i);
					}
					if (stop_for_results(ctx5))
					{
#ifndef NDEBUG
						bsearchasgn::final_check(std::cerr, igen, ogen, odata);
#endif
						auto h = bsearchasgn::chksum(igen, odata);
							
						store_result<chksum>(ctx5, h);
					}
				}
			}
		}
		const bsearchasgn::generator_inner& igen;
		const bsearchsol::bsearch_inner<policy>& idata;
	};

	struct run_platform_ftor {
		template< typename CTX>
		void operator()(CTX&& ctx1) const
		{
			using namespace fmwkng;
			using policy = typename platform_t<decltype(ctx1)>::policy;
			for (auto&& ctx3 : for_range<isize>(ctx1))
			{
				bsearchasgn::generator_inner igen(
					std::mt19937_64::default_seed,
					get<isize>(ctx3));

				bsearchsol::bsearch_inner<policy> idata(igen.inner_data(), igen.inner_size());
#ifdef NDEBUG
				for_parallel(ctx3, run_thread_ftor<policy>(igen, idata));
#else
				run_thread_ftor<policy>(igen, idata)(ctx3);
#endif
			}
		}
	};

	fmwkng::gold_holder& gold_master()
	{
		static fmwkng::gold_holder the;
		return the;
	}

}

///////////////////////////////

int main( int argc, char * * argv)
{
	using namespace fmwkng;
	root<bsearchmain::root_config> ctx1(argc, argv, bsearchmain::gold_master().collect());
	//std::cout << "Running..." << std::endl;
	for_platforms(ctx1, bsearchmain::run_platform_ftor());
	//std::cout << "Done." << std::endl;
	return 0;
}

///////////////////////////////
