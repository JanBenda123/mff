#include "fmwkng.hpp"
#include "dcnnasgn.hpp"

namespace dcnnmain {
    static fmwkng::gold_pair gr_1()
    {
        fmwkng::gold_pair rv;
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::impl::version_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_platforms_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<dcnnmain::minibatch,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(32,32,5)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<dcnnmain::total,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(160,160,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<dcnnmain::superbatch,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1,1,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<dcnnmain::loss,fmwkng::impl::element_sense::CLOSE>>(41U));
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
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<dcnnmain::minibatch,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(32,32,5)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<dcnnmain::total,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(160,160,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<dcnnmain::superbatch,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1,1,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<dcnnmain::loss,fmwkng::impl::element_sense::CLOSE>>(41U));
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
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<dcnnmain::minibatch,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(32,32,5)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<dcnnmain::total,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(160,160,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<dcnnmain::superbatch,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1,1,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<dcnnmain::loss,fmwkng::impl::element_sense::CLOSE>>(41U));
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
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<dcnnmain::minibatch,fmwkng::impl::element_sense::OPEN>>(std::make_pair(32,fmwkng::logarithmic(32,32,5))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<dcnnmain::total,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(160,160,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<dcnnmain::superbatch,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1,1,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<dcnnmain::loss,fmwkng::impl::element_sense::CLOSE>>(41U));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1()
    {
        fmwkng::impl::element_list rv = gp_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<dcnnmain::minibatch,fmwkng::impl::element_sense::OPEN>>(std::make_pair(32,fmwkng::logarithmic(32,32,5))));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<dcnnmain::total,fmwkng::impl::element_sense::OPEN>>(std::make_pair(160,fmwkng::logarithmic(160,160,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<dcnnmain::superbatch,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1,1,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<dcnnmain::loss,fmwkng::impl::element_sense::CLOSE>>(41U));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1_1()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<dcnnmain::total,fmwkng::impl::element_sense::OPEN>>(std::make_pair(160,fmwkng::logarithmic(160,160,2))));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_1_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<dcnnmain::superbatch,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1,fmwkng::logarithmic(1,1,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<dcnnmain::loss,fmwkng::impl::element_sense::CLOSE>>(41U));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1_1_1()
    {
        fmwkng::impl::element_list rv = gp_1_1_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<dcnnmain::superbatch,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1,fmwkng::logarithmic(1,1,2))));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_1_1_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<dcnnmain::loss,fmwkng::impl::element_sense::CLOSE>>(41U));
        return rv;
    }
    static fmwkng::gold_data gold_results_()
    {
        fmwkng::gold_data rv;
        rv.insert(gr_1_1_1_1_1_1_1());
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
