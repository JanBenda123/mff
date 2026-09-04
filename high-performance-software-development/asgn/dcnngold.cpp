#include "fmwkng.hpp"
#include "dcnnasgn.hpp"

namespace dcnnmain {
    static fmwkng::gold_pair gr_1()
    {
        fmwkng::gold_pair rv;
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::impl::version_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_platforms_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<dcnnmain::minibatch,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(16,16,5)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<dcnnmain::total,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(2048,2048,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<dcnnmain::superbatch,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(8,8,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<dcnnmain::loss,fmwkng::impl::element_sense::CLOSE>>(6U));
        return rv;
    }
    static fmwkng::impl::element_list gp_1()
    {
        fmwkng::impl::element_list rv;
        return rv;
    }
    static fmwkng::gold_pair gr_1_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_platforms_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<dcnnmain::minibatch,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(16,16,5)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<dcnnmain::total,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(2048,2048,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<dcnnmain::superbatch,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(8,8,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<dcnnmain::loss,fmwkng::impl::element_sense::CLOSE>>(6U));
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
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<dcnnmain::minibatch,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(16,16,5)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<dcnnmain::total,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(2048,2048,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<dcnnmain::superbatch,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(8,8,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<dcnnmain::loss,fmwkng::impl::element_sense::CLOSE>>(6U));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1()
    {
        fmwkng::impl::element_list rv = gp_1_1();
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<dcnnmain::minibatch,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16,fmwkng::logarithmic(16,16,5))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<dcnnmain::total,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(2048,2048,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<dcnnmain::superbatch,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(8,8,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<dcnnmain::loss,fmwkng::impl::element_sense::CLOSE>>(6U));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1()
    {
        fmwkng::impl::element_list rv = gp_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<dcnnmain::minibatch,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16,fmwkng::logarithmic(16,16,5))));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<dcnnmain::total,fmwkng::impl::element_sense::OPEN>>(std::make_pair(2048,fmwkng::logarithmic(2048,2048,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<dcnnmain::superbatch,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(8,8,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<dcnnmain::loss,fmwkng::impl::element_sense::CLOSE>>(6U));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1_1()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<dcnnmain::total,fmwkng::impl::element_sense::OPEN>>(std::make_pair(2048,fmwkng::logarithmic(2048,2048,2))));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_1_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<dcnnmain::superbatch,fmwkng::impl::element_sense::OPEN>>(std::make_pair(8,fmwkng::logarithmic(8,8,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<dcnnmain::loss,fmwkng::impl::element_sense::CLOSE>>(6U));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1_1_1()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<dcnnmain::superbatch,fmwkng::impl::element_sense::OPEN>>(std::make_pair(8,fmwkng::logarithmic(8,8,2))));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_1_1_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<dcnnmain::loss,fmwkng::impl::element_sense::CLOSE>>(6U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_1_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<dcnnmain::loss,fmwkng::impl::element_sense::CLOSE>>(5U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_1_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<dcnnmain::loss,fmwkng::impl::element_sense::CLOSE>>(7U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_1_1_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<dcnnmain::loss,fmwkng::impl::element_sense::CLOSE>>(7U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_1_1_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<dcnnmain::loss,fmwkng::impl::element_sense::CLOSE>>(5U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_1_1_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<dcnnmain::loss,fmwkng::impl::element_sense::CLOSE>>(6U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_1_1_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<dcnnmain::loss,fmwkng::impl::element_sense::CLOSE>>(7U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_1_1_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<dcnnmain::loss,fmwkng::impl::element_sense::CLOSE>>(6U));
        return rv;
    }
    static fmwkng::gold_data gold_results_()
    {
        fmwkng::gold_data rv;
        rv.insert(gr_1_1_1_1_1_1_1());
        rv.insert(gr_1_1_1_1_1_1_2());
        rv.insert(gr_1_1_1_1_1_1_3());
        rv.insert(gr_1_1_1_1_1_1_4());
        rv.insert(gr_1_1_1_1_1_1_5());
        rv.insert(gr_1_1_1_1_1_1_6());
        rv.insert(gr_1_1_1_1_1_1_7());
        rv.insert(gr_1_1_1_1_1_1_8());
        rv.insert(gr_1_1_1_1_1_1());
        rv.insert(gr_1_1_1_1_1());
        rv.insert(gr_1_1_1_1());
        rv.insert(gr_1_1_1());
        rv.insert(gr_1_1());
        rv.insert(gr_1());
        return rv;
    }
    static fmwkng::gold_holder gh_(gold_master(), gold_results_);
}
