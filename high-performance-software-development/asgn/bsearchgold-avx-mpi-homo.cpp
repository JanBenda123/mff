#include "fmwkng.hpp"
#include "bsearchasgn.hpp"

namespace bsearchmain {
    static fmwkng::gold_pair gr_1()
    {
        fmwkng::gold_pair rv;
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::root_tag<bsearchmain::root_config>,fmwkng::impl::element_sense::OPEN>>("mpi-homo"));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::impl::version_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_platforms_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(64,65536,4)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(767.43,576)));
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
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(64,65536,4)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(767.43,576)));
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
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::platform_avx,fmwkng::impl::element_sense::OPEN>>(std::monostate{}));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(64,65536,4)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(767.43,576)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1()
    {
        fmwkng::impl::element_list rv = gp_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::platform_avx,fmwkng::impl::element_sense::OPEN>>(std::monostate{}));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(64,fmwkng::logarithmic(64,65536,4))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(141.489,96)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1()
    {
        fmwkng::impl::element_list rv = gp_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(64,fmwkng::logarithmic(64,65536,4))));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.61326,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.39047,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.19471,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.02807,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.38311,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.39617,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.23783,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.74911,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.3881,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16131,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.19502,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.03177,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.34847,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.39984,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.19944,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.74919,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.33421,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.38901,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.19587,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.74933,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.33856,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.3901,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.19923,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.74923,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.38716,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16031,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.19547,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.03138,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.62142,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.39751,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.19483,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.02907,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_9()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(8));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.43581,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1_9()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(8));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_9_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_9();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.20582,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_9_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_9();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.19499,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_9_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_9();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.03501,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_10()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(9));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.40127,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1_10()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(9));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_10_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_10();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.15669,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_10_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_10();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.20156,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_10_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_10();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.04303,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_11()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(10));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.33665,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1_11()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(10));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_11_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_11();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.3933,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_11_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_11();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.19406,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_11_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_11();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.74929,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_12()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(11));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.62805,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1_12()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(11));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_12_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_12();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.39325,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_12_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_12();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.19706,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_12_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_12();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.03775,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_13()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(12));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.25111,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1_13()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(12));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_13_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_13();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.3081,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_13_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_13();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.19374,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_13_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_13();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.74927,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_14()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(13));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.34852,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1_14()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(13));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_14_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_14();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.39636,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_14_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_14();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.20293,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_14_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_14();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.74924,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_15()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(14));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.35307,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1_15()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(14));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_15_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_15();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.40859,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_15_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_15();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.1952,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_15_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_15();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.74927,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_16()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(15));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.41072,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1_16()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(15));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_16_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_16();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.15909,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_16_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_16();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.19876,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_16_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_16();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.05287,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_17()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(16));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.40012,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1_17()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(16));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_17_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_17();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.17529,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_17_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_17();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.19503,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_17_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_17();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.0298,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_18()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(17));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.09974,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1_18()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(17));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_18_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_18();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.15439,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_18_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_18();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.19602,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_18_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_18();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.74933,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_19()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(18));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.329,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1_19()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(18));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_19_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_19();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.38094,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_19_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_19();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.19879,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_19_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_19();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.74927,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_20()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(19));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.12311,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1_20()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(19));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_20_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_20();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.17378,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_20_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_20();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.20012,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_20_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_20();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.74921,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_21()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(20));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.5157,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1_21()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(20));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_21_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_21();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.28739,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_21_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_21();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.19891,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_21_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_21();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.02941,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_22()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(21));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.35653,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1_22()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(21));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_22_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_22();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.40769,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_22_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_22();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.19959,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_22_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_22();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.74925,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_23()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(22));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.64636,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1_23()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(22));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_23_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_23();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.39615,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_23_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_23();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.1941,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_23_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_23();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.05612,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_24()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(23));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.59139,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1_24()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(23));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_24_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_24();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.4078,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_24_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_24();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.19983,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_24_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_24();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.98376,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_25()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(24));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.35696,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1_25()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(24));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_25_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_25();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.41164,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_25_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_25();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.19599,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_25_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_25();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.74932,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_26()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(25));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.64466,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1_26()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(25));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_26_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_26();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.39015,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_26_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_26();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.19837,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_26_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_26();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.05614,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_27()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(26));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.59753,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1_27()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(26));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_27_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_27();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.36286,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_27_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_27();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.19865,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_27_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_27();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.03601,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_28()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(27));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.65405,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1_28()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(27));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_28_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_28();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.38901,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_28_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_28();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.20381,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_28_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_28();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.06123,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_29()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(28));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.42396,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1_29()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(28));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_29_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_29();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.19419,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_29_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_29();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.19984,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_29_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_29();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.02993,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_30()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(29));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.13949,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1_30()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(29));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_30_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_30();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.19257,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_30_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_30();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.19764,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_30_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_30();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.74928,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_31()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(30));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.63889,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1_31()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(30));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_31_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_31();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.39055,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_31_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_31();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.19368,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_31_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_31();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.05466,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_32()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(31));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.39167,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1_32()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(31));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_32_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_32();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.41297,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_32_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_32();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.22948,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_32_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_32();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.74922,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(256,fmwkng::logarithmic(64,65536,4))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(136.091,96)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_2()
    {
        fmwkng::impl::element_list rv = gp_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(256,fmwkng::logarithmic(64,65536,4))));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.25276,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.1236,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16817,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.96099,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.26751,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.34777,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.1666,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.75314,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.19755,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.28013,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16853,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.74889,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.23864,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.15299,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.19403,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.89162,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.48021,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.35652,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16637,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.95732,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.03757,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.11726,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16514,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.75517,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.06045,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.14202,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.17013,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.7483,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.04505,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.12352,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.17006,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.75147,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_9()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(8));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.44651,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_2_9()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(8));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_9_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_9();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.31912,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_9_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_9();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16736,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_9_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_9();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.96003,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_10()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(9));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.2767,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_2_10()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(9));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_10_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_10();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.35234,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_10_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_10();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.17214,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_10_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_10();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.75222,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_11()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(10));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.25417,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_2_11()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(10));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_11_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_11();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.11505,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_11_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_11();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16658,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_11_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_11();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.97254,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_12()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(11));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.03873,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_2_12()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(11));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_12_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_12();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.11664,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_12_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_12();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16926,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_12_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_12();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.75283,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_13()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(12));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.28057,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_2_13()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(12));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_13_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_13();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.36172,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_13_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_13();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.17214,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_13_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_13();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.74671,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_14()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(13));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.04877,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_2_14()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(13));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_14_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_14();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.12202,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_14_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_14();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.17139,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_14_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_14();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.75537,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_15()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(14));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.2857,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_2_15()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(14));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_15_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_15();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.13137,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_15_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_15();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.17041,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_15_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_15();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.98392,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_16()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(15));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.40227,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_2_16()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(15));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_16_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_16();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.27855,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_16_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_16();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16656,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_16_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_16();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.95715,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_17()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(16));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.0895,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_2_17()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(16));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_17_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_17();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16521,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_17_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_17();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16772,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_17_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_17();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.75657,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_18()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(17));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.2735,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_2_18()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(17));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_18_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_18();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.1369,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_18_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_18();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16972,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_18_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_18();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.96687,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_19()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(18));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.47827,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_2_19()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(18));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_19_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_19();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.34796,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_19_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_19();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16721,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_19_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_19();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.9631,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_20()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(19));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.48446,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_2_20()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(19));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_20_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_20();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.35599,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_20_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_20();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.17003,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_20_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_20();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.95844,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_21()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(20));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.25269,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_2_21()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(20));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_21_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_21();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.11815,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_21_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_21();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16907,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_21_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_21();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.96546,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_22()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(21));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.13026,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_2_22()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(21));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_22_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_22();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.2082,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_22_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_22();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.1684,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_22_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_22();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.75365,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_23()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(22));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.05248,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_2_23()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(22));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_23_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_23();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.1287,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_23_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_23();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.17219,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_23_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_23();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.75158,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_24()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(23));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.35584,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_2_24()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(23));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_24_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_24();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.22212,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_24_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_24();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16826,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_24_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_24();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.96546,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_25()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(24));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.25292,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_2_25()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(24));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_25_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_25();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.11541,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_25_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_25();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16892,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_25_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_25();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.96859,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_26()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(25));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.25786,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_2_26()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(25));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_26_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_26();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.31893,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_26_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_26();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.19284,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_26_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_26();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.74609,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_27()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(26));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.16883,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_2_27()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(26));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_27_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_27();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.2439,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_27_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_27();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.17029,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_27_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_27();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.75464,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_28()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(27));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.30698,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_2_28()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(27));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_28_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_28();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.17846,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_28_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_28();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16654,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_28_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_28();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.96198,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_29()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(28));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.24242,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_2_29()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(28));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_29_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_29();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.11707,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_29_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_29();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.1674,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_29_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_29();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.95795,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_30()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(29));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.48045,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_2_30()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(29));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_30_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_30();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.35235,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_30_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_30();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16935,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_30_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_30();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.95875,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_31()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(30));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.48788,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_2_31()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(30));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_31_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_31();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.3618,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_31_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_31();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16762,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_31_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_31();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.95847,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_32()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(31));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.16392,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_2_32()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_2();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(31));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_32_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_32();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.24334,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_32_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_32();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.17213,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_32_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_32();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.74845,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(64,65536,4))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(129.455,96)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_3()
    {
        fmwkng::impl::element_list rv = gp_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(64,65536,4))));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.87187,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.07349,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16245,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.63593,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.8571,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.06269,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16344,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.63097,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.87323,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.07469,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16614,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.6324,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.18535,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.06514,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.17122,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.949,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.20285,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.06832,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.17123,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.96329,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.1384,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.06522,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16338,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.9098,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.22378,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.06686,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.17155,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.98537,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.20399,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.06684,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.17043,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.96672,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_9()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(8));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.86821,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_3_9()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(8));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_9_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_9();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.07013,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_9_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_9();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16169,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_9_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_9();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.63639,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_10()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(9));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.86224,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_3_10()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(9));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_10_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_10();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.06598,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_10_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_10();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16382,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_10_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_10();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.63244,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_11()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(10));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.85755,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_3_11()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(10));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_11_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_11();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.06638,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_11_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_11();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16567,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_11_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_11();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.62551,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_12()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(11));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.85986,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_3_12()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(11));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_12_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_12();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.06793,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_12_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_12();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16219,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_12_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_12();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.62975,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_13()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(12));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.20674,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_3_13()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(12));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_13_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_13();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.06851,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_13_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_13();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16926,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_13_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_13();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.96897,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_14()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(13));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.20653,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_3_14()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(13));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_14_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_14();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.06348,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_14_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_14();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.17304,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_14_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_14();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.97001,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_15()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(14));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.20509,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_3_15()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(14));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_15_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_15();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.06451,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_15_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_15();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.17056,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_15_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_15();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.97001,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_16()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(15));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.22401,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_3_16()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(15));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_16_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_16();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.07159,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_16_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_16();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.17326,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_16_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_16();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.97916,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_17()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(16));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.86793,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_3_17()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(16));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_17_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_17();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.06572,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_17_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_17();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16375,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_17_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_17();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.63846,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_18()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(17));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.20606,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_3_18()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(17));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_18_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_18();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.06458,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_18_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_18();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.17058,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_18_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_18();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.9709,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_19()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(18));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.86245,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_3_19()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(18));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_19_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_19();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.06943,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_19_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_19();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16343,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_19_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_19();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.62959,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_20()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(19));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.21363,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_3_20()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(19));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_20_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_20();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.06367,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_20_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_20();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.17135,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_20_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_20();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.97861,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_21()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(20));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.86345,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_3_21()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(20));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_21_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_21();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.06346,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_21_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_21();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16391,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_21_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_21();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.63608,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_22()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(21));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.87319,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_3_22()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(21));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_22_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_22();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.07533,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_22_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_22();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.1641,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_22_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_22();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.63376,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_23()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(22));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.89526,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_3_23()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(22));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_23_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_23();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.08501,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_23_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_23();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16482,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_23_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_23();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.64543,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_24()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(23));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.2085,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_3_24()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(23));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_24_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_24();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.06857,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_24_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_24();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.17134,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_24_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_24();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.9686,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_25()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(24));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.87784,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_3_25()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(24));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_25_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_25();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.07733,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_25_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_25();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16388,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_25_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_25();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.63663,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_26()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(25));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.20099,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_3_26()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(25));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_26_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_26();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.06341,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_26_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_26();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.17183,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_26_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_26();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.96575,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_27()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(26));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.85774,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_3_27()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(26));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_27_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_27();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.06394,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_27_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_27();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16504,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_27_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_27();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.62876,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_28()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(27));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.87875,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_3_28()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(27));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_28_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_28();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.06382,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_28_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_28();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16686,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_28_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_28();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.64807,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_29()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(28));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.18648,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_3_29()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(28));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_29_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_29();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.06255,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_29_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_29();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16987,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_29_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_29();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.95406,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_30()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(29));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.19731,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_3_30()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(29));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_30_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_30();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.06367,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_30_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_30();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.17094,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_30_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_30();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.9627,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_31()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(30));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.21041,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_3_31()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(30));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_31_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_31();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.07007,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_31_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_31();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.17252,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_31_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_31();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.96783,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_32()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(31));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.20809,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_3_32()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_3();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(31));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_32_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_32();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.06432,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_32_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_32();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16904,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_32_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_32();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.97473,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(4096,fmwkng::logarithmic(64,65536,4))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(128.043,96)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_4()
    {
        fmwkng::impl::element_list rv = gp_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(4096,fmwkng::logarithmic(64,65536,4))));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.97544,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.938063,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16902,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.86836,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.02846,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.17394,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.1641,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.69042,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.21788,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.1811,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16973,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.86705,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.18252,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.1417,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16897,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.87185,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.04284,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.18672,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16429,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.69183,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.22248,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.19299,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16897,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.86051,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.80523,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.937243,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16751,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.70048,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.04067,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.00872,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16874,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.8632,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_9()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(8));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.20174,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_4_9()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(8));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_9_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_9();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16948,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_9_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_9();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16927,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_9_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_9();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.86299,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_10()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(9));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.97821,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_4_10()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(9));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_10_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_10();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.939911,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_10_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_10();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.17108,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_10_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_10();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.86722,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_11()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(10));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.00564,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_4_11()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(10));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_11_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_11();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.964638,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_11_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_11();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.17162,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_11_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_11();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.86938,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_12()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(11));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.01409,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_4_12()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(11));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_12_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_12();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.968798,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_12_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_12();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.17078,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_12_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_12();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.87452,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_13()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(12));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.79809,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_4_13()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(12));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_13_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_13();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.94513,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_13_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_13();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.1684,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_13_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_13();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.68456,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_14()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(13));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.98887,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_4_14()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(13));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_14_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_14();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.949705,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_14_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_14();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16911,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_14_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_14();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.87006,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_15()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(14));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.08982,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_4_15()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(14));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_15_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_15();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.05556,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_15_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_15();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.17173,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_15_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_15();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.86252,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_16()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(15));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.97422,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_4_16()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(15));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_16_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_16();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.941705,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_16_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_16();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16803,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_16_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_16();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.86449,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_17()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(16));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.09435,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_4_17()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(16));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_17_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_17();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.0591,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_17_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_17();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.17133,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_17_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_17();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.86393,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_18()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(17));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.05318,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_4_18()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(17));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_18_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_18();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.18396,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_18_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_18();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16738,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_18_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_18();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.70184,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_19()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(18));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.81068,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_4_19()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(18));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_19_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_19();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.940391,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_19_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_19();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16582,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_19_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_19();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.70446,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_20()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(19));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.97244,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_4_20()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(19));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_20_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_20();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.938025,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_20_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_20();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.17137,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_20_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_20();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.86304,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_21()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(20));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.86685,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_4_21()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(20));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_21_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_21();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.00543,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_21_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_21();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16596,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_21_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_21();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.69546,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_22()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(21));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.0095,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_4_22()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(21));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_22_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_22();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.14475,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_22_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_22();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16832,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_22_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_22();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.69642,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_23()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(22));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.02892,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_4_23()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(22));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_23_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_23();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16944,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_23_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_23();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16841,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_23_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_23();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.69106,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_24()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(23));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.04692,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_4_24()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(23));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_24_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_24();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.18679,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_24_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_24();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16883,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_24_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_24();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.6913,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_25()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(24));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.23549,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_4_25()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(24));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_25_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_25();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.19302,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_25_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_25();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.1698,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_25_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_25();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.87267,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_26()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(25));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.12739,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_4_26()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(25));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_26_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_26();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.09378,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_26_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_26();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.17129,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_26_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_26();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.86232,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_27()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(26));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.79124,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_4_27()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(26));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_27_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_27();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.939881,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_27_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_27();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16614,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_27_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_27();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.68522,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_28()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(27));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.81045,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_4_28()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(27));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_28_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_28();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.938193,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_28_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_28();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.1672,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_28_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_28();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.70506,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_29()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(28));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.96594,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_4_29()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(28));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_29_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_29();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.0921,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_29_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_29();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16849,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_29_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_29();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.70535,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_30()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(29));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.79327,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_4_30()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(29));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_30_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_30();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.939125,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_30_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_30();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16722,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_30_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_30();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.68692,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_31()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(30));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.04277,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_4_31()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(30));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_31_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_31();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.18556,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_31_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_31();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.16667,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_31_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_31();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.69054,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_32()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(31));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.82698,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_4_32()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_4();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(31));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_32_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_32();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.940852,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_32_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_32();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.17008,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_32_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_32();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.71605,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(64,65536,4))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(121.038,96)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_5()
    {
        fmwkng::impl::element_list rv = gp_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(64,65536,4))));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.44379,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.627218,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.12357,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.693,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.7282,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.90452,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.12439,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.6993,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.89236,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.915186,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.27655,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.70062,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.87478,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.929524,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.2352,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.71006,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.91594,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.930409,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.27764,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.70788,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.76551,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.935789,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.12485,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.70487,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.76262,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.933403,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.1252,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.70402,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.68726,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.62895,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.12567,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.93264,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_9()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(8));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.68934,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_5_9()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(8));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_9_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_9();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.864915,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_9_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_9();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.12323,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_9_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_9();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.7012,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_10()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(9));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.94251,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_5_10()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(9));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_10_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_10();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.89384,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_10_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_10();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.12141,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_10_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_10();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.92727,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_11()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(10));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.74716,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_5_11()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(10));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_11_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_11();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.91853,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_11_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_11();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.12513,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_11_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_11();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.7035,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_12()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(11));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.71412,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_5_12()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(11));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_12_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_12();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.890056,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_12_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_12();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.12358,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_12_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_12();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.70048,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_13()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(12));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.60463,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_5_13()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(12));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_13_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_13();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.711528,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_13_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_13();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.12536,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_13_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_13();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.76774,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_14()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(13));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.76822,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_5_14()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(13));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_14_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_14();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.707844,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_14_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_14();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.121,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_14_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_14();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.93937,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_15()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(14));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.73601,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_5_15()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(14));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_15_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_15();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.622836,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_15_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_15();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.18024,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_15_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_15();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.93293,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_16()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(15));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.46468,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_5_16()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(15));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_16_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_16();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.632735,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_16_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_16();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.12539,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_16_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_16();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.70656,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_17()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(16));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.92107,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_5_17()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(16));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_17_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_17();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.869766,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_17_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_17();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.12294,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_17_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_17();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.92836,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_18()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(17));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.67878,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_5_18()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(17));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_18_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_18();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.624918,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_18_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_18();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.12043,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_18_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_18();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.93343,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_19()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(18));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.84773,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_5_19()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(18));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_19_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_19();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.788684,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_19_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_19();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.12091,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_19_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_19();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.93814,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_20()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(19));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.9201,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_5_20()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(19));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_20_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_20();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.864736,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_20_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_20();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.12155,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_20_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_20();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.93381,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_21()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(20));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.96261,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_5_21()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(20));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_21_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_21();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.904444,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_21_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_21();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.12193,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_21_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_21();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.93624,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_22()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(21));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.74177,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_5_22()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(21));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_22_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_22();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.918531,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_22_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_22();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.12428,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_22_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_22();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.69896,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_23()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(22));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.97639,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_5_23()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(22));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_23_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_23();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.91506,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_23_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_23();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.12091,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_23_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_23();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.94042,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_24()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(23));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.98629,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_5_24()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(23));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_24_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_24();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.929515,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_24_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_24();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.12636,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_24_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_24();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.93042,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_25()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(24));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.00907,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_5_25()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(24));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_25_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_25();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.9304,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_25_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_25();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.12528,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_25_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_25();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.95339,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_26()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(25));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(4.09466,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_5_26()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(25));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_26_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_26();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.935779,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_26_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_26();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.23389,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_26_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_26();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.92499,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_27()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(26));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.75447,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_5_27()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(26));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_27_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_27();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.93339,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_27_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_27();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.1231,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_27_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_27();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.69798,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_28()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(27));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.68115,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_5_28()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(27));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_28_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_28();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.633172,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_28_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_28();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.12193,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_28_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_28();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.92605,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_29()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(28));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.77635,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_5_29()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(28));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_29_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_29();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.893629,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_29_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_29();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.18153,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_29_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_29();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.70119,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_30()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(29));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.61641,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_5_30()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(29));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_30_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_30();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.788964,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_30_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_30();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.12466,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_30_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_30();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.70278,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_31()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(30));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.67316,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_5_31()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(30));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_31_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_31();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.622428,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_31_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_31();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.12136,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_31_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_31();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.92937,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_32()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(31));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.66127,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_5_32()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_5();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(31));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_32_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_32();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.628272,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_32_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_32();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.12095,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_32_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_32();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.91204,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(65536,fmwkng::logarithmic(64,65536,4))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(111.314,96)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_6()
    {
        fmwkng::impl::element_list rv = gp_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(65536,fmwkng::logarithmic(64,65536,4))));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.04699,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.182595,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.01613,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.84826,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.05782,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.182677,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.01512,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.86002,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.68463,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.44104,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.01586,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.22773,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.43589,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.198346,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.01461,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.22294,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.43977,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.195623,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.01577,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.22838,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.70863,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.508606,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.01453,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.1855,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.39714,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.193239,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.01451,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.1894,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.74787,3)));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.541941,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.01412,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.19181,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_9()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(8));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.43452,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_6_9()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(8));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_9_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_9();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.554912,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_9_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_9();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.01758,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_9_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_9();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.86203,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_10()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(9));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.75421,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_6_10()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(9));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_10_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_10();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.560531,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_10_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_10();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.01241,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_10_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_10();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.18127,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_11()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(10));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.43829,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_6_11()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(10));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_11_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_11();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.193421,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_11_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_11();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.01643,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_11_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_11();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.22844,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_12()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(11));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.74144,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_6_12()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(11));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_12_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_12();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.538294,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_12_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_12();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.01284,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_12_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_12();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.19031,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_13()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(12));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.07013,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_6_13()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(12));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_13_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_13();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.188517,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_13_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_13();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.01968,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_13_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_13();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.86194,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_14()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(13));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.41824,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_6_14()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(13));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_14_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_14();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.19136,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_14_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_14();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.01656,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_14_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_14();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.21032,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_15()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(14));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.73329,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_6_15()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(14));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_15_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_15();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.529585,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_15_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_15();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.01339,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_15_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_15();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.19032,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_16()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(15));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.11525,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_6_16()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(15));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_16_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_16();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.257269,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_16_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_16();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.01826,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_16_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_16();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.83972,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_17()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(16));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.36181,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_6_17()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(16));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_17_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_17();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.183628,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_17_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_17();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.01572,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_17_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_17();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.16247,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_18()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(17));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.69373,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_6_18()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(17));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_18_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_18();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.508987,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_18_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_18();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.01548,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_18_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_18();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.16926,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_19()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(18));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.23209,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_6_19()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(18));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_19_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_19();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.374586,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_19_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_19();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.01432,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_19_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_19();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.84318,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_20()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(19));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.71421,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_6_20()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(19));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_20_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_20();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.542763,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_20_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_20();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.01552,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_20_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_20();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.15593,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_21()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(20));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.36206,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_6_21()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(20));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_21_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_21();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.190843,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_21_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_21();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.01485,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_21_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_21();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.15637,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_22()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(21));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.35359,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_6_22()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(21));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_22_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_22();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.185912,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_22_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_22();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.01311,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_22_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_22();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.15458,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_23()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(22));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.26782,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_6_23()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(22));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_23_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_23();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.253706,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_23_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_23();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.01218,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_23_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_23();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.00193,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_24()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(23));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.05952,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_6_24()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(23));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_24_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_24();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.188748,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_24_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_24();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.01641,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_24_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_24();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.85436,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_25()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(24));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.60833,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_6_25()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(24));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_25_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_25();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.375388,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_25_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_25();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.01472,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_25_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_25();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.21823,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_26()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(25));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.43834,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_6_26()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(25));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_26_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_26();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.202695,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_26_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_26();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.01695,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_26_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_26();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.21869,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_27()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(26));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.77956,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_6_27()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(26));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_27_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_27();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.537508,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_27_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_27();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.02051,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_27_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_27();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.22154,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_28()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(27));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.36122,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_6_28()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(27));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_28_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_28();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.183073,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_28_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_28();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.01683,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_28_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_28();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.16132,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_29()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(28));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.73676,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_6_29()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(28));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_29_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_29();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.55573,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_29_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_29();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.01766,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_29_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_29();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.16337,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_30()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(29));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.73878,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_6_30()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(29));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_30_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_30();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.560942,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_30_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_30();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.01631,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_30_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_30();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.16153,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_31()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(30));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.76364,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_6_31()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(30));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_31_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_31();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.529714,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_31_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_31();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.01471,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_31_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_31();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.21922,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_32()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(31));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(3.61884,3)));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_6_32()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_6();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(31));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_32_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_32();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(0.439178,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_32_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_32();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(1.01553,1)));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_32_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_32();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::result_element<fmwkng::impl::auto_measurement_tag<bsearchmain::repeat_policy>,fmwkng::impl::element_sense::CLOSE>>(std::make_pair(2.16413,1)));
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
        rv.insert(gr_1_1_1_1_9_1());
        rv.insert(gr_1_1_1_1_9_2());
        rv.insert(gr_1_1_1_1_9_3());
        rv.insert(gr_1_1_1_1_9());
        rv.insert(gr_1_1_1_1_10_1());
        rv.insert(gr_1_1_1_1_10_2());
        rv.insert(gr_1_1_1_1_10_3());
        rv.insert(gr_1_1_1_1_10());
        rv.insert(gr_1_1_1_1_11_1());
        rv.insert(gr_1_1_1_1_11_2());
        rv.insert(gr_1_1_1_1_11_3());
        rv.insert(gr_1_1_1_1_11());
        rv.insert(gr_1_1_1_1_12_1());
        rv.insert(gr_1_1_1_1_12_2());
        rv.insert(gr_1_1_1_1_12_3());
        rv.insert(gr_1_1_1_1_12());
        rv.insert(gr_1_1_1_1_13_1());
        rv.insert(gr_1_1_1_1_13_2());
        rv.insert(gr_1_1_1_1_13_3());
        rv.insert(gr_1_1_1_1_13());
        rv.insert(gr_1_1_1_1_14_1());
        rv.insert(gr_1_1_1_1_14_2());
        rv.insert(gr_1_1_1_1_14_3());
        rv.insert(gr_1_1_1_1_14());
        rv.insert(gr_1_1_1_1_15_1());
        rv.insert(gr_1_1_1_1_15_2());
        rv.insert(gr_1_1_1_1_15_3());
        rv.insert(gr_1_1_1_1_15());
        rv.insert(gr_1_1_1_1_16_1());
        rv.insert(gr_1_1_1_1_16_2());
        rv.insert(gr_1_1_1_1_16_3());
        rv.insert(gr_1_1_1_1_16());
        rv.insert(gr_1_1_1_1_17_1());
        rv.insert(gr_1_1_1_1_17_2());
        rv.insert(gr_1_1_1_1_17_3());
        rv.insert(gr_1_1_1_1_17());
        rv.insert(gr_1_1_1_1_18_1());
        rv.insert(gr_1_1_1_1_18_2());
        rv.insert(gr_1_1_1_1_18_3());
        rv.insert(gr_1_1_1_1_18());
        rv.insert(gr_1_1_1_1_19_1());
        rv.insert(gr_1_1_1_1_19_2());
        rv.insert(gr_1_1_1_1_19_3());
        rv.insert(gr_1_1_1_1_19());
        rv.insert(gr_1_1_1_1_20_1());
        rv.insert(gr_1_1_1_1_20_2());
        rv.insert(gr_1_1_1_1_20_3());
        rv.insert(gr_1_1_1_1_20());
        rv.insert(gr_1_1_1_1_21_1());
        rv.insert(gr_1_1_1_1_21_2());
        rv.insert(gr_1_1_1_1_21_3());
        rv.insert(gr_1_1_1_1_21());
        rv.insert(gr_1_1_1_1_22_1());
        rv.insert(gr_1_1_1_1_22_2());
        rv.insert(gr_1_1_1_1_22_3());
        rv.insert(gr_1_1_1_1_22());
        rv.insert(gr_1_1_1_1_23_1());
        rv.insert(gr_1_1_1_1_23_2());
        rv.insert(gr_1_1_1_1_23_3());
        rv.insert(gr_1_1_1_1_23());
        rv.insert(gr_1_1_1_1_24_1());
        rv.insert(gr_1_1_1_1_24_2());
        rv.insert(gr_1_1_1_1_24_3());
        rv.insert(gr_1_1_1_1_24());
        rv.insert(gr_1_1_1_1_25_1());
        rv.insert(gr_1_1_1_1_25_2());
        rv.insert(gr_1_1_1_1_25_3());
        rv.insert(gr_1_1_1_1_25());
        rv.insert(gr_1_1_1_1_26_1());
        rv.insert(gr_1_1_1_1_26_2());
        rv.insert(gr_1_1_1_1_26_3());
        rv.insert(gr_1_1_1_1_26());
        rv.insert(gr_1_1_1_1_27_1());
        rv.insert(gr_1_1_1_1_27_2());
        rv.insert(gr_1_1_1_1_27_3());
        rv.insert(gr_1_1_1_1_27());
        rv.insert(gr_1_1_1_1_28_1());
        rv.insert(gr_1_1_1_1_28_2());
        rv.insert(gr_1_1_1_1_28_3());
        rv.insert(gr_1_1_1_1_28());
        rv.insert(gr_1_1_1_1_29_1());
        rv.insert(gr_1_1_1_1_29_2());
        rv.insert(gr_1_1_1_1_29_3());
        rv.insert(gr_1_1_1_1_29());
        rv.insert(gr_1_1_1_1_30_1());
        rv.insert(gr_1_1_1_1_30_2());
        rv.insert(gr_1_1_1_1_30_3());
        rv.insert(gr_1_1_1_1_30());
        rv.insert(gr_1_1_1_1_31_1());
        rv.insert(gr_1_1_1_1_31_2());
        rv.insert(gr_1_1_1_1_31_3());
        rv.insert(gr_1_1_1_1_31());
        rv.insert(gr_1_1_1_1_32_1());
        rv.insert(gr_1_1_1_1_32_2());
        rv.insert(gr_1_1_1_1_32_3());
        rv.insert(gr_1_1_1_1_32());
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
        rv.insert(gr_1_1_1_2_9_1());
        rv.insert(gr_1_1_1_2_9_2());
        rv.insert(gr_1_1_1_2_9_3());
        rv.insert(gr_1_1_1_2_9());
        rv.insert(gr_1_1_1_2_10_1());
        rv.insert(gr_1_1_1_2_10_2());
        rv.insert(gr_1_1_1_2_10_3());
        rv.insert(gr_1_1_1_2_10());
        rv.insert(gr_1_1_1_2_11_1());
        rv.insert(gr_1_1_1_2_11_2());
        rv.insert(gr_1_1_1_2_11_3());
        rv.insert(gr_1_1_1_2_11());
        rv.insert(gr_1_1_1_2_12_1());
        rv.insert(gr_1_1_1_2_12_2());
        rv.insert(gr_1_1_1_2_12_3());
        rv.insert(gr_1_1_1_2_12());
        rv.insert(gr_1_1_1_2_13_1());
        rv.insert(gr_1_1_1_2_13_2());
        rv.insert(gr_1_1_1_2_13_3());
        rv.insert(gr_1_1_1_2_13());
        rv.insert(gr_1_1_1_2_14_1());
        rv.insert(gr_1_1_1_2_14_2());
        rv.insert(gr_1_1_1_2_14_3());
        rv.insert(gr_1_1_1_2_14());
        rv.insert(gr_1_1_1_2_15_1());
        rv.insert(gr_1_1_1_2_15_2());
        rv.insert(gr_1_1_1_2_15_3());
        rv.insert(gr_1_1_1_2_15());
        rv.insert(gr_1_1_1_2_16_1());
        rv.insert(gr_1_1_1_2_16_2());
        rv.insert(gr_1_1_1_2_16_3());
        rv.insert(gr_1_1_1_2_16());
        rv.insert(gr_1_1_1_2_17_1());
        rv.insert(gr_1_1_1_2_17_2());
        rv.insert(gr_1_1_1_2_17_3());
        rv.insert(gr_1_1_1_2_17());
        rv.insert(gr_1_1_1_2_18_1());
        rv.insert(gr_1_1_1_2_18_2());
        rv.insert(gr_1_1_1_2_18_3());
        rv.insert(gr_1_1_1_2_18());
        rv.insert(gr_1_1_1_2_19_1());
        rv.insert(gr_1_1_1_2_19_2());
        rv.insert(gr_1_1_1_2_19_3());
        rv.insert(gr_1_1_1_2_19());
        rv.insert(gr_1_1_1_2_20_1());
        rv.insert(gr_1_1_1_2_20_2());
        rv.insert(gr_1_1_1_2_20_3());
        rv.insert(gr_1_1_1_2_20());
        rv.insert(gr_1_1_1_2_21_1());
        rv.insert(gr_1_1_1_2_21_2());
        rv.insert(gr_1_1_1_2_21_3());
        rv.insert(gr_1_1_1_2_21());
        rv.insert(gr_1_1_1_2_22_1());
        rv.insert(gr_1_1_1_2_22_2());
        rv.insert(gr_1_1_1_2_22_3());
        rv.insert(gr_1_1_1_2_22());
        rv.insert(gr_1_1_1_2_23_1());
        rv.insert(gr_1_1_1_2_23_2());
        rv.insert(gr_1_1_1_2_23_3());
        rv.insert(gr_1_1_1_2_23());
        rv.insert(gr_1_1_1_2_24_1());
        rv.insert(gr_1_1_1_2_24_2());
        rv.insert(gr_1_1_1_2_24_3());
        rv.insert(gr_1_1_1_2_24());
        rv.insert(gr_1_1_1_2_25_1());
        rv.insert(gr_1_1_1_2_25_2());
        rv.insert(gr_1_1_1_2_25_3());
        rv.insert(gr_1_1_1_2_25());
        rv.insert(gr_1_1_1_2_26_1());
        rv.insert(gr_1_1_1_2_26_2());
        rv.insert(gr_1_1_1_2_26_3());
        rv.insert(gr_1_1_1_2_26());
        rv.insert(gr_1_1_1_2_27_1());
        rv.insert(gr_1_1_1_2_27_2());
        rv.insert(gr_1_1_1_2_27_3());
        rv.insert(gr_1_1_1_2_27());
        rv.insert(gr_1_1_1_2_28_1());
        rv.insert(gr_1_1_1_2_28_2());
        rv.insert(gr_1_1_1_2_28_3());
        rv.insert(gr_1_1_1_2_28());
        rv.insert(gr_1_1_1_2_29_1());
        rv.insert(gr_1_1_1_2_29_2());
        rv.insert(gr_1_1_1_2_29_3());
        rv.insert(gr_1_1_1_2_29());
        rv.insert(gr_1_1_1_2_30_1());
        rv.insert(gr_1_1_1_2_30_2());
        rv.insert(gr_1_1_1_2_30_3());
        rv.insert(gr_1_1_1_2_30());
        rv.insert(gr_1_1_1_2_31_1());
        rv.insert(gr_1_1_1_2_31_2());
        rv.insert(gr_1_1_1_2_31_3());
        rv.insert(gr_1_1_1_2_31());
        rv.insert(gr_1_1_1_2_32_1());
        rv.insert(gr_1_1_1_2_32_2());
        rv.insert(gr_1_1_1_2_32_3());
        rv.insert(gr_1_1_1_2_32());
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
        rv.insert(gr_1_1_1_3_9_1());
        rv.insert(gr_1_1_1_3_9_2());
        rv.insert(gr_1_1_1_3_9_3());
        rv.insert(gr_1_1_1_3_9());
        rv.insert(gr_1_1_1_3_10_1());
        rv.insert(gr_1_1_1_3_10_2());
        rv.insert(gr_1_1_1_3_10_3());
        rv.insert(gr_1_1_1_3_10());
        rv.insert(gr_1_1_1_3_11_1());
        rv.insert(gr_1_1_1_3_11_2());
        rv.insert(gr_1_1_1_3_11_3());
        rv.insert(gr_1_1_1_3_11());
        rv.insert(gr_1_1_1_3_12_1());
        rv.insert(gr_1_1_1_3_12_2());
        rv.insert(gr_1_1_1_3_12_3());
        rv.insert(gr_1_1_1_3_12());
        rv.insert(gr_1_1_1_3_13_1());
        rv.insert(gr_1_1_1_3_13_2());
        rv.insert(gr_1_1_1_3_13_3());
        rv.insert(gr_1_1_1_3_13());
        rv.insert(gr_1_1_1_3_14_1());
        rv.insert(gr_1_1_1_3_14_2());
        rv.insert(gr_1_1_1_3_14_3());
        rv.insert(gr_1_1_1_3_14());
        rv.insert(gr_1_1_1_3_15_1());
        rv.insert(gr_1_1_1_3_15_2());
        rv.insert(gr_1_1_1_3_15_3());
        rv.insert(gr_1_1_1_3_15());
        rv.insert(gr_1_1_1_3_16_1());
        rv.insert(gr_1_1_1_3_16_2());
        rv.insert(gr_1_1_1_3_16_3());
        rv.insert(gr_1_1_1_3_16());
        rv.insert(gr_1_1_1_3_17_1());
        rv.insert(gr_1_1_1_3_17_2());
        rv.insert(gr_1_1_1_3_17_3());
        rv.insert(gr_1_1_1_3_17());
        rv.insert(gr_1_1_1_3_18_1());
        rv.insert(gr_1_1_1_3_18_2());
        rv.insert(gr_1_1_1_3_18_3());
        rv.insert(gr_1_1_1_3_18());
        rv.insert(gr_1_1_1_3_19_1());
        rv.insert(gr_1_1_1_3_19_2());
        rv.insert(gr_1_1_1_3_19_3());
        rv.insert(gr_1_1_1_3_19());
        rv.insert(gr_1_1_1_3_20_1());
        rv.insert(gr_1_1_1_3_20_2());
        rv.insert(gr_1_1_1_3_20_3());
        rv.insert(gr_1_1_1_3_20());
        rv.insert(gr_1_1_1_3_21_1());
        rv.insert(gr_1_1_1_3_21_2());
        rv.insert(gr_1_1_1_3_21_3());
        rv.insert(gr_1_1_1_3_21());
        rv.insert(gr_1_1_1_3_22_1());
        rv.insert(gr_1_1_1_3_22_2());
        rv.insert(gr_1_1_1_3_22_3());
        rv.insert(gr_1_1_1_3_22());
        rv.insert(gr_1_1_1_3_23_1());
        rv.insert(gr_1_1_1_3_23_2());
        rv.insert(gr_1_1_1_3_23_3());
        rv.insert(gr_1_1_1_3_23());
        rv.insert(gr_1_1_1_3_24_1());
        rv.insert(gr_1_1_1_3_24_2());
        rv.insert(gr_1_1_1_3_24_3());
        rv.insert(gr_1_1_1_3_24());
        rv.insert(gr_1_1_1_3_25_1());
        rv.insert(gr_1_1_1_3_25_2());
        rv.insert(gr_1_1_1_3_25_3());
        rv.insert(gr_1_1_1_3_25());
        rv.insert(gr_1_1_1_3_26_1());
        rv.insert(gr_1_1_1_3_26_2());
        rv.insert(gr_1_1_1_3_26_3());
        rv.insert(gr_1_1_1_3_26());
        rv.insert(gr_1_1_1_3_27_1());
        rv.insert(gr_1_1_1_3_27_2());
        rv.insert(gr_1_1_1_3_27_3());
        rv.insert(gr_1_1_1_3_27());
        rv.insert(gr_1_1_1_3_28_1());
        rv.insert(gr_1_1_1_3_28_2());
        rv.insert(gr_1_1_1_3_28_3());
        rv.insert(gr_1_1_1_3_28());
        rv.insert(gr_1_1_1_3_29_1());
        rv.insert(gr_1_1_1_3_29_2());
        rv.insert(gr_1_1_1_3_29_3());
        rv.insert(gr_1_1_1_3_29());
        rv.insert(gr_1_1_1_3_30_1());
        rv.insert(gr_1_1_1_3_30_2());
        rv.insert(gr_1_1_1_3_30_3());
        rv.insert(gr_1_1_1_3_30());
        rv.insert(gr_1_1_1_3_31_1());
        rv.insert(gr_1_1_1_3_31_2());
        rv.insert(gr_1_1_1_3_31_3());
        rv.insert(gr_1_1_1_3_31());
        rv.insert(gr_1_1_1_3_32_1());
        rv.insert(gr_1_1_1_3_32_2());
        rv.insert(gr_1_1_1_3_32_3());
        rv.insert(gr_1_1_1_3_32());
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
        rv.insert(gr_1_1_1_4_9_1());
        rv.insert(gr_1_1_1_4_9_2());
        rv.insert(gr_1_1_1_4_9_3());
        rv.insert(gr_1_1_1_4_9());
        rv.insert(gr_1_1_1_4_10_1());
        rv.insert(gr_1_1_1_4_10_2());
        rv.insert(gr_1_1_1_4_10_3());
        rv.insert(gr_1_1_1_4_10());
        rv.insert(gr_1_1_1_4_11_1());
        rv.insert(gr_1_1_1_4_11_2());
        rv.insert(gr_1_1_1_4_11_3());
        rv.insert(gr_1_1_1_4_11());
        rv.insert(gr_1_1_1_4_12_1());
        rv.insert(gr_1_1_1_4_12_2());
        rv.insert(gr_1_1_1_4_12_3());
        rv.insert(gr_1_1_1_4_12());
        rv.insert(gr_1_1_1_4_13_1());
        rv.insert(gr_1_1_1_4_13_2());
        rv.insert(gr_1_1_1_4_13_3());
        rv.insert(gr_1_1_1_4_13());
        rv.insert(gr_1_1_1_4_14_1());
        rv.insert(gr_1_1_1_4_14_2());
        rv.insert(gr_1_1_1_4_14_3());
        rv.insert(gr_1_1_1_4_14());
        rv.insert(gr_1_1_1_4_15_1());
        rv.insert(gr_1_1_1_4_15_2());
        rv.insert(gr_1_1_1_4_15_3());
        rv.insert(gr_1_1_1_4_15());
        rv.insert(gr_1_1_1_4_16_1());
        rv.insert(gr_1_1_1_4_16_2());
        rv.insert(gr_1_1_1_4_16_3());
        rv.insert(gr_1_1_1_4_16());
        rv.insert(gr_1_1_1_4_17_1());
        rv.insert(gr_1_1_1_4_17_2());
        rv.insert(gr_1_1_1_4_17_3());
        rv.insert(gr_1_1_1_4_17());
        rv.insert(gr_1_1_1_4_18_1());
        rv.insert(gr_1_1_1_4_18_2());
        rv.insert(gr_1_1_1_4_18_3());
        rv.insert(gr_1_1_1_4_18());
        rv.insert(gr_1_1_1_4_19_1());
        rv.insert(gr_1_1_1_4_19_2());
        rv.insert(gr_1_1_1_4_19_3());
        rv.insert(gr_1_1_1_4_19());
        rv.insert(gr_1_1_1_4_20_1());
        rv.insert(gr_1_1_1_4_20_2());
        rv.insert(gr_1_1_1_4_20_3());
        rv.insert(gr_1_1_1_4_20());
        rv.insert(gr_1_1_1_4_21_1());
        rv.insert(gr_1_1_1_4_21_2());
        rv.insert(gr_1_1_1_4_21_3());
        rv.insert(gr_1_1_1_4_21());
        rv.insert(gr_1_1_1_4_22_1());
        rv.insert(gr_1_1_1_4_22_2());
        rv.insert(gr_1_1_1_4_22_3());
        rv.insert(gr_1_1_1_4_22());
        rv.insert(gr_1_1_1_4_23_1());
        rv.insert(gr_1_1_1_4_23_2());
        rv.insert(gr_1_1_1_4_23_3());
        rv.insert(gr_1_1_1_4_23());
        rv.insert(gr_1_1_1_4_24_1());
        rv.insert(gr_1_1_1_4_24_2());
        rv.insert(gr_1_1_1_4_24_3());
        rv.insert(gr_1_1_1_4_24());
        rv.insert(gr_1_1_1_4_25_1());
        rv.insert(gr_1_1_1_4_25_2());
        rv.insert(gr_1_1_1_4_25_3());
        rv.insert(gr_1_1_1_4_25());
        rv.insert(gr_1_1_1_4_26_1());
        rv.insert(gr_1_1_1_4_26_2());
        rv.insert(gr_1_1_1_4_26_3());
        rv.insert(gr_1_1_1_4_26());
        rv.insert(gr_1_1_1_4_27_1());
        rv.insert(gr_1_1_1_4_27_2());
        rv.insert(gr_1_1_1_4_27_3());
        rv.insert(gr_1_1_1_4_27());
        rv.insert(gr_1_1_1_4_28_1());
        rv.insert(gr_1_1_1_4_28_2());
        rv.insert(gr_1_1_1_4_28_3());
        rv.insert(gr_1_1_1_4_28());
        rv.insert(gr_1_1_1_4_29_1());
        rv.insert(gr_1_1_1_4_29_2());
        rv.insert(gr_1_1_1_4_29_3());
        rv.insert(gr_1_1_1_4_29());
        rv.insert(gr_1_1_1_4_30_1());
        rv.insert(gr_1_1_1_4_30_2());
        rv.insert(gr_1_1_1_4_30_3());
        rv.insert(gr_1_1_1_4_30());
        rv.insert(gr_1_1_1_4_31_1());
        rv.insert(gr_1_1_1_4_31_2());
        rv.insert(gr_1_1_1_4_31_3());
        rv.insert(gr_1_1_1_4_31());
        rv.insert(gr_1_1_1_4_32_1());
        rv.insert(gr_1_1_1_4_32_2());
        rv.insert(gr_1_1_1_4_32_3());
        rv.insert(gr_1_1_1_4_32());
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
        rv.insert(gr_1_1_1_5_9_1());
        rv.insert(gr_1_1_1_5_9_2());
        rv.insert(gr_1_1_1_5_9_3());
        rv.insert(gr_1_1_1_5_9());
        rv.insert(gr_1_1_1_5_10_1());
        rv.insert(gr_1_1_1_5_10_2());
        rv.insert(gr_1_1_1_5_10_3());
        rv.insert(gr_1_1_1_5_10());
        rv.insert(gr_1_1_1_5_11_1());
        rv.insert(gr_1_1_1_5_11_2());
        rv.insert(gr_1_1_1_5_11_3());
        rv.insert(gr_1_1_1_5_11());
        rv.insert(gr_1_1_1_5_12_1());
        rv.insert(gr_1_1_1_5_12_2());
        rv.insert(gr_1_1_1_5_12_3());
        rv.insert(gr_1_1_1_5_12());
        rv.insert(gr_1_1_1_5_13_1());
        rv.insert(gr_1_1_1_5_13_2());
        rv.insert(gr_1_1_1_5_13_3());
        rv.insert(gr_1_1_1_5_13());
        rv.insert(gr_1_1_1_5_14_1());
        rv.insert(gr_1_1_1_5_14_2());
        rv.insert(gr_1_1_1_5_14_3());
        rv.insert(gr_1_1_1_5_14());
        rv.insert(gr_1_1_1_5_15_1());
        rv.insert(gr_1_1_1_5_15_2());
        rv.insert(gr_1_1_1_5_15_3());
        rv.insert(gr_1_1_1_5_15());
        rv.insert(gr_1_1_1_5_16_1());
        rv.insert(gr_1_1_1_5_16_2());
        rv.insert(gr_1_1_1_5_16_3());
        rv.insert(gr_1_1_1_5_16());
        rv.insert(gr_1_1_1_5_17_1());
        rv.insert(gr_1_1_1_5_17_2());
        rv.insert(gr_1_1_1_5_17_3());
        rv.insert(gr_1_1_1_5_17());
        rv.insert(gr_1_1_1_5_18_1());
        rv.insert(gr_1_1_1_5_18_2());
        rv.insert(gr_1_1_1_5_18_3());
        rv.insert(gr_1_1_1_5_18());
        rv.insert(gr_1_1_1_5_19_1());
        rv.insert(gr_1_1_1_5_19_2());
        rv.insert(gr_1_1_1_5_19_3());
        rv.insert(gr_1_1_1_5_19());
        rv.insert(gr_1_1_1_5_20_1());
        rv.insert(gr_1_1_1_5_20_2());
        rv.insert(gr_1_1_1_5_20_3());
        rv.insert(gr_1_1_1_5_20());
        rv.insert(gr_1_1_1_5_21_1());
        rv.insert(gr_1_1_1_5_21_2());
        rv.insert(gr_1_1_1_5_21_3());
        rv.insert(gr_1_1_1_5_21());
        rv.insert(gr_1_1_1_5_22_1());
        rv.insert(gr_1_1_1_5_22_2());
        rv.insert(gr_1_1_1_5_22_3());
        rv.insert(gr_1_1_1_5_22());
        rv.insert(gr_1_1_1_5_23_1());
        rv.insert(gr_1_1_1_5_23_2());
        rv.insert(gr_1_1_1_5_23_3());
        rv.insert(gr_1_1_1_5_23());
        rv.insert(gr_1_1_1_5_24_1());
        rv.insert(gr_1_1_1_5_24_2());
        rv.insert(gr_1_1_1_5_24_3());
        rv.insert(gr_1_1_1_5_24());
        rv.insert(gr_1_1_1_5_25_1());
        rv.insert(gr_1_1_1_5_25_2());
        rv.insert(gr_1_1_1_5_25_3());
        rv.insert(gr_1_1_1_5_25());
        rv.insert(gr_1_1_1_5_26_1());
        rv.insert(gr_1_1_1_5_26_2());
        rv.insert(gr_1_1_1_5_26_3());
        rv.insert(gr_1_1_1_5_26());
        rv.insert(gr_1_1_1_5_27_1());
        rv.insert(gr_1_1_1_5_27_2());
        rv.insert(gr_1_1_1_5_27_3());
        rv.insert(gr_1_1_1_5_27());
        rv.insert(gr_1_1_1_5_28_1());
        rv.insert(gr_1_1_1_5_28_2());
        rv.insert(gr_1_1_1_5_28_3());
        rv.insert(gr_1_1_1_5_28());
        rv.insert(gr_1_1_1_5_29_1());
        rv.insert(gr_1_1_1_5_29_2());
        rv.insert(gr_1_1_1_5_29_3());
        rv.insert(gr_1_1_1_5_29());
        rv.insert(gr_1_1_1_5_30_1());
        rv.insert(gr_1_1_1_5_30_2());
        rv.insert(gr_1_1_1_5_30_3());
        rv.insert(gr_1_1_1_5_30());
        rv.insert(gr_1_1_1_5_31_1());
        rv.insert(gr_1_1_1_5_31_2());
        rv.insert(gr_1_1_1_5_31_3());
        rv.insert(gr_1_1_1_5_31());
        rv.insert(gr_1_1_1_5_32_1());
        rv.insert(gr_1_1_1_5_32_2());
        rv.insert(gr_1_1_1_5_32_3());
        rv.insert(gr_1_1_1_5_32());
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
        rv.insert(gr_1_1_1_6_9_1());
        rv.insert(gr_1_1_1_6_9_2());
        rv.insert(gr_1_1_1_6_9_3());
        rv.insert(gr_1_1_1_6_9());
        rv.insert(gr_1_1_1_6_10_1());
        rv.insert(gr_1_1_1_6_10_2());
        rv.insert(gr_1_1_1_6_10_3());
        rv.insert(gr_1_1_1_6_10());
        rv.insert(gr_1_1_1_6_11_1());
        rv.insert(gr_1_1_1_6_11_2());
        rv.insert(gr_1_1_1_6_11_3());
        rv.insert(gr_1_1_1_6_11());
        rv.insert(gr_1_1_1_6_12_1());
        rv.insert(gr_1_1_1_6_12_2());
        rv.insert(gr_1_1_1_6_12_3());
        rv.insert(gr_1_1_1_6_12());
        rv.insert(gr_1_1_1_6_13_1());
        rv.insert(gr_1_1_1_6_13_2());
        rv.insert(gr_1_1_1_6_13_3());
        rv.insert(gr_1_1_1_6_13());
        rv.insert(gr_1_1_1_6_14_1());
        rv.insert(gr_1_1_1_6_14_2());
        rv.insert(gr_1_1_1_6_14_3());
        rv.insert(gr_1_1_1_6_14());
        rv.insert(gr_1_1_1_6_15_1());
        rv.insert(gr_1_1_1_6_15_2());
        rv.insert(gr_1_1_1_6_15_3());
        rv.insert(gr_1_1_1_6_15());
        rv.insert(gr_1_1_1_6_16_1());
        rv.insert(gr_1_1_1_6_16_2());
        rv.insert(gr_1_1_1_6_16_3());
        rv.insert(gr_1_1_1_6_16());
        rv.insert(gr_1_1_1_6_17_1());
        rv.insert(gr_1_1_1_6_17_2());
        rv.insert(gr_1_1_1_6_17_3());
        rv.insert(gr_1_1_1_6_17());
        rv.insert(gr_1_1_1_6_18_1());
        rv.insert(gr_1_1_1_6_18_2());
        rv.insert(gr_1_1_1_6_18_3());
        rv.insert(gr_1_1_1_6_18());
        rv.insert(gr_1_1_1_6_19_1());
        rv.insert(gr_1_1_1_6_19_2());
        rv.insert(gr_1_1_1_6_19_3());
        rv.insert(gr_1_1_1_6_19());
        rv.insert(gr_1_1_1_6_20_1());
        rv.insert(gr_1_1_1_6_20_2());
        rv.insert(gr_1_1_1_6_20_3());
        rv.insert(gr_1_1_1_6_20());
        rv.insert(gr_1_1_1_6_21_1());
        rv.insert(gr_1_1_1_6_21_2());
        rv.insert(gr_1_1_1_6_21_3());
        rv.insert(gr_1_1_1_6_21());
        rv.insert(gr_1_1_1_6_22_1());
        rv.insert(gr_1_1_1_6_22_2());
        rv.insert(gr_1_1_1_6_22_3());
        rv.insert(gr_1_1_1_6_22());
        rv.insert(gr_1_1_1_6_23_1());
        rv.insert(gr_1_1_1_6_23_2());
        rv.insert(gr_1_1_1_6_23_3());
        rv.insert(gr_1_1_1_6_23());
        rv.insert(gr_1_1_1_6_24_1());
        rv.insert(gr_1_1_1_6_24_2());
        rv.insert(gr_1_1_1_6_24_3());
        rv.insert(gr_1_1_1_6_24());
        rv.insert(gr_1_1_1_6_25_1());
        rv.insert(gr_1_1_1_6_25_2());
        rv.insert(gr_1_1_1_6_25_3());
        rv.insert(gr_1_1_1_6_25());
        rv.insert(gr_1_1_1_6_26_1());
        rv.insert(gr_1_1_1_6_26_2());
        rv.insert(gr_1_1_1_6_26_3());
        rv.insert(gr_1_1_1_6_26());
        rv.insert(gr_1_1_1_6_27_1());
        rv.insert(gr_1_1_1_6_27_2());
        rv.insert(gr_1_1_1_6_27_3());
        rv.insert(gr_1_1_1_6_27());
        rv.insert(gr_1_1_1_6_28_1());
        rv.insert(gr_1_1_1_6_28_2());
        rv.insert(gr_1_1_1_6_28_3());
        rv.insert(gr_1_1_1_6_28());
        rv.insert(gr_1_1_1_6_29_1());
        rv.insert(gr_1_1_1_6_29_2());
        rv.insert(gr_1_1_1_6_29_3());
        rv.insert(gr_1_1_1_6_29());
        rv.insert(gr_1_1_1_6_30_1());
        rv.insert(gr_1_1_1_6_30_2());
        rv.insert(gr_1_1_1_6_30_3());
        rv.insert(gr_1_1_1_6_30());
        rv.insert(gr_1_1_1_6_31_1());
        rv.insert(gr_1_1_1_6_31_2());
        rv.insert(gr_1_1_1_6_31_3());
        rv.insert(gr_1_1_1_6_31());
        rv.insert(gr_1_1_1_6_32_1());
        rv.insert(gr_1_1_1_6_32_2());
        rv.insert(gr_1_1_1_6_32_3());
        rv.insert(gr_1_1_1_6_32());
        rv.insert(gr_1_1_1_6());
        rv.insert(gr_1_1_1());
        rv.insert(gr_1_1());
        rv.insert(gr_1());
        return rv;
    }
    static fmwkng::gold_holder gh_(gold_master(), gold_results_);
}
