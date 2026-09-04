#include "fmwkng.hpp"
#include "fwasgn.hpp"

namespace fwmain {
    static fmwkng::gold_pair gr_1()
    {
        fmwkng::gold_pair rv;
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::impl::version_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_platforms_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::size,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(64,1024,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4894170730723645475U));
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
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::size,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(64,1024,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4894170730723645475U));
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
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::size,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(64,1024,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4894170730723645475U));
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
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::size,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(64,1024,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4894170730723645475U));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_1()
    {
        fmwkng::impl::element_list rv = gp_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(0));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(64,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16362803498166955507U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(128,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(8));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8190477397088337769U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(256,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7018439455406717830U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(512,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12686733068592236838U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7263607380703349388U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::size,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(64,1024,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5126188986014237120U));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_2()
    {
        fmwkng::impl::element_list rv = gp_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(64,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12863352106857736176U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(128,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(8));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16556450431537597630U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(256,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1782461009396868014U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(512,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14238805729982463339U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9515993577217575163U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::size,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(64,1024,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9038624688692642784U));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_3()
    {
        fmwkng::impl::element_list rv = gp_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(64,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(268031370980901363U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(128,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(8));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6412822972983049754U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(256,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16005883659499856099U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(512,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14004004846616390851U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9346410725460333702U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::size,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(64,1024,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9305022380370545972U));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_4()
    {
        fmwkng::impl::element_list rv = gp_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(64,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11121368095423621882U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(128,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(8));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16066853166487680999U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(256,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8814045236823831661U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(512,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14853487885954017891U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16389366342069343469U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::size,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(64,1024,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7762555752580075673U));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_5()
    {
        fmwkng::impl::element_list rv = gp_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(64,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5500132839721525991U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(128,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(8));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9524094609915420185U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(256,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11115288150249764995U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(512,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7148406882380552954U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9458316423752049363U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::size,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(64,1024,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1334264281281512679U));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_6()
    {
        fmwkng::impl::element_list rv = gp_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(64,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9968980179861613515U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(128,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(8));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3510879375118349891U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(256,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7928192024392510843U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(512,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13045679762781542628U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(293235023593714731U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::size,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(64,1024,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4338437718250834618U));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_7()
    {
        fmwkng::impl::element_list rv = gp_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(64,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(17444524839750419452U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(128,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(8));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9004331502137432707U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(256,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9155365129291964875U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(512,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11631308370530542623U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_7_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7268262929154047866U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::size,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(64,1024,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2667504040128541176U));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_8()
    {
        fmwkng::impl::element_list rv = gp_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(64,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11762107885310507479U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(128,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(8));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13753651749689765350U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(256,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(15877114299128031686U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(512,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5295704366867673001U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_8_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(654033766849312378U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_9()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(8));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::size,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(64,1024,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1847130799128880102U));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_9()
    {
        fmwkng::impl::element_list rv = gp_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(8));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_9_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_9();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(64,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13218099614517653244U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_9_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_9();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(128,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(8));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(10126950383245934455U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_9_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_9();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(256,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13106000552441173271U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_9_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_9();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(512,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(17629741009742275565U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_9_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_9();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16088035445814011178U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_10()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(9));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::size,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(64,1024,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4995492593863479564U));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_10()
    {
        fmwkng::impl::element_list rv = gp_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(9));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_10_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_10();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(64,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14145235798529016485U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_10_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_10();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(128,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(8));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6419810097560474459U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_10_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_10();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(256,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(15231025692206867621U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_10_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_10();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(512,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9854530936152743729U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_10_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_10();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9493056335243969222U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_11()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(10));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::size,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(64,1024,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3702461654582100724U));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_11()
    {
        fmwkng::impl::element_list rv = gp_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(10));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_11_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_11();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(64,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2609584713734119807U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_11_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_11();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(128,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(8));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11520673750913105529U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_11_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_11();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(256,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4873232599850783943U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_11_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_11();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(512,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12472207870128123894U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_11_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_11();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5028224504127830934U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_12()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(11));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::size,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(64,1024,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1834986045126637494U));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_12()
    {
        fmwkng::impl::element_list rv = gp_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(11));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_12_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_12();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(64,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4573187377306574146U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_12_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_12();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(128,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(8));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12177344524474293780U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_12_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_12();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(256,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16890738539331279532U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_12_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_12();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(512,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12068276249241416919U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_12_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_12();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11578515416813496938U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_13()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(12));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::size,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(64,1024,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8324872128097908013U));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_13()
    {
        fmwkng::impl::element_list rv = gp_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(12));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_13_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_13();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(64,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11223840566877611078U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_13_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_13();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(128,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(8));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12993925653353461143U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_13_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_13();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(256,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14115385920161508039U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_13_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_13();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(512,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11378193843756436679U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_13_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_13();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12981158318388754802U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_14()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(13));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::size,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(64,1024,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4304479300213879862U));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_14()
    {
        fmwkng::impl::element_list rv = gp_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(13));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_14_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_14();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(64,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4830533050088510425U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_14_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_14();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(128,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(8));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2341919051036131636U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_14_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_14();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(256,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5243008856057491599U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_14_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_14();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(512,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16944098638541885864U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_14_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_14();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6001456467703230356U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_15()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(14));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::size,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(64,1024,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5010507182424562556U));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_15()
    {
        fmwkng::impl::element_list rv = gp_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(14));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_15_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_15();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(64,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6004834162603115228U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_15_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_15();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(128,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(8));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(10300505991251058219U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_15_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_15();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(256,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13000813659040274477U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_15_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_15();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(512,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7314170946655447680U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_15_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_15();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4350101887679454155U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_16()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(15));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::size,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(64,1024,2)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(978110186334515562U));
        return rv;
    }
    static fmwkng::impl::element_list gp_1_1_1_16()
    {
        fmwkng::impl::element_list rv = gp_1_1_1();
        rv.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(15));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_16_1()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_16();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(64,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9375854924332195873U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_16_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_16();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(128,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(8));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(15206363035717019206U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_16_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_16();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(256,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7495387835503629043U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_16_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_16();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(512,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2197998883453011241U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_16_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_16();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::size,fmwkng::impl::element_sense::OPEN>>(std::make_pair(1024,fmwkng::logarithmic(64,1024,2))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fwmain::repeats,fmwkng::impl::element_sense::OPEN>>(1));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<fwmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14901587912222420331U));
        return rv;
    }
    static fmwkng::gold_data gold_results_()
    {
        fmwkng::gold_data rv;
        rv.insert(gr_1_1_1_1_1());
        rv.insert(gr_1_1_1_1_2());
        rv.insert(gr_1_1_1_1_3());
        rv.insert(gr_1_1_1_1_4());
        rv.insert(gr_1_1_1_1_5());
        rv.insert(gr_1_1_1_1());
        rv.insert(gr_1_1_1_2_1());
        rv.insert(gr_1_1_1_2_2());
        rv.insert(gr_1_1_1_2_3());
        rv.insert(gr_1_1_1_2_4());
        rv.insert(gr_1_1_1_2_5());
        rv.insert(gr_1_1_1_2());
        rv.insert(gr_1_1_1_3_1());
        rv.insert(gr_1_1_1_3_2());
        rv.insert(gr_1_1_1_3_3());
        rv.insert(gr_1_1_1_3_4());
        rv.insert(gr_1_1_1_3_5());
        rv.insert(gr_1_1_1_3());
        rv.insert(gr_1_1_1_4_1());
        rv.insert(gr_1_1_1_4_2());
        rv.insert(gr_1_1_1_4_3());
        rv.insert(gr_1_1_1_4_4());
        rv.insert(gr_1_1_1_4_5());
        rv.insert(gr_1_1_1_4());
        rv.insert(gr_1_1_1_5_1());
        rv.insert(gr_1_1_1_5_2());
        rv.insert(gr_1_1_1_5_3());
        rv.insert(gr_1_1_1_5_4());
        rv.insert(gr_1_1_1_5_5());
        rv.insert(gr_1_1_1_5());
        rv.insert(gr_1_1_1_6_1());
        rv.insert(gr_1_1_1_6_2());
        rv.insert(gr_1_1_1_6_3());
        rv.insert(gr_1_1_1_6_4());
        rv.insert(gr_1_1_1_6_5());
        rv.insert(gr_1_1_1_6());
        rv.insert(gr_1_1_1_7_1());
        rv.insert(gr_1_1_1_7_2());
        rv.insert(gr_1_1_1_7_3());
        rv.insert(gr_1_1_1_7_4());
        rv.insert(gr_1_1_1_7_5());
        rv.insert(gr_1_1_1_7());
        rv.insert(gr_1_1_1_8_1());
        rv.insert(gr_1_1_1_8_2());
        rv.insert(gr_1_1_1_8_3());
        rv.insert(gr_1_1_1_8_4());
        rv.insert(gr_1_1_1_8_5());
        rv.insert(gr_1_1_1_8());
        rv.insert(gr_1_1_1_9_1());
        rv.insert(gr_1_1_1_9_2());
        rv.insert(gr_1_1_1_9_3());
        rv.insert(gr_1_1_1_9_4());
        rv.insert(gr_1_1_1_9_5());
        rv.insert(gr_1_1_1_9());
        rv.insert(gr_1_1_1_10_1());
        rv.insert(gr_1_1_1_10_2());
        rv.insert(gr_1_1_1_10_3());
        rv.insert(gr_1_1_1_10_4());
        rv.insert(gr_1_1_1_10_5());
        rv.insert(gr_1_1_1_10());
        rv.insert(gr_1_1_1_11_1());
        rv.insert(gr_1_1_1_11_2());
        rv.insert(gr_1_1_1_11_3());
        rv.insert(gr_1_1_1_11_4());
        rv.insert(gr_1_1_1_11_5());
        rv.insert(gr_1_1_1_11());
        rv.insert(gr_1_1_1_12_1());
        rv.insert(gr_1_1_1_12_2());
        rv.insert(gr_1_1_1_12_3());
        rv.insert(gr_1_1_1_12_4());
        rv.insert(gr_1_1_1_12_5());
        rv.insert(gr_1_1_1_12());
        rv.insert(gr_1_1_1_13_1());
        rv.insert(gr_1_1_1_13_2());
        rv.insert(gr_1_1_1_13_3());
        rv.insert(gr_1_1_1_13_4());
        rv.insert(gr_1_1_1_13_5());
        rv.insert(gr_1_1_1_13());
        rv.insert(gr_1_1_1_14_1());
        rv.insert(gr_1_1_1_14_2());
        rv.insert(gr_1_1_1_14_3());
        rv.insert(gr_1_1_1_14_4());
        rv.insert(gr_1_1_1_14_5());
        rv.insert(gr_1_1_1_14());
        rv.insert(gr_1_1_1_15_1());
        rv.insert(gr_1_1_1_15_2());
        rv.insert(gr_1_1_1_15_3());
        rv.insert(gr_1_1_1_15_4());
        rv.insert(gr_1_1_1_15_5());
        rv.insert(gr_1_1_1_15());
        rv.insert(gr_1_1_1_16_1());
        rv.insert(gr_1_1_1_16_2());
        rv.insert(gr_1_1_1_16_3());
        rv.insert(gr_1_1_1_16_4());
        rv.insert(gr_1_1_1_16_5());
        rv.insert(gr_1_1_1_16());
        rv.insert(gr_1_1_1());
        rv.insert(gr_1_1());
        rv.insert(gr_1());
        return rv;
    }
    static fmwkng::gold_holder gh_(gold_master(), gold_results_);
}
