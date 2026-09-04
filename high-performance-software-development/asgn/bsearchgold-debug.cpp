#include "fmwkng.hpp"
#include "bsearchasgn.hpp"

namespace bsearchmain {
    static fmwkng::gold_pair gr_1()
    {
        fmwkng::gold_pair rv;
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::root_tag<bsearchmain::root_config>,fmwkng::impl::element_sense::OPEN>>("debug"));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::impl::version_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_platforms_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(64,1048576,4)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(933.13,384)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1()
    {
        fmwkng::impl::element_list rv;
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::root_tag<bsearchmain::root_config>,fmwkng::impl::element_sense::OPEN>>("debug"));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(933.13,384)));
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
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::platform_scalar,fmwkng::impl::element_sense::OPEN>>(std::monostate{}));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(64,1048576,4)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(477.224,192)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1()
    {
        fmwkng::impl::element_list rv = gp_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::platform_scalar,fmwkng::impl::element_sense::OPEN>>(std::monostate{}));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(58.218,24)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(7.29718,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.01459,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.04703,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.23557,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(7.27603,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.01152,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.04502,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.21949,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(7.26823,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.01174,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.04572,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.21077,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(7.27711,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.0128,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.04503,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.21928,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(7.26841,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.01188,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.04573,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.2108,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(7.29341,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.01091,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.04703,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.23547,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(7.2719,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.01459,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.04522,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.21209,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(7.2657,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.0127,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.04092,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.21209,1)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(62.5087,24)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(7.81525,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.98514,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.0337,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.79641,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(7.81548,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.98407,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.03529,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.79612,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(7.81477,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.9852,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.03371,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.79585,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(7.81314,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.98511,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.03288,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.79516,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(7.81566,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.98421,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.03532,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.79612,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(7.81103,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.98226,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.03403,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.79474,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(7.81113,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.98225,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.03404,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.79484,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(7.81227,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.98454,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.03286,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.79487,1)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(61.1291,24)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(7.64137,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.94996,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.05856,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.63285,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(7.64356,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.94525,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.06276,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.63555,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(7.64122,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.94417,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.06133,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.63572,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(7.64056,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.94595,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.05854,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.63607,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(7.64166,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.94425,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.06136,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.63605,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(7.6448,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.94601,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.06277,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.63602,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(7.63904,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.94615,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.05741,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.63548,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(7.63686,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.94351,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.05741,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.63594,1)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(53.3014,24)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.66018,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.78182,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.02325,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.85511,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.66309,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.77953,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.01112,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.87244,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.65537,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.78243,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.01732,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.85562,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.67252,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.78011,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.02542,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.86699,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.67218,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.78215,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.02326,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.86678,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.6524,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.77973,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.01728,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.85539,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.64824,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.78274,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.01109,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.85441,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.67746,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.77972,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.02541,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.87233,1)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(52.9375,24)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.59952,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.62901,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.01293,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.95758,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.61486,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.62775,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.02811,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.959,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.62416,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.62786,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.00796,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.98833,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.63901,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.62775,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.02812,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.98314,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.62608,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.62139,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.01294,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.99175,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.6093,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.62139,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.008,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.9799,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.59512,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.62901,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.00834,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.95777,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.62941,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.62808,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.00833,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.99301,1)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(50.1993,24)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.29096,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.42195,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.96826,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.90074,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.2109,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.42447,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.96805,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.81838,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.27739,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.4295,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.97043,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.87746,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.33238,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.42119,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.96582,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.94537,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.31273,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.42196,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.96803,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.92274,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.29898,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.42447,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.97163,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.90288,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.26829,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.4295,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.96581,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.87297,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.20772,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.42119,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.96826,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.81827,1)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(55.0468,24)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.75103,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.74805,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(29));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.02669,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.97629,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(7.1585,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.94412,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(29));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.11019,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.10418,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.95195,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.91818,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(29));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.0291,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.00468,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(7.11619,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.92009,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(29));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.11019,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.08591,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.66692,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.6735,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(29));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.03101,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.96241,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.68546,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.67349,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(29));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.03656,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.97541,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.94797,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.94368,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(29));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.02729,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.97701,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.7688,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.7596,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(29));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.03751,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.97168,1)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(83.8828,24)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(10.446,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.6312,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(12));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.5017,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.31307,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(10.4747,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.63134,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(12));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.5014,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.34197,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(10.504,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.63031,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(12));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.50155,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.37215,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(10.5162,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.63042,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(12));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.50205,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.3837,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(10.4225,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.63704,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(12));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.5016,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.28391,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(10.5054,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.6317,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(12));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.50176,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.37194,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(10.4844,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.63122,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(12));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.50161,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.35158,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(10.5296,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.63133,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(12));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.5025,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.39577,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::platform_sse,fmwkng::impl::element_sense::OPEN>>(std::monostate{}));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(64,1048576,4)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(455.906,192)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2()
    {
        fmwkng::impl::element_list rv = gp_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::platform_sse,fmwkng::impl::element_sense::OPEN>>(std::monostate{}));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(64,fmwkng::logarithmic(64,1048576,4))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(55.4498,24)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_1()
    {
        fmwkng::impl::element_list rv = gp_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(64,fmwkng::logarithmic(64,1048576,4))));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_1_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.97964,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_1_1()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_1_1_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.96245,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_1_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.98956,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_1_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.02764,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.96073,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_1_2()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_1_2_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.96481,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_1_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.98993,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_1_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.00599,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.78947,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_1_3()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_1_3_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.96325,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_1_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.99199,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_1_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.83424,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_1_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.97956,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_1_4()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_1_4_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.96239,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_1_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.98956,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_1_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.0276,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_1_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.95606,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_1_5()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_1_5_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.96546,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_1_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.9929,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_1_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.9977,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_1_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.86759,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_1_6()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_1_6_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.96366,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_1_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.99199,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_1_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.91195,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_1_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.95511,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_1_7()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_1_7_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.96499,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_1_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.99247,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_1_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.99765,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_1_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.9616,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_1_8()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_1_8_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.96557,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_1_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.98994,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_1_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.00609,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(256,fmwkng::logarithmic(64,1048576,4))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(54.5073,24)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_2()
    {
        fmwkng::impl::element_list rv = gp_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(256,fmwkng::logarithmic(64,1048576,4))));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_2_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.83959,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_2_1()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_2_1_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_2_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.93937,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_2_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_2_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.97694,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_2_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_2_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.92328,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.85534,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_2_2()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_2_2_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_2_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.9319,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_2_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_2_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.97879,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_2_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_2_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.94465,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.65228,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_2_3()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_2_3_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_2_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.93479,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_2_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_2_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.9772,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_2_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_2_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.74028,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_2_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.88461,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_2_4()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_2_4_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_2_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.93522,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_2_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_2_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.9796,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_2_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_2_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.9698,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_2_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.85525,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_2_5()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_2_5_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_2_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.93211,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_2_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_2_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.97878,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_2_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_2_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.94436,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_2_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.83965,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_2_6()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_2_6_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_2_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.93955,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_2_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_2_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.97695,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_2_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_2_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.92316,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_2_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.8843,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_2_7()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_2_7_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_2_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.93493,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_2_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_2_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.97959,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_2_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_2_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.96978,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_2_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.69628,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_2_8()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_2_8_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_2_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.93518,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_2_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_2_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.97775,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_2_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_2_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.78334,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(64,1048576,4))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(53.972,24)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_3()
    {
        fmwkng::impl::element_list rv = gp_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(64,1048576,4))));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_3_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.76685,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_3_1()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_3_1_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_3_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.88721,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_3_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_3_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.99801,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_3_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_3_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.88164,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.60652,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_3_2()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_3_2_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_3_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.88823,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_3_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_3_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.00259,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_3_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_3_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.7157,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.80187,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_3_3()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_3_3_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_3_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.89091,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_3_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_3_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.00306,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_3_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_3_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.9079,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_3_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.78882,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_3_4()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_3_4_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_3_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.89216,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_3_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_3_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.00216,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_3_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_3_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.8945,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_3_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.80191,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_3_5()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_3_5_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_3_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.89059,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_3_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_3_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.00372,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_3_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_3_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.9076,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_3_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.78424,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_3_6()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_3_6_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_3_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.88698,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_3_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_3_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.00217,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_3_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_3_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.8951,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_3_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.65117,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_3_7()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_3_7_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_3_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.88865,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_3_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_3_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.00258,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_3_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_3_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.75994,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_3_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.77065,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_3_8()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_3_8_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_3_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.89321,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_3_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_3_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.99668,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_3_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_3_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.88075,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(4096,fmwkng::logarithmic(64,1048576,4))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(53.1231,24)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_4()
    {
        fmwkng::impl::element_list rv = gp_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(4096,fmwkng::logarithmic(64,1048576,4))));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_4_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.50952,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_4_1()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_4_1_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_4_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.7803,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_4_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_4_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.01606,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_4_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_4_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.71316,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.66504,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_4_2()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_4_2_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_4_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.80285,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_4_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_4_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.01877,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_4_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_4_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.84342,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.66156,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_4_3()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_4_3_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_4_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.78006,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_4_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_4_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.01276,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_4_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_4_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.86874,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_4_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.68992,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_4_4()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_4_4_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_4_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.78132,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_4_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_4_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.01277,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_4_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_4_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.89583,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_4_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.64192,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_4_5()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_4_5_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_4_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.77987,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_4_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_4_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.01879,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_4_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_4_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.84326,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_4_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.62859,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_4_6()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_4_6_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_4_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.80273,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_4_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_4_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.01602,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_4_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_4_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.80985,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_4_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.69509,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_4_7()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_4_7_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_4_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.78052,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_4_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_4_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.01889,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_4_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_4_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.89568,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_4_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.63146,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_4_8()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_4_8_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_4_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.78125,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_4_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_4_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.01889,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_4_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_4_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.83132,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(64,1048576,4))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(52.0961,24)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_5()
    {
        fmwkng::impl::element_list rv = gp_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(64,1048576,4))));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_5_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.51023,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_5_1()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_5_1_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_5_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.625,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_5_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_5_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.00186,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_5_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_5_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.88338,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.57363,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_5_2()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_5_2_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_5_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.62533,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_5_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_5_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.02445,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_5_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_5_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.92384,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.5469,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_5_3()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_5_3_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_5_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.62515,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_5_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_5_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.01673,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_5_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_5_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.90502,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_5_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.4069,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_5_4()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_5_4_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_5_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.62895,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_5_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_5_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.01674,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_5_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_5_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.7612,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_5_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.50136,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_5_5()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_5_5_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_5_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.6251,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_5_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_5_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.00375,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_5_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_5_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.87251,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_5_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.5088,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_5_6()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_5_6_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_5_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.62537,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_5_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_5_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.00282,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_5_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_5_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.88061,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_5_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.47238,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_5_7()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_5_7_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_5_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.62544,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_5_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_5_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.00279,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_5_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_5_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.84414,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_5_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.5759,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_5_8()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_5_8_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_5_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.62895,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_5_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_5_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.02445,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_5_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_5_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.9225,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(65536,fmwkng::logarithmic(64,1048576,4))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(49.6119,24)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_6()
    {
        fmwkng::impl::element_list rv = gp_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(65536,fmwkng::logarithmic(64,1048576,4))));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_6_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.17502,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_6_1()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_6_1_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_6_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.42267,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_6_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_6_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.93054,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_6_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_6_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.82181,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.25699,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_6_2()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_6_2_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_6_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.42432,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_6_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_6_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.92965,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_6_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_6_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.90302,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.21691,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_6_3()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_6_3_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_6_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.42089,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_6_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_6_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.95849,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_6_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_6_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.83753,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_6_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.27207,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_6_4()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_6_4_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_6_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.41788,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_6_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_6_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.9585,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_6_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_6_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.89569,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_6_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.28978,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_6_5()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_6_5_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_6_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.42432,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_6_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_6_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.95614,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_6_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_6_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.90932,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_6_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.17075,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_6_6()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_6_6_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_6_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.41788,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_6_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_6_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.92514,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_6_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_6_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.82773,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_6_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.20397,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_6_7()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_6_7_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_6_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.42089,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_6_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_6_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.95971,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_6_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_6_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.82337,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_6_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.0264,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_6_8()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_6_8_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_6_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.42267,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_6_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_6_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.92484,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_6_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_6_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.67889,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(64,1048576,4))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(52.9718,24)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_7()
    {
        fmwkng::impl::element_list rv = gp_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(64,1048576,4))));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_7_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.66943,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_7_1()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_7();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_7_1_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_7_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.79698,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_7_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_7_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(29));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.87923,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_7_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_7_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.99321,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.80112,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_7_2()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_7();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_7_2_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_7_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.85204,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_7_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_7_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(29));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.87896,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_7_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_7_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.07012,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.62421,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_7_3()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_7();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_7_3_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_7_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.72454,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_7_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_7_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(29));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.89347,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_7_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_7_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.0062,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_7_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.82212,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_7_4()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_7();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_7_4_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_7_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.83029,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_7_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_7_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(29));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.89333,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_7_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_7_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.0985,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_7_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.79448,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_7_5()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_7();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_7_5_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_7_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.83225,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_7_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_7_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(29));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.87874,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_7_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_7_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.08349,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_7_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.32745,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_7_6()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_7();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_7_6_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_7_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.40668,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_7_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_7_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(29));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.87912,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_7_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_7_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.04164,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_7_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.2718,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_7_7()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_7();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_7_7_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_7_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.40667,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_7_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_7_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(29));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.89345,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_7_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_7_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.97168,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_7_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(6.66119,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_7_8()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_7();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_7_8_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_7_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.72158,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_7_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_7_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(29));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.89311,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_7_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_7_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.04651,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1048576,fmwkng::logarithmic(64,1048576,4))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(84.1742,24)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_8()
    {
        fmwkng::impl::element_list rv = gp_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1048576,fmwkng::logarithmic(64,1048576,4))));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_8_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(10.5705,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_8_1()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_8();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_8_1_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_8_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.63296,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_8_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_8_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(12));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.46948,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_8_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_8_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.46805,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(10.5344,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_8_2()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_8();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_8_2_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_8_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.64451,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_8_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_8_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(12));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.46915,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_8_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_8_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.42078,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(10.571,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_8_3()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_8();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_8_3_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_8_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.64148,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_8_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_8_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(12));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.48486,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_8_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_8_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.44463,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_8_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(10.558,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_8_4()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_8();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_8_4_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_8_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.62781,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_8_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_8_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(12));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.4845,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_8_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_8_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.44572,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_8_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(10.5266,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_8_5()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_8();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_8_5_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_8_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.62825,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_8_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_8_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(12));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.46941,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_8_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_8_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.42898,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_8_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(10.4645,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_8_6()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_8();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_8_6_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_8_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.62584,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_8_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_8_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(12));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.46816,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_8_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_8_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.37051,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_8_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(10.4831,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_8_7()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_8();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_8_7_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_8_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.6272,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_8_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_8_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(12));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.46896,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_8_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_8_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.38692,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_8_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(10.466,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_2_8_8()
    {
        fmwkng::impl::element_list rv = gp_1_1_2_8();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_8_8_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_8_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.63766,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_8_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_8_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(12));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.50153,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_2_8_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_2_8_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.32682,1)));
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
        rv.insert(gr_1_1_2_1_1_1());
        rv.insert(gr_1_1_2_1_1_2());
        rv.insert(gr_1_1_2_1_1_3());
        rv.insert(gr_1_1_2_1_1());
        rv.insert(gr_1_1_2_1_2_1());
        rv.insert(gr_1_1_2_1_2_2());
        rv.insert(gr_1_1_2_1_2_3());
        rv.insert(gr_1_1_2_1_2());
        rv.insert(gr_1_1_2_1_3_1());
        rv.insert(gr_1_1_2_1_3_2());
        rv.insert(gr_1_1_2_1_3_3());
        rv.insert(gr_1_1_2_1_3());
        rv.insert(gr_1_1_2_1_4_1());
        rv.insert(gr_1_1_2_1_4_2());
        rv.insert(gr_1_1_2_1_4_3());
        rv.insert(gr_1_1_2_1_4());
        rv.insert(gr_1_1_2_1_5_1());
        rv.insert(gr_1_1_2_1_5_2());
        rv.insert(gr_1_1_2_1_5_3());
        rv.insert(gr_1_1_2_1_5());
        rv.insert(gr_1_1_2_1_6_1());
        rv.insert(gr_1_1_2_1_6_2());
        rv.insert(gr_1_1_2_1_6_3());
        rv.insert(gr_1_1_2_1_6());
        rv.insert(gr_1_1_2_1_7_1());
        rv.insert(gr_1_1_2_1_7_2());
        rv.insert(gr_1_1_2_1_7_3());
        rv.insert(gr_1_1_2_1_7());
        rv.insert(gr_1_1_2_1_8_1());
        rv.insert(gr_1_1_2_1_8_2());
        rv.insert(gr_1_1_2_1_8_3());
        rv.insert(gr_1_1_2_1_8());
        rv.insert(gr_1_1_2_1());
        rv.insert(gr_1_1_2_2_1_1());
        rv.insert(gr_1_1_2_2_1_2());
        rv.insert(gr_1_1_2_2_1_3());
        rv.insert(gr_1_1_2_2_1());
        rv.insert(gr_1_1_2_2_2_1());
        rv.insert(gr_1_1_2_2_2_2());
        rv.insert(gr_1_1_2_2_2_3());
        rv.insert(gr_1_1_2_2_2());
        rv.insert(gr_1_1_2_2_3_1());
        rv.insert(gr_1_1_2_2_3_2());
        rv.insert(gr_1_1_2_2_3_3());
        rv.insert(gr_1_1_2_2_3());
        rv.insert(gr_1_1_2_2_4_1());
        rv.insert(gr_1_1_2_2_4_2());
        rv.insert(gr_1_1_2_2_4_3());
        rv.insert(gr_1_1_2_2_4());
        rv.insert(gr_1_1_2_2_5_1());
        rv.insert(gr_1_1_2_2_5_2());
        rv.insert(gr_1_1_2_2_5_3());
        rv.insert(gr_1_1_2_2_5());
        rv.insert(gr_1_1_2_2_6_1());
        rv.insert(gr_1_1_2_2_6_2());
        rv.insert(gr_1_1_2_2_6_3());
        rv.insert(gr_1_1_2_2_6());
        rv.insert(gr_1_1_2_2_7_1());
        rv.insert(gr_1_1_2_2_7_2());
        rv.insert(gr_1_1_2_2_7_3());
        rv.insert(gr_1_1_2_2_7());
        rv.insert(gr_1_1_2_2_8_1());
        rv.insert(gr_1_1_2_2_8_2());
        rv.insert(gr_1_1_2_2_8_3());
        rv.insert(gr_1_1_2_2_8());
        rv.insert(gr_1_1_2_2());
        rv.insert(gr_1_1_2_3_1_1());
        rv.insert(gr_1_1_2_3_1_2());
        rv.insert(gr_1_1_2_3_1_3());
        rv.insert(gr_1_1_2_3_1());
        rv.insert(gr_1_1_2_3_2_1());
        rv.insert(gr_1_1_2_3_2_2());
        rv.insert(gr_1_1_2_3_2_3());
        rv.insert(gr_1_1_2_3_2());
        rv.insert(gr_1_1_2_3_3_1());
        rv.insert(gr_1_1_2_3_3_2());
        rv.insert(gr_1_1_2_3_3_3());
        rv.insert(gr_1_1_2_3_3());
        rv.insert(gr_1_1_2_3_4_1());
        rv.insert(gr_1_1_2_3_4_2());
        rv.insert(gr_1_1_2_3_4_3());
        rv.insert(gr_1_1_2_3_4());
        rv.insert(gr_1_1_2_3_5_1());
        rv.insert(gr_1_1_2_3_5_2());
        rv.insert(gr_1_1_2_3_5_3());
        rv.insert(gr_1_1_2_3_5());
        rv.insert(gr_1_1_2_3_6_1());
        rv.insert(gr_1_1_2_3_6_2());
        rv.insert(gr_1_1_2_3_6_3());
        rv.insert(gr_1_1_2_3_6());
        rv.insert(gr_1_1_2_3_7_1());
        rv.insert(gr_1_1_2_3_7_2());
        rv.insert(gr_1_1_2_3_7_3());
        rv.insert(gr_1_1_2_3_7());
        rv.insert(gr_1_1_2_3_8_1());
        rv.insert(gr_1_1_2_3_8_2());
        rv.insert(gr_1_1_2_3_8_3());
        rv.insert(gr_1_1_2_3_8());
        rv.insert(gr_1_1_2_3());
        rv.insert(gr_1_1_2_4_1_1());
        rv.insert(gr_1_1_2_4_1_2());
        rv.insert(gr_1_1_2_4_1_3());
        rv.insert(gr_1_1_2_4_1());
        rv.insert(gr_1_1_2_4_2_1());
        rv.insert(gr_1_1_2_4_2_2());
        rv.insert(gr_1_1_2_4_2_3());
        rv.insert(gr_1_1_2_4_2());
        rv.insert(gr_1_1_2_4_3_1());
        rv.insert(gr_1_1_2_4_3_2());
        rv.insert(gr_1_1_2_4_3_3());
        rv.insert(gr_1_1_2_4_3());
        rv.insert(gr_1_1_2_4_4_1());
        rv.insert(gr_1_1_2_4_4_2());
        rv.insert(gr_1_1_2_4_4_3());
        rv.insert(gr_1_1_2_4_4());
        rv.insert(gr_1_1_2_4_5_1());
        rv.insert(gr_1_1_2_4_5_2());
        rv.insert(gr_1_1_2_4_5_3());
        rv.insert(gr_1_1_2_4_5());
        rv.insert(gr_1_1_2_4_6_1());
        rv.insert(gr_1_1_2_4_6_2());
        rv.insert(gr_1_1_2_4_6_3());
        rv.insert(gr_1_1_2_4_6());
        rv.insert(gr_1_1_2_4_7_1());
        rv.insert(gr_1_1_2_4_7_2());
        rv.insert(gr_1_1_2_4_7_3());
        rv.insert(gr_1_1_2_4_7());
        rv.insert(gr_1_1_2_4_8_1());
        rv.insert(gr_1_1_2_4_8_2());
        rv.insert(gr_1_1_2_4_8_3());
        rv.insert(gr_1_1_2_4_8());
        rv.insert(gr_1_1_2_4());
        rv.insert(gr_1_1_2_5_1_1());
        rv.insert(gr_1_1_2_5_1_2());
        rv.insert(gr_1_1_2_5_1_3());
        rv.insert(gr_1_1_2_5_1());
        rv.insert(gr_1_1_2_5_2_1());
        rv.insert(gr_1_1_2_5_2_2());
        rv.insert(gr_1_1_2_5_2_3());
        rv.insert(gr_1_1_2_5_2());
        rv.insert(gr_1_1_2_5_3_1());
        rv.insert(gr_1_1_2_5_3_2());
        rv.insert(gr_1_1_2_5_3_3());
        rv.insert(gr_1_1_2_5_3());
        rv.insert(gr_1_1_2_5_4_1());
        rv.insert(gr_1_1_2_5_4_2());
        rv.insert(gr_1_1_2_5_4_3());
        rv.insert(gr_1_1_2_5_4());
        rv.insert(gr_1_1_2_5_5_1());
        rv.insert(gr_1_1_2_5_5_2());
        rv.insert(gr_1_1_2_5_5_3());
        rv.insert(gr_1_1_2_5_5());
        rv.insert(gr_1_1_2_5_6_1());
        rv.insert(gr_1_1_2_5_6_2());
        rv.insert(gr_1_1_2_5_6_3());
        rv.insert(gr_1_1_2_5_6());
        rv.insert(gr_1_1_2_5_7_1());
        rv.insert(gr_1_1_2_5_7_2());
        rv.insert(gr_1_1_2_5_7_3());
        rv.insert(gr_1_1_2_5_7());
        rv.insert(gr_1_1_2_5_8_1());
        rv.insert(gr_1_1_2_5_8_2());
        rv.insert(gr_1_1_2_5_8_3());
        rv.insert(gr_1_1_2_5_8());
        rv.insert(gr_1_1_2_5());
        rv.insert(gr_1_1_2_6_1_1());
        rv.insert(gr_1_1_2_6_1_2());
        rv.insert(gr_1_1_2_6_1_3());
        rv.insert(gr_1_1_2_6_1());
        rv.insert(gr_1_1_2_6_2_1());
        rv.insert(gr_1_1_2_6_2_2());
        rv.insert(gr_1_1_2_6_2_3());
        rv.insert(gr_1_1_2_6_2());
        rv.insert(gr_1_1_2_6_3_1());
        rv.insert(gr_1_1_2_6_3_2());
        rv.insert(gr_1_1_2_6_3_3());
        rv.insert(gr_1_1_2_6_3());
        rv.insert(gr_1_1_2_6_4_1());
        rv.insert(gr_1_1_2_6_4_2());
        rv.insert(gr_1_1_2_6_4_3());
        rv.insert(gr_1_1_2_6_4());
        rv.insert(gr_1_1_2_6_5_1());
        rv.insert(gr_1_1_2_6_5_2());
        rv.insert(gr_1_1_2_6_5_3());
        rv.insert(gr_1_1_2_6_5());
        rv.insert(gr_1_1_2_6_6_1());
        rv.insert(gr_1_1_2_6_6_2());
        rv.insert(gr_1_1_2_6_6_3());
        rv.insert(gr_1_1_2_6_6());
        rv.insert(gr_1_1_2_6_7_1());
        rv.insert(gr_1_1_2_6_7_2());
        rv.insert(gr_1_1_2_6_7_3());
        rv.insert(gr_1_1_2_6_7());
        rv.insert(gr_1_1_2_6_8_1());
        rv.insert(gr_1_1_2_6_8_2());
        rv.insert(gr_1_1_2_6_8_3());
        rv.insert(gr_1_1_2_6_8());
        rv.insert(gr_1_1_2_6());
        rv.insert(gr_1_1_2_7_1_1());
        rv.insert(gr_1_1_2_7_1_2());
        rv.insert(gr_1_1_2_7_1_3());
        rv.insert(gr_1_1_2_7_1());
        rv.insert(gr_1_1_2_7_2_1());
        rv.insert(gr_1_1_2_7_2_2());
        rv.insert(gr_1_1_2_7_2_3());
        rv.insert(gr_1_1_2_7_2());
        rv.insert(gr_1_1_2_7_3_1());
        rv.insert(gr_1_1_2_7_3_2());
        rv.insert(gr_1_1_2_7_3_3());
        rv.insert(gr_1_1_2_7_3());
        rv.insert(gr_1_1_2_7_4_1());
        rv.insert(gr_1_1_2_7_4_2());
        rv.insert(gr_1_1_2_7_4_3());
        rv.insert(gr_1_1_2_7_4());
        rv.insert(gr_1_1_2_7_5_1());
        rv.insert(gr_1_1_2_7_5_2());
        rv.insert(gr_1_1_2_7_5_3());
        rv.insert(gr_1_1_2_7_5());
        rv.insert(gr_1_1_2_7_6_1());
        rv.insert(gr_1_1_2_7_6_2());
        rv.insert(gr_1_1_2_7_6_3());
        rv.insert(gr_1_1_2_7_6());
        rv.insert(gr_1_1_2_7_7_1());
        rv.insert(gr_1_1_2_7_7_2());
        rv.insert(gr_1_1_2_7_7_3());
        rv.insert(gr_1_1_2_7_7());
        rv.insert(gr_1_1_2_7_8_1());
        rv.insert(gr_1_1_2_7_8_2());
        rv.insert(gr_1_1_2_7_8_3());
        rv.insert(gr_1_1_2_7_8());
        rv.insert(gr_1_1_2_7());
        rv.insert(gr_1_1_2_8_1_1());
        rv.insert(gr_1_1_2_8_1_2());
        rv.insert(gr_1_1_2_8_1_3());
        rv.insert(gr_1_1_2_8_1());
        rv.insert(gr_1_1_2_8_2_1());
        rv.insert(gr_1_1_2_8_2_2());
        rv.insert(gr_1_1_2_8_2_3());
        rv.insert(gr_1_1_2_8_2());
        rv.insert(gr_1_1_2_8_3_1());
        rv.insert(gr_1_1_2_8_3_2());
        rv.insert(gr_1_1_2_8_3_3());
        rv.insert(gr_1_1_2_8_3());
        rv.insert(gr_1_1_2_8_4_1());
        rv.insert(gr_1_1_2_8_4_2());
        rv.insert(gr_1_1_2_8_4_3());
        rv.insert(gr_1_1_2_8_4());
        rv.insert(gr_1_1_2_8_5_1());
        rv.insert(gr_1_1_2_8_5_2());
        rv.insert(gr_1_1_2_8_5_3());
        rv.insert(gr_1_1_2_8_5());
        rv.insert(gr_1_1_2_8_6_1());
        rv.insert(gr_1_1_2_8_6_2());
        rv.insert(gr_1_1_2_8_6_3());
        rv.insert(gr_1_1_2_8_6());
        rv.insert(gr_1_1_2_8_7_1());
        rv.insert(gr_1_1_2_8_7_2());
        rv.insert(gr_1_1_2_8_7_3());
        rv.insert(gr_1_1_2_8_7());
        rv.insert(gr_1_1_2_8_8_1());
        rv.insert(gr_1_1_2_8_8_2());
        rv.insert(gr_1_1_2_8_8_3());
        rv.insert(gr_1_1_2_8_8());
        rv.insert(gr_1_1_2_8());
        rv.insert(gr_1_1_2());
        rv.insert(gr_1_1());
        rv.insert(gr_1());
        return rv;
    }
    static fmwkng::gold_holder gh_(gold_master(), gold_results_);
}
