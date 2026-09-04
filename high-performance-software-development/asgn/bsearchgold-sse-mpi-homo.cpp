#include "fmwkng.hpp"
#include "bsearchasgn.hpp"

namespace bsearchmain {
    static fmwkng::gold_pair gr_1()
    {
        fmwkng::gold_pair rv;
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::root_tag<bsearchmain::root_config>,fmwkng::impl::element_sense::OPEN>>("mpi-homo"));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::impl::version_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_platforms_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(64,1048576,4)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(308.05,192)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1()
    {
        fmwkng::impl::element_list rv;
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::root_tag<bsearchmain::root_config>,fmwkng::impl::element_sense::OPEN>>("mpi-homo"));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_platforms_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(64,1048576,4)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(308.05,192)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1()
    {
        fmwkng::impl::element_list rv = gp_1();
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::platform_sse,fmwkng::impl::element_sense::OPEN>>(std::monostate{}));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(64,1048576,4)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(308.05,192)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1()
    {
        fmwkng::impl::element_list rv = gp_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::platform_sse,fmwkng::impl::element_sense::OPEN>>(std::monostate{}));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(64,fmwkng::logarithmic(64,1048576,4))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(33.1523,24)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1()
    {
        fmwkng::impl::element_list rv = gp_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(64,fmwkng::logarithmic(64,1048576,4))));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.15268,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1_1()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_1_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.916037,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.914349,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.32229,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.1736,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1_2()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_2_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.908968,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.91376,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.35087,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.1314,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1_3()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_3_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.909674,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.914284,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.30744,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.15523,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1_4()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_4_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.916066,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.913757,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.32541,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.13055,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1_5()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_5_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.908956,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.914957,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.30664,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.18242,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1_6()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_6_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.909685,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.913755,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.35898,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.11122,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1_7()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_7_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.893409,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.914766,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.30305,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.11517,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1_8()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_8_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.893396,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.914017,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.30776,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(256,fmwkng::logarithmic(64,1048576,4))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(27.8097,24)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_2()
    {
        fmwkng::impl::element_list rv = gp_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(256,fmwkng::logarithmic(64,1048576,4))));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.47733,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_2_1()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_1_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.856895,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.852457,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.76798,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.50607,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_2_2()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_2_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.858897,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.839207,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.80796,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.51286,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_2_3()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_3_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.854248,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.849994,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.80861,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.47569,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_2_4()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_4_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.85833,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.839211,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.77815,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.48787,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_2_5()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_5_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.856931,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.852459,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.77848,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.48374,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_2_6()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_6_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.855565,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.850215,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.77796,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.43284,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_2_7()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_7_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.849611,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.859922,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.72331,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.43331,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_2_8()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_8_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.84975,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.860198,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.72336,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(64,1048576,4))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(29.2612,24)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_3()
    {
        fmwkng::impl::element_list rv = gp_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(64,1048576,4))));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.67819,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_3_1()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_1_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.78656,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.786644,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.10499,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.6986,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_3_2()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_2_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.768922,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.822647,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.10703,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.57244,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_3_3()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_3_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.787605,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.787299,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.99754,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.68627,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_3_4()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_4_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.786015,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.789169,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.11109,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.67838,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_3_5()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_5_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.786556,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.786662,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.10516,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.69297,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_3_6()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_6_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.768997,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.812838,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.11113,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.68002,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_3_7()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_7_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.785195,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.787625,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.1072,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.57434,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_3_8()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_8_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.785644,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.788339,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.00036,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(4096,fmwkng::logarithmic(64,1048576,4))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(29.7758,24)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_4()
    {
        fmwkng::impl::element_list rv = gp_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(4096,fmwkng::logarithmic(64,1048576,4))));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.72541,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_4_1()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_1_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.6965,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.862382,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.16652,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.6704,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_4_2()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_2_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.697143,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.840989,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.13227,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.67724,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_4_3()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_3_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.696089,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.86236,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.1188,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.81536,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_4_4()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_4_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.698308,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.862383,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.25467,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.65447,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_4_5()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_5_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.697307,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.840896,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.11627,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.68279,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_4_6()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_6_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.696499,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.863993,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.1223,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.81712,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_4_7()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_7_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.698163,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.864003,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.25495,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.73303,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_4_8()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_8_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.696016,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.86236,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.17465,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(64,1048576,4))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(29.9754,24)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_5()
    {
        fmwkng::impl::element_list rv = gp_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(64,1048576,4))));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.75172,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_5_1()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_1_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.587888,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.861443,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.30238,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.73764,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_5_2()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_2_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.621721,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.804671,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.31125,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.7415,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_5_3()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_3_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.58919,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.858687,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.29362,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.73883,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_5_4()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_4_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.621861,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.804478,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.31249,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.74014,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_5_5()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_5_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.588938,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.858673,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.29253,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.73811,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_5_6()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_6_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.587314,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.856145,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.29466,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.77072,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_5_7()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_7_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.608907,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.861444,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.30037,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.75673,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_5_8()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_8_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.610136,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.856131,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.29046,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(65536,fmwkng::logarithmic(64,1048576,4))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(33.4416,24)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_6()
    {
        fmwkng::impl::element_list rv = gp_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(65536,fmwkng::logarithmic(64,1048576,4))));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.19188,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_6_1()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_1_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.585209,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.842938,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.76373,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.158,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_6_2()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_2_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.561772,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.836413,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.75981,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.19651,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_6_3()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_3_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.571037,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.864012,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.76146,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.18914,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_6_4()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_4_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.581295,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.847983,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.75986,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.173,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_6_5()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_5_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.571584,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.842286,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.75913,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.16235,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_6_6()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_6_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.563602,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.83647,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.76228,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.18665,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_6_7()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_7_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.570515,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.854897,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.76124,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.1841,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_6_8()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_8_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.573536,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.849093,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.76148,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(64,1048576,4))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(53.4233,24)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_7()
    {
        fmwkng::impl::element_list rv = gp_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(64,1048576,4))));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.69107,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_7_1()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_7();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_1_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.8186,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(29));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.83893,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.03353,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.68915,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_7_2()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_7();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_2_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.81858,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(29));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.83894,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.03163,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.68785,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_7_3()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_7();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_3_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.81777,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(29));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.83895,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.03113,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.68798,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_7_4()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_7();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_4_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.81755,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(29));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.83894,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.0315,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.64332,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_7_5()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_7();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_5_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.81667,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(29));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.83893,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.98773,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.69062,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_7_6()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_7();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_6_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.81779,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(29));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.83894,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.03389,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.68861,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_7_7()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_7();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_7_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.81778,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(29));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.83892,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.0319,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.64472,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_7_8()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_7();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_8_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.81667,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(29));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.83894,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.98911,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1048576,fmwkng::logarithmic(64,1048576,4))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(71.2104,24)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_8()
    {
        fmwkng::impl::element_list rv = gp_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1048576,fmwkng::logarithmic(64,1048576,4))));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(8.87232,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_8_1()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_8();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_1_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.80249,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(12));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.93833,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.13151,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(8.84624,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_8_2()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_8();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_2_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.77894,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(12));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.93832,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.12898,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(8.93284,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_8_3()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_8();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_3_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.81714,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(12));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.93835,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.17735,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(8.92547,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_8_4()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_8();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_4_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.81086,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(12));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.93828,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.17633,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(8.9271,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_8_5()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_8();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_5_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.82191,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(12));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.93825,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.16694,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(8.91881,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_8_6()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_8();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_6_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.79887,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(12));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.93836,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.18158,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(8.93027,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_8_7()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_8();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_7_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.81464,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(12));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.93836,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.17728,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(8.85736,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_8_8()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_8();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_8_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.79327,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(12));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.93834,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.12574,1)));
        return rv;
    }
    static fmwkng::gold_data gold_results_()
    {
        fmwkng::gold_data rv;
        rv.insert(gr_1_1_1_1_1_1());
        rv.insert(gr_1_1_1_1_1_2());
        rv.insert(gr_1_1_1_1_1_3());
        rv.insert(gr_1_1_1_1_1());
        rv.insert(gr_1_1_1_1_2_1());
        rv.insert(gr_1_1_1_1_2_2());
        rv.insert(gr_1_1_1_1_2_3());
        rv.insert(gr_1_1_1_1_2());
        rv.insert(gr_1_1_1_1_3_1());
        rv.insert(gr_1_1_1_1_3_2());
        rv.insert(gr_1_1_1_1_3_3());
        rv.insert(gr_1_1_1_1_3());
        rv.insert(gr_1_1_1_1_4_1());
        rv.insert(gr_1_1_1_1_4_2());
        rv.insert(gr_1_1_1_1_4_3());
        rv.insert(gr_1_1_1_1_4());
        rv.insert(gr_1_1_1_1_5_1());
        rv.insert(gr_1_1_1_1_5_2());
        rv.insert(gr_1_1_1_1_5_3());
        rv.insert(gr_1_1_1_1_5());
        rv.insert(gr_1_1_1_1_6_1());
        rv.insert(gr_1_1_1_1_6_2());
        rv.insert(gr_1_1_1_1_6_3());
        rv.insert(gr_1_1_1_1_6());
        rv.insert(gr_1_1_1_1_7_1());
        rv.insert(gr_1_1_1_1_7_2());
        rv.insert(gr_1_1_1_1_7_3());
        rv.insert(gr_1_1_1_1_7());
        rv.insert(gr_1_1_1_1_8_1());
        rv.insert(gr_1_1_1_1_8_2());
        rv.insert(gr_1_1_1_1_8_3());
        rv.insert(gr_1_1_1_1_8());
        rv.insert(gr_1_1_1_1());
        rv.insert(gr_1_1_1_2_1_1());
        rv.insert(gr_1_1_1_2_1_2());
        rv.insert(gr_1_1_1_2_1_3());
        rv.insert(gr_1_1_1_2_1());
        rv.insert(gr_1_1_1_2_2_1());
        rv.insert(gr_1_1_1_2_2_2());
        rv.insert(gr_1_1_1_2_2_3());
        rv.insert(gr_1_1_1_2_2());
        rv.insert(gr_1_1_1_2_3_1());
        rv.insert(gr_1_1_1_2_3_2());
        rv.insert(gr_1_1_1_2_3_3());
        rv.insert(gr_1_1_1_2_3());
        rv.insert(gr_1_1_1_2_4_1());
        rv.insert(gr_1_1_1_2_4_2());
        rv.insert(gr_1_1_1_2_4_3());
        rv.insert(gr_1_1_1_2_4());
        rv.insert(gr_1_1_1_2_5_1());
        rv.insert(gr_1_1_1_2_5_2());
        rv.insert(gr_1_1_1_2_5_3());
        rv.insert(gr_1_1_1_2_5());
        rv.insert(gr_1_1_1_2_6_1());
        rv.insert(gr_1_1_1_2_6_2());
        rv.insert(gr_1_1_1_2_6_3());
        rv.insert(gr_1_1_1_2_6());
        rv.insert(gr_1_1_1_2_7_1());
        rv.insert(gr_1_1_1_2_7_2());
        rv.insert(gr_1_1_1_2_7_3());
        rv.insert(gr_1_1_1_2_7());
        rv.insert(gr_1_1_1_2_8_1());
        rv.insert(gr_1_1_1_2_8_2());
        rv.insert(gr_1_1_1_2_8_3());
        rv.insert(gr_1_1_1_2_8());
        rv.insert(gr_1_1_1_2());
        rv.insert(gr_1_1_1_3_1_1());
        rv.insert(gr_1_1_1_3_1_2());
        rv.insert(gr_1_1_1_3_1_3());
        rv.insert(gr_1_1_1_3_1());
        rv.insert(gr_1_1_1_3_2_1());
        rv.insert(gr_1_1_1_3_2_2());
        rv.insert(gr_1_1_1_3_2_3());
        rv.insert(gr_1_1_1_3_2());
        rv.insert(gr_1_1_1_3_3_1());
        rv.insert(gr_1_1_1_3_3_2());
        rv.insert(gr_1_1_1_3_3_3());
        rv.insert(gr_1_1_1_3_3());
        rv.insert(gr_1_1_1_3_4_1());
        rv.insert(gr_1_1_1_3_4_2());
        rv.insert(gr_1_1_1_3_4_3());
        rv.insert(gr_1_1_1_3_4());
        rv.insert(gr_1_1_1_3_5_1());
        rv.insert(gr_1_1_1_3_5_2());
        rv.insert(gr_1_1_1_3_5_3());
        rv.insert(gr_1_1_1_3_5());
        rv.insert(gr_1_1_1_3_6_1());
        rv.insert(gr_1_1_1_3_6_2());
        rv.insert(gr_1_1_1_3_6_3());
        rv.insert(gr_1_1_1_3_6());
        rv.insert(gr_1_1_1_3_7_1());
        rv.insert(gr_1_1_1_3_7_2());
        rv.insert(gr_1_1_1_3_7_3());
        rv.insert(gr_1_1_1_3_7());
        rv.insert(gr_1_1_1_3_8_1());
        rv.insert(gr_1_1_1_3_8_2());
        rv.insert(gr_1_1_1_3_8_3());
        rv.insert(gr_1_1_1_3_8());
        rv.insert(gr_1_1_1_3());
        rv.insert(gr_1_1_1_4_1_1());
        rv.insert(gr_1_1_1_4_1_2());
        rv.insert(gr_1_1_1_4_1_3());
        rv.insert(gr_1_1_1_4_1());
        rv.insert(gr_1_1_1_4_2_1());
        rv.insert(gr_1_1_1_4_2_2());
        rv.insert(gr_1_1_1_4_2_3());
        rv.insert(gr_1_1_1_4_2());
        rv.insert(gr_1_1_1_4_3_1());
        rv.insert(gr_1_1_1_4_3_2());
        rv.insert(gr_1_1_1_4_3_3());
        rv.insert(gr_1_1_1_4_3());
        rv.insert(gr_1_1_1_4_4_1());
        rv.insert(gr_1_1_1_4_4_2());
        rv.insert(gr_1_1_1_4_4_3());
        rv.insert(gr_1_1_1_4_4());
        rv.insert(gr_1_1_1_4_5_1());
        rv.insert(gr_1_1_1_4_5_2());
        rv.insert(gr_1_1_1_4_5_3());
        rv.insert(gr_1_1_1_4_5());
        rv.insert(gr_1_1_1_4_6_1());
        rv.insert(gr_1_1_1_4_6_2());
        rv.insert(gr_1_1_1_4_6_3());
        rv.insert(gr_1_1_1_4_6());
        rv.insert(gr_1_1_1_4_7_1());
        rv.insert(gr_1_1_1_4_7_2());
        rv.insert(gr_1_1_1_4_7_3());
        rv.insert(gr_1_1_1_4_7());
        rv.insert(gr_1_1_1_4_8_1());
        rv.insert(gr_1_1_1_4_8_2());
        rv.insert(gr_1_1_1_4_8_3());
        rv.insert(gr_1_1_1_4_8());
        rv.insert(gr_1_1_1_4());
        rv.insert(gr_1_1_1_5_1_1());
        rv.insert(gr_1_1_1_5_1_2());
        rv.insert(gr_1_1_1_5_1_3());
        rv.insert(gr_1_1_1_5_1());
        rv.insert(gr_1_1_1_5_2_1());
        rv.insert(gr_1_1_1_5_2_2());
        rv.insert(gr_1_1_1_5_2_3());
        rv.insert(gr_1_1_1_5_2());
        rv.insert(gr_1_1_1_5_3_1());
        rv.insert(gr_1_1_1_5_3_2());
        rv.insert(gr_1_1_1_5_3_3());
        rv.insert(gr_1_1_1_5_3());
        rv.insert(gr_1_1_1_5_4_1());
        rv.insert(gr_1_1_1_5_4_2());
        rv.insert(gr_1_1_1_5_4_3());
        rv.insert(gr_1_1_1_5_4());
        rv.insert(gr_1_1_1_5_5_1());
        rv.insert(gr_1_1_1_5_5_2());
        rv.insert(gr_1_1_1_5_5_3());
        rv.insert(gr_1_1_1_5_5());
        rv.insert(gr_1_1_1_5_6_1());
        rv.insert(gr_1_1_1_5_6_2());
        rv.insert(gr_1_1_1_5_6_3());
        rv.insert(gr_1_1_1_5_6());
        rv.insert(gr_1_1_1_5_7_1());
        rv.insert(gr_1_1_1_5_7_2());
        rv.insert(gr_1_1_1_5_7_3());
        rv.insert(gr_1_1_1_5_7());
        rv.insert(gr_1_1_1_5_8_1());
        rv.insert(gr_1_1_1_5_8_2());
        rv.insert(gr_1_1_1_5_8_3());
        rv.insert(gr_1_1_1_5_8());
        rv.insert(gr_1_1_1_5());
        rv.insert(gr_1_1_1_6_1_1());
        rv.insert(gr_1_1_1_6_1_2());
        rv.insert(gr_1_1_1_6_1_3());
        rv.insert(gr_1_1_1_6_1());
        rv.insert(gr_1_1_1_6_2_1());
        rv.insert(gr_1_1_1_6_2_2());
        rv.insert(gr_1_1_1_6_2_3());
        rv.insert(gr_1_1_1_6_2());
        rv.insert(gr_1_1_1_6_3_1());
        rv.insert(gr_1_1_1_6_3_2());
        rv.insert(gr_1_1_1_6_3_3());
        rv.insert(gr_1_1_1_6_3());
        rv.insert(gr_1_1_1_6_4_1());
        rv.insert(gr_1_1_1_6_4_2());
        rv.insert(gr_1_1_1_6_4_3());
        rv.insert(gr_1_1_1_6_4());
        rv.insert(gr_1_1_1_6_5_1());
        rv.insert(gr_1_1_1_6_5_2());
        rv.insert(gr_1_1_1_6_5_3());
        rv.insert(gr_1_1_1_6_5());
        rv.insert(gr_1_1_1_6_6_1());
        rv.insert(gr_1_1_1_6_6_2());
        rv.insert(gr_1_1_1_6_6_3());
        rv.insert(gr_1_1_1_6_6());
        rv.insert(gr_1_1_1_6_7_1());
        rv.insert(gr_1_1_1_6_7_2());
        rv.insert(gr_1_1_1_6_7_3());
        rv.insert(gr_1_1_1_6_7());
        rv.insert(gr_1_1_1_6_8_1());
        rv.insert(gr_1_1_1_6_8_2());
        rv.insert(gr_1_1_1_6_8_3());
        rv.insert(gr_1_1_1_6_8());
        rv.insert(gr_1_1_1_6());
        rv.insert(gr_1_1_1_7_1_1());
        rv.insert(gr_1_1_1_7_1_2());
        rv.insert(gr_1_1_1_7_1_3());
        rv.insert(gr_1_1_1_7_1());
        rv.insert(gr_1_1_1_7_2_1());
        rv.insert(gr_1_1_1_7_2_2());
        rv.insert(gr_1_1_1_7_2_3());
        rv.insert(gr_1_1_1_7_2());
        rv.insert(gr_1_1_1_7_3_1());
        rv.insert(gr_1_1_1_7_3_2());
        rv.insert(gr_1_1_1_7_3_3());
        rv.insert(gr_1_1_1_7_3());
        rv.insert(gr_1_1_1_7_4_1());
        rv.insert(gr_1_1_1_7_4_2());
        rv.insert(gr_1_1_1_7_4_3());
        rv.insert(gr_1_1_1_7_4());
        rv.insert(gr_1_1_1_7_5_1());
        rv.insert(gr_1_1_1_7_5_2());
        rv.insert(gr_1_1_1_7_5_3());
        rv.insert(gr_1_1_1_7_5());
        rv.insert(gr_1_1_1_7_6_1());
        rv.insert(gr_1_1_1_7_6_2());
        rv.insert(gr_1_1_1_7_6_3());
        rv.insert(gr_1_1_1_7_6());
        rv.insert(gr_1_1_1_7_7_1());
        rv.insert(gr_1_1_1_7_7_2());
        rv.insert(gr_1_1_1_7_7_3());
        rv.insert(gr_1_1_1_7_7());
        rv.insert(gr_1_1_1_7_8_1());
        rv.insert(gr_1_1_1_7_8_2());
        rv.insert(gr_1_1_1_7_8_3());
        rv.insert(gr_1_1_1_7_8());
        rv.insert(gr_1_1_1_7());
        rv.insert(gr_1_1_1_8_1_1());
        rv.insert(gr_1_1_1_8_1_2());
        rv.insert(gr_1_1_1_8_1_3());
        rv.insert(gr_1_1_1_8_1());
        rv.insert(gr_1_1_1_8_2_1());
        rv.insert(gr_1_1_1_8_2_2());
        rv.insert(gr_1_1_1_8_2_3());
        rv.insert(gr_1_1_1_8_2());
        rv.insert(gr_1_1_1_8_3_1());
        rv.insert(gr_1_1_1_8_3_2());
        rv.insert(gr_1_1_1_8_3_3());
        rv.insert(gr_1_1_1_8_3());
        rv.insert(gr_1_1_1_8_4_1());
        rv.insert(gr_1_1_1_8_4_2());
        rv.insert(gr_1_1_1_8_4_3());
        rv.insert(gr_1_1_1_8_4());
        rv.insert(gr_1_1_1_8_5_1());
        rv.insert(gr_1_1_1_8_5_2());
        rv.insert(gr_1_1_1_8_5_3());
        rv.insert(gr_1_1_1_8_5());
        rv.insert(gr_1_1_1_8_6_1());
        rv.insert(gr_1_1_1_8_6_2());
        rv.insert(gr_1_1_1_8_6_3());
        rv.insert(gr_1_1_1_8_6());
        rv.insert(gr_1_1_1_8_7_1());
        rv.insert(gr_1_1_1_8_7_2());
        rv.insert(gr_1_1_1_8_7_3());
        rv.insert(gr_1_1_1_8_7());
        rv.insert(gr_1_1_1_8_8_1());
        rv.insert(gr_1_1_1_8_8_2());
        rv.insert(gr_1_1_1_8_8_3());
        rv.insert(gr_1_1_1_8_8());
        rv.insert(gr_1_1_1_8());
        rv.insert(gr_1_1_1());
        rv.insert(gr_1_1());
        rv.insert(gr_1());
        return rv;
    }
    static fmwkng::gold_holder gh_(gold_master(), gold_results_);
}
