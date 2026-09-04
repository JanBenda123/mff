#include "fmwkng.hpp"
#include "bsearchasgn.hpp"

namespace bsearchmain {
    static fmwkng::gold_pair gr_1()
    {
        fmwkng::gold_pair rv;
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::root_tag<bsearchmain::root_config>,fmwkng::impl::element_sense::OPEN>>("phi"));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::impl::version_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_platforms_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(64,1048576,4)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(608.522,192)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1()
    {
        fmwkng::impl::element_list rv;
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::root_tag<bsearchmain::root_config>,fmwkng::impl::element_sense::OPEN>>("phi"));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(608.522,192)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(608.522,192)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(72.2747,24)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(9.02406,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.95815,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.02903,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.03688,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(9.04923,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.95835,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.03604,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.05483,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(9.03984,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.95728,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.02775,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.0548,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(9.03513,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.95847,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.02863,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.04803,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(9.0299,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.95768,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.02892,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.04329,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(9.03941,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.95762,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.02969,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.05211,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(9.03716,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.95811,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.0297,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.04935,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(9.01993,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.95763,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.02735,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.03495,1)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(71.8135,24)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(8.97818,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.92625,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.00312,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.04881,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(8.96665,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.925,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.00478,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.03687,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(8.97864,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.92572,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.00504,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.04788,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(8.95243,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.9248,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.0047,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.02292,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(8.9746,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.92406,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.00414,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.04641,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(8.99551,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.9238,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.00466,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.06706,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(8.97119,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.92344,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.00501,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.04275,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(8.99625,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.92281,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.00432,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.06912,1)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(72.0209,24)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(8.99296,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.88325,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.01043,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.09928,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(8.97887,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.88078,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.01271,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.08538,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(9.00201,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.88355,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.01868,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.09978,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(9.02998,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.88332,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.00864,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.13802,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(9.01674,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.88039,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.01525,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.1211,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(9.04196,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.88463,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.01872,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.13861,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(8.97536,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.88068,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.01266,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.08202,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(8.98305,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.88007,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.00518,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.0978,1)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(72.3334,24)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(9.03827,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.81312,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.04675,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.1784,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(8.99114,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.82058,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.05116,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.1194,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(9.10166,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.81878,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.05263,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.23025,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(9.04604,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.82035,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.04381,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.18188,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(9.10187,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.81932,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.05321,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.22934,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(9.03733,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.8204,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.04526,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.17167,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(9.00248,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.82045,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.04379,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.13823,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(9.01461,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.81718,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.05947,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.13797,1)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(77.7867,24)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(9.72365,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.93145,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.29844,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.49376,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(9.69977,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.93146,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.30244,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.46586,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(9.7318,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.93145,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.3044,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.49594,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(9.72389,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.93145,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.30387,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.48857,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(9.7333,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.93145,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.30776,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.49409,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(9.7304,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.93145,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.31011,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.48883,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(9.73327,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.93145,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.30438,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.49744,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(9.7106,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.93145,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.30649,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.47266,1)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(81.023,24)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(10.0681,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.95224,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.5005,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.61541,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(10.0682,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.95223,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.50061,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.61541,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(10.1501,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.95223,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.50064,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.69723,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(10.2151,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.95222,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.50064,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.76221,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(10.179,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.95223,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.50058,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.7262,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(10.1005,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.95223,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.50054,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.6477,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(10.1003,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.95224,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.50057,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.64749,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(10.1416,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.95222,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.50057,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.68886,1)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(80.8343,24)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(10.1444,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.86458,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(29));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.43236,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.84749,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(10.0349,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.86475,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(29));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.43243,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.73777,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(10.1905,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.86477,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(29));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.43225,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.89345,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(10.1862,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.8646,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(29));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.43234,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.88923,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(10.0348,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.86478,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(29));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.43223,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.73774,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(10.0247,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.86458,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(29));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.43236,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.72779,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(10.0255,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.86476,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(29));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.43211,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.72867,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(59));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(10.1933,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.86476,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(29));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.43217,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.89635,1)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(80.4357,24)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(10.0819,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.73858,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(12));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.27064,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.07267,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(10.1481,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.73869,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(12));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.27013,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.13933,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(9.98227,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.73855,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(12));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.27049,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.97323,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(10.0581,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.73868,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(12));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.27018,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.04922,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(10.009,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.73865,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(12));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.27018,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.00018,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(10.0093,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.73862,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(12));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.27022,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.00041,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(10.1645,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.73855,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(12));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.27049,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.15549,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(15));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(9.98254,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.73855,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(12));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.27067,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.97332,1)));
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
