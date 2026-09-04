#include "fmwkng.hpp"
#include "fwasgn.hpp"

namespace fwmain {
    static fmwkng::gold_pair gr_1()
    {
        fmwkng::gold_pair rv;
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::impl::version_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_platforms_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::size,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(64,64,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(2));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16362803498166955507U));
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
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::size,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(64,64,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(2));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16362803498166955507U));
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
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::size,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(64,64,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(2));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16362803498166955507U));
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
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(64,fmwkng::logarithmic(64,64,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(2));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16362803498166955507U));
        return rv;
    }
    static fmwkng::gold_data gold_results_()
    {
        fmwkng::gold_data rv;
        rv.insert(gr_1_1_1_1());
        rv.insert(gr_1_1_1());
        rv.insert(gr_1_1());
        rv.insert(gr_1());
        return rv;
    }
    static fmwkng::gold_holder gh_(gold_master(), gold_results_);
}
