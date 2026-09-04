// dcnnfmwkmain.cpp - DCNN - The Tests
//

//#define BACK
#define RANDOM_ORDER
//#define PRINT_STATS

#ifdef BACK
#include "dcnnsolback.hpp"
#else
#include "dcnnsol.hpp"
#endif

#include "dcnnasgn.hpp"
#include "fmwkng.hpp"

#include <filesystem>

namespace dcnnmain {

#ifdef BACK
	using permutation_policy = dcnnsol::permutation_policy_back;

	template< typename PP>
	using global_state = dcnnasgn::global_state_back< PP>;

	template< typename PP>
	using thread_state = dcnnasgn::thread_state_back< PP>;
#else
	using permutation_policy = dcnnsol::permutation_policy;

	template< typename PP>
	using global_state = dcnnasgn::global_state< PP>;

	template< typename PP>
	using thread_state = dcnnasgn::thread_state< PP>;
#endif

	template< typename PP>
	struct run_thread_ftor {

		run_thread_ftor(global_state<PP>& gsr)
			: gs(gsr)
		{}

		template< typename CTX>
		void operator()(CTX&& ctx5) const
		{
			using namespace fmwkng;

			thread_state<PP> ts(gs);
#ifdef RANDOM_ORDER
			std::mt19937_64 eng(std::mt19937_64::default_seed + ctx5.thread_index());
			std::uniform_int_distribution<std::size_t> distro(0, gs.input_size() - 1);
			auto input_index_generator = [&eng, &distro]() {
				return dcnnasgn::input_index(distro(eng));
				};
#else
			std::size_t index = ctx5.thread_index();
			std::size_t step = fmwkng::get<superbatch>(ctx5);
			std::size_t modulo = gs.input_size();
			auto input_index_generator = [&index, step, modulo]() {
				auto i = index;
				index = (index + step) % modulo;
				return dcnnasgn::input_index(i);
				};
#endif
			auto N = fmwkng::get<total>(ctx5) / (fmwkng::get<superbatch>(ctx5) * fmwkng::get<minibatch>(ctx5));
			for (std::size_t i = 0; i < N; ++i)
			{
				ts.minibatch_init(input_index_generator);

				{
					auto&& ctx6 = measurement<time>(ctx5, ts.minibatch_run_complexity(gs));
					ts.minibatch_run(gs);
					std::size_t h = (std::size_t)std::round(ts.loss);
					store_result<loss>(ctx6, h);
				}
				{
					auto&& ctx7 = sequential(ctx5);
					ts.minibatch_collect(gs);
#ifdef PRINT_STATS					
					dcnnasgn::combined_print_stats(ts.d, ts.bmap, std::cout);
#endif
				}
			}
		}

		global_state< PP> & gs;
	};

	template< typename PP>
	struct run_platform_ftor {
		template< typename CTX>
		void operator()(CTX&& ctx1) const
		{
			using namespace fmwkng;
			for (auto&& ctx2 : for_range<minibatch>(ctx1))
			{
				global_state<PP> gs(fmwkng::get<minibatch>(ctx2));

				{
					auto dfp = fmwkng::count<data_folder>(ctx2);
					std::filesystem::path df(!!dfp ? *dfp : std::string("data"));
					gs.read_data(df);
				}

				for (auto&& ctx3 : for_range<total>(ctx2))
				{
					for (auto&& ctx4 : for_range<superbatch>(ctx3))
					{
						{
							auto lfp = fmwkng::count<load_folder>(ctx4);
							if (!!lfp && !lfp->empty())
							{
								std::filesystem::path lf(*lfp);
								gs.load_model(lf);
							}
							else
							{
#ifdef BACK
								std::mt19937_64 eng;
								gs.init(eng);
#else
								auto dfp = fmwkng::count<data_folder>(ctx4);
								std::filesystem::path lf(!!dfp ? *dfp : std::string("data"));
								gs.load_model(lf);
#endif								
							}
						}
#ifdef NDEBUG
						for_parallel(ctx4, run_thread_ftor(gs), fmwkng::get<superbatch>(ctx4));
#else
						for_parallel(ctx4, run_thread_ftor(gs), fmwkng::get<superbatch>(ctx4), 1);
#endif
#ifdef BACK
						{
							auto sfp = fmwkng::count<save_folder>(ctx4);
							if (!!sfp && !sfp->empty())
							{
								std::filesystem::path sf(*sfp);
								gs.save_model(sf);
							}
						}
#endif
					}
				}
			}
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
	using PP = dcnnmain::permutation_policy;

	using namespace fmwkng;
	root<dcnnmain::root_config> ctx1(argc, argv, dcnnmain::gold_master().collect());
	//std::cout << "Running..." << std::endl;
	//for (auto&& ctx1 : for_range<dcnnmain::data_folder>(ctx0))
		for_platforms(ctx1, dcnnmain::run_platform_ftor<PP>());
	//std::cout << "Done." << std::endl;
	return 0;
}
