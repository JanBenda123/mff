#include "fmwkng.hpp"
#include "bsearchasgn.hpp"

namespace bsearchmain {
    static fmwkng::gold_pair gr_1()
    {
        fmwkng::gold_pair rv;
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::impl::version_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_platforms_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(64,65536,4)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6081560639948308758U));
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
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(64,65536,4)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6081560639948308758U));
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
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(64,65536,4)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6081560639948308758U));
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
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::isize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(64,fmwkng::logarithmic(64,65536,4))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<fmwkng::all_threads_tag,fmwkng::impl::element_sense::OPEN>>(std::monostate()));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1051958732160201849U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1051958732160201849U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1730852694183081859U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(17681662555332696405U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1427899314875682184U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2384536222499722081U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5997173008274340677U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3025485797867843087U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(17109571826600111095U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4810942352039898285U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(17147699182506667102U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16463771875108519423U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(794408990590520089U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3980422959925734851U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5943644902163293349U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5358987335640137099U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(371554087047623630U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3645853544613360328U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3047171729605126569U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(10202283966873058997U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16071855585692492U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(289772744080785618U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13227487463309949333U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11795791107752368633U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14796880558494048031U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6579306066560016025U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5856254793824250892U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14960026741041969177U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11121820806999258314U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9090204597519536404U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9485810099447739185U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3984661012541770413U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(10023215842157568991U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_9()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(8));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4978619174859682466U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5860086433781099824U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_9_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_9();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12149047098578749174U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_9_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_9();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(17196463550171536531U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_10()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(9));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9949012080807547733U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11773591731882808843U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_10_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_10();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12965381079148626159U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_10_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_10();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14993633688598960422U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_11()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(10));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4829844879587480028U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12298577006800482348U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_11_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_11();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3377546303948031887U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_11_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_11();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1601793560489368912U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_12()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(11));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1499164002475247740U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(15915812736967423921U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_12_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_12();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(17638030622018539907U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_12_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_12();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12818884771871184824U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_13()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(12));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6919441798477399768U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9724092858986717038U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_13_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_13();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6251033613161541715U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_13_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_13();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5492791522692922200U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_14()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(13));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1259102649318890379U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4885972418902469578U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_14_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_14();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11580723403920674008U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_14_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_14();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12187395338369323617U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_15()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(14));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2215566874302085331U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2389351180864300738U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_15_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_15();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12420057376949088138U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_15_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_15();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13815807552723689918U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_16()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(15));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8121338217245757211U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(17420665492389118714U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_16_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_16();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(10199054700229401302U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_16_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_16();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9647570681817040954U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_17()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(16));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5223194565046538482U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6165807651746770455U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_17_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_17();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11725175463714289665U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_17_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_17();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(48409060532382519U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_18()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(17));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9315999789825011254U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(17510160343003985499U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_18_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_18();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12688129010659258512U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_18_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_18();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(10234671428087956107U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_19()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(18));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1257594949148853418U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13674860466709518976U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_19_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_19();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14801642592660581695U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_19_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_19();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13684689135612707956U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_20()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(19));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2840208608869014938U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12010773703110633020U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_20_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_20();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2542584857340929939U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_20_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_20();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16424170725855599807U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_21()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(20));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8470323093470509202U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7328467080328710619U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_21_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_21();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13358988855947440099U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_21_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_21();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13460510810184346294U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_22()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(21));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3556058044092339697U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8280248934018961201U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_22_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_22();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6480042120389988109U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_22_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_22();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(17789464244413379568U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_23()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(22));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2807691228660144470U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8304118693126472178U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_23_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_23();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6013836500637449926U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_23_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_23();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14660205308457661787U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_24()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(23));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3707401925166217586U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12494637978900709685U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_24_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_24();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5026253340762593854U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_24_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_24();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(15627002100669375120U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_25()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(24));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(85512891692883420U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7858981136123581278U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_25_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_25();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4868361703708879330U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_25_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_25();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11538423658990799226U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_26()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(25));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7955148489386564018U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(229004238218439045U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_26_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_26();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16677622944947344159U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_26_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_26();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5140337162825380849U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_27()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(26));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(694907957525250930U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7580817808933664012U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_27_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_27();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11364975452049873243U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_27_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_27();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(285085040790648975U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_28()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(27));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1609890851727145821U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(251651242333872030U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_28_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_28();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(18424676659870321421U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_28_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_28();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1087874289160679379U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_29()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(28));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6680560034815684379U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(15995610879087283469U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_29_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_29();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16575703954160167834U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_29_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_29();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6060431506431802318U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_30()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(29));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6684809956214841045U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6066380908790732306U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_30_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_30();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(15765397464148526984U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_30_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_30();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(10161940634892554104U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_31()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(30));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9270499085202288077U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12828535065326368644U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_31_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_31();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14328929069048918142U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_31_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_31();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12774885151177363325U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_32()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(31));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(2319));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2936261067592518165U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(17523163976990987387U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_32_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_32();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(146));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3550390841665121307U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_1_32_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_1_32();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(9));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2398002412835963876U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4559302576413738367U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4559302576413738367U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12533947193727083814U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14624443914488996833U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2916662028885864520U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4729012092517920598U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2481275684884445990U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16945001652701082614U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7179605576887722124U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5193869219488456446U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13597046449097218832U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(10792901157392537567U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6518953833886889144U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7210154457931192556U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6145088541011847889U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11313906466067505893U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4798753207126694908U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4525404409074187322U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14700704607115403135U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9182027890193204023U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4700503928058105945U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4811096947103080041U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(10199059763720091542U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(162198316851938471U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2705557925143201808U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8018573527852636486U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7930433952689907630U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(15961566160395036904U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12545623583750711742U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4927149757074564781U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(17008494987221163522U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13166351589201452520U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1536035215251350831U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_9()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(8));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6118514592755567309U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(18317885542477590223U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_9_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_9();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(15538129502106644765U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_9_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_9();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3274449218972030606U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_10()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(9));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5385359241196582226U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6429288897558609600U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_10_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_10();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(17063616659724191328U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_10_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_10();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6591704388166128221U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_11()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(10));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6750104091280556210U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(18283784762100905918U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_11_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_11();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6172449194796627178U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_11_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_11();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8318169618815409606U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_12()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(11));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9363127750331290407U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(193912901251015130U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_12_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_12();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2266525553757763882U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_12_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_12();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16325245811909022997U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_13()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(12));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1011165569329445815U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7497209895578429940U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_13_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_13();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5069543222446356213U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_13_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_13();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12561806627962709269U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_14()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(13));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(859464007814340271U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13079295226422015981U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_14_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_14();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11869652471433928682U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_14_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_14();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16457216597086274240U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_15()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(14));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(874907215467883023U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8955186951968988634U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_15_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_15();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1667310294880575424U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_15_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_15();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12553544143846994837U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_16()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(15));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3802770684527953998U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(10158480551416942114U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_16_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_16();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(497432288222310724U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_16_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_16();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(846195721471588459U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_17()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(16));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9682432620546769377U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8836188966748291062U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_17_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_17();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3608248523451560905U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_17_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_17();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11320571029431388344U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_18()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(17));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8854067560994823254U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7845071782351846557U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_18_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_18();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11289765028143232874U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_18_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_18();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(15532830920357392894U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_19()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(18));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9165065509747744663U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(15705247982243121517U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_19_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_19();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8787878839600994475U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_19_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_19();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14322172384463360184U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_20()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(19));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3973404486733025713U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14305497867909322331U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_20_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_20();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(15402272870440217987U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_20_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_20();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(41753808288592437U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_21()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(20));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2442840150350210615U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5989123729375390759U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_21_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_21();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12812289222851151771U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_21_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_21();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2484665218955620760U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_22()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(21));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2195488012754854093U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16979506277610548848U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_22_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_22();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(17959868714031847112U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_22_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_22();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12383909901839882841U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_23()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(22));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5884922005420652614U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6577367217620605062U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_23_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_23();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4887566818345672429U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_23_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_23();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3675695017111645638U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_24()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(23));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7669358746233848845U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14621131963121957866U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_24_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_24();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(17644246587650830849U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_24_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_24();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6189565446410214075U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_25()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(24));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7987251680706160902U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7791420589250637157U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_25_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_25();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1491088142096258044U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_25_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_25();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(10264018643484919878U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_26()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(25));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9246384353308546363U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(586445976886214322U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_26_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_26();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5471524295746188851U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_26_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_26();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14460365167273001828U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_27()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(26));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3063587949056568738U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13631145872022826979U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_27_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_27();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(10282582021001243194U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_27_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_27();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(474619341279019632U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_28()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(27));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2380455009323276218U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16605914541717672423U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_28_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_28();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(15261614698318044744U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_28_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_28();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14927748956303353035U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_29()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(28));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7542435027257699536U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7297772428607017548U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_29_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_29();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11772710848700482324U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_29_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_29();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14292316612467522064U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_30()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(29));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9053831766123123200U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1165558512333045001U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_30_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_30();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(15022447157655781734U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_30_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_30();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9021106377186210798U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_31()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(30));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2356751211933551668U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11923939428167261198U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_31_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_31();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14735244252113666624U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_31_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_31();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16956072629672767232U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_32()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(31));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1771));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2528764077330630553U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13789346185704577989U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_32_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_32();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(113));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12525050567513459727U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_2_32_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_2_32();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(7));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16997034651372212164U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8786302497118954922U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8786302497118954922U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7971570962169211603U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11235176029046567341U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14374375267987154980U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2393882524156761304U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9232607047187706392U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8882460023363790646U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12425774116713160095U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2442776591820985108U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1880200595108320306U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1089708982664422772U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1406717962814768895U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5347424761274633878U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11734293923755725998U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7044819523098430882U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9805606988073004701U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4651998668081052790U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(289999431690112943U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(10161478222015854926U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3293255680954093134U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7813867139112055634U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1296831990931016997U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(17701360098589560466U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14083887210614830804U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1367066611103135342U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(17132396253216774447U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(262605252194528682U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11481460614439909667U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8710934425441225336U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9699237327505473577U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9063531577190197314U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(15709099263292370584U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_9()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(8));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6947837101347006821U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8724970251240795636U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_9_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_9();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16276913791654570037U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_9_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_9();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8456557596018736670U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_10()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(9));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8802527401852330766U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12101368578542358491U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_10_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_10();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9701631168252330844U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_10_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_10();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(15057814493222401492U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_11()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(10));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4781700258766342433U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6314564619151820331U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_11_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_11();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(571631380670884389U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_11_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_11();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5546367682195854506U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_12()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(11));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6791175118531201988U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16508813310870384130U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_12_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_12();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5073551176621958488U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_12_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_12();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(10358542988500312957U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_13()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(12));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8082499860912840574U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(10698869450874452151U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_13_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_13();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9158830439505327078U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_13_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_13();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13662609215378093613U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_14()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(13));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7028539282878638316U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13257180615865486906U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_14_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_14();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11654284325301538748U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_14_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_14();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9765391073437478326U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_15()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(14));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4110011422932645751U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2269882578190982894U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_15_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_15();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9597609038465468099U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_15_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_15();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1309302483007196622U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_16()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(15));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1178567484683714517U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14815652799003227841U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_16_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_16();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11467816329141124087U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_16_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_16();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(15384373812551186900U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_17()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(16));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7526731117711140334U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1552885835148631273U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_17_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_17();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1378489200276307808U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_17_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_17();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13201875939667184010U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_18()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(17));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5066426236687168759U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(900461783228153641U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_18_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_18();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(10884723922429953980U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_18_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_18();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3278174931193458112U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_19()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(18));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7196155904920562691U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16656196791400714939U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_19_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_19();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5599456912092070392U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_19_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_19();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(10563421426043385284U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_20()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(19));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(778702900192534737U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(10592290196813013296U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_20_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_20();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7095409631708116495U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_20_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_20();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9275040203258762595U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_21()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(20));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4307201043250573313U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12469340623907132624U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_21_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_21();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13865874552228156832U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_21_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_21();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3758859532904544235U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_22()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(21));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2274780647604439495U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4282890011302784537U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_22_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_22();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(10742796555596998603U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_22_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_22();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14078883394464980417U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_23()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(22));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7625617546108854264U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(17253497027821500198U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_23_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_23();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(17482032215741876198U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_23_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_23();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5962078199267641724U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_24()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(23));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4334391937698668373U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(10556973807300056356U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_24_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_24();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(876745690735700508U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_24_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_24();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1845935958672822317U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_25()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(24));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1628325764173852862U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8546390053214716913U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_25_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_25();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(17351941479870888563U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_25_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_25();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16115544208096521347U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_26()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(25));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2131227851943441324U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5853738422564821935U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_26_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_26();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3943884125571940153U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_26_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_26();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16126403096996960326U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_27()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(26));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9316257048270551478U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7898337435752259858U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_27_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_27();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(18108795826517375433U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_27_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_27();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13071413941998395206U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_28()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(27));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6159903993266183697U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1375155601769933241U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_28_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_28();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7389879319788874629U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_28_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_28();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7858570156824017137U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_29()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(28));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(706631232860759262U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9954282553818557615U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_29_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_29();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1354501983292739168U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_29_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_29();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12607177197517995573U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_30()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(29));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2979420821788982759U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13309055826334538693U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_30_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_30();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8375787398059028083U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_30_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_30();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3093275881669752546U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_31()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(30));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3228509588709836596U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16282888756731441922U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_31_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_31();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(685369671682362108U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_31_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_31();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14951061170460177523U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_32()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(31));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(1365));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2314664496732078647U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(10099400445536076990U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_32_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_32();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(92));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9137938112462813958U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_3_32_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_3_32();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(5));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1392109122140800158U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6613379864836518780U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6613379864836518780U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12439951950157057268U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2983564908997179291U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3465264240725538750U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1026103033815429765U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16330952778213805954U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11682939551562356819U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13433775920351816954U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(923967349353786743U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16474027157075685156U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14105216375044476337U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11456266471738179842U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3693447551046533271U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(818858600289633138U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5776651257035550887U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2178687581202652079U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2096328690922180414U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2333111352645692390U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8139655192040532129U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16675304716316092948U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1521427966305473123U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3805368106798697086U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16267163458462418540U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1537267732252063850U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1799580297342141152U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13618747158858069481U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3364073963206765797U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11530700557207261314U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8693616526724577511U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6140312262147915292U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(130351591239666455U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13637057224945376559U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_9()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(8));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3082536737382833825U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9522514102780615112U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_9_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_9();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4532446459632636043U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_9_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_9();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14956631785104400199U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_10()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(9));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7400054775208611864U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8276953572823093995U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_10_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_10();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(17145285720222790684U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_10_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_10();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(10441854915771903835U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_11()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(10));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4812127241310434785U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3310938504831239679U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_11_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_11();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16199692208775089539U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_11_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_11();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6549293539636726374U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_12()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(11));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9201942986428496318U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2738428460627026508U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_12_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_12();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(10953971156282114046U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_12_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_12();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(10045361397098731580U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_13()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(12));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7439320938863557282U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(10256448358864020678U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_13_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_13();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9682187114653489333U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_13_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_13();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12311262429845700483U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_14()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(13));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4496614848147264691U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2173485788855698525U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_14_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_14();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1992010632883833834U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_14_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_14();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5132360878563283664U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_15()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(14));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9599772945349518168U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(10371502594716545730U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_15_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_15();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(18229665410521841743U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_15_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_15();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11706914586427642396U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_16()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(15));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9691455001403954584U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2500362133307740772U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_16_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_16();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13216885154241855522U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_16_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_16();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8743771904414521004U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_17()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(16));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5696922271717336535U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(10731827900269172718U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_17_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_17();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11959247513016911531U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_17_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_17();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7920760105317275900U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_18()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(17));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6682595861190874767U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4754473219477553856U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_18_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_18();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14549156143052038813U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_18_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_18();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11864710543453480222U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_19()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(18));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2176032372517050009U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6637721728318695546U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_19_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_19();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1099451379673797340U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_19_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_19();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(17325010622083031003U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_20()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(19));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5553635169763969038U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1179338464324547562U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_20_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_20();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6211432679957131132U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_20_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_20();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6298905768413131272U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_21()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(20));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5427444025541827481U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3676578243172828014U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_21_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_21();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(500091037144637622U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_21_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_21();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6894720238432257386U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_22()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(21));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3861622855622403021U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3262781048117267602U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_22_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_22();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12137720617961685354U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_22_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_22();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16934801444259675912U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_23()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(22));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5876600746255166931U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(15956357944068520109U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_23_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_23();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8729293086305976840U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_23_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_23();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7210128690698489099U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_24()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(23));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4503987802894190061U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8717890758065715840U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_24_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_24();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6476210149586188417U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_24_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_24();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(273104586892945507U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_25()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(24));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7047820315219649763U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(292333441364627385U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_25_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_25();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9042697053156888419U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_25_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_25();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6679117941989494711U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_26()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(25));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6485566870746595604U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13378714559738811400U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_26_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_26();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(17055624032902201370U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_26_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_26();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6743541547177842530U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_27()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(26));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6678689043124066751U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5184673931777164435U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_27_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_27();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13896253651627196281U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_27_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_27();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(10246189970531016513U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_28()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(27));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3266901460520447183U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3884476053452038492U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_28_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_28();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7233855281497003366U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_28_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_28();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(18415132364304542187U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_29()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(28));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1124162813409994143U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16412710418393329009U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_29_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_29();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9175036719287652834U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_29_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_29();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(15898657091913835026U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_30()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(29));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2450430352670992459U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14291876125106135120U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_30_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_30();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2018450814610084115U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_30_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_30();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14157691756442052837U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_31()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(30));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6256678780442887728U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1396075830551401232U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_31_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_31();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(17006543885578011554U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_31_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_31();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2232365515201710370U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_32()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(31));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(963));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9716931207602102963U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(15191750781256359132U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_32_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_32();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(77));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14337733989556778516U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_4_32_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_4_32();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11797464421595080344U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8745408454181219496U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8745408454181219496U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(17171989284742472370U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16336879692101326291U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9251862423906532979U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5362850233993933243U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8004913923961420553U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12399376397155011702U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7573414246087863758U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4227754878475347073U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6919294221197746747U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5087244939113880903U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(915946366633844361U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5260429495676564128U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(18033569337506364338U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11077354116898387407U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4413473993583020952U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3443394759647621360U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13481053344484370588U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13222576383071921034U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(208030061646276123U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1290730014201525210U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11255895486760310906U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(15924530465002987891U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(15154185122327759083U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2350421644432520633U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8039587991407310576U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3953777487614756791U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(15107116836343393953U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6404821761387870545U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(17381987236443505739U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8632555026354205462U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6345414144679462859U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_9()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(8));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1499477692030006841U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7290515098778403981U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_9_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_9();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16742883763823911033U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_9_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_9();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16897533997753415852U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_10()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(9));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3907609395962729942U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(18225737647462512742U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_10_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_10();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3820654886760382336U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_10_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_10();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5959532027322553695U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_11()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(10));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6635833444265507178U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(15602279249023037907U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_11_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_11();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6532104861229764705U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_11_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_11();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11079097163272462555U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_12()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(11));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6061508870529919438U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(15954819867733775754U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_12_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_12();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3605395193127476586U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_12_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_12();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(10201306926304031180U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_13()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(12));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4009057769431922094U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2886356384613995216U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_13_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_13();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5023900118093166684U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_13_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_13();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1972190910296937129U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_14()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(13));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1905317408679226643U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(582139820916393510U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_14_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_14();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2196171993076876870U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_14_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_14();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(737266224372532015U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_15()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(14));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8714769225917132163U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9540748552127820825U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_15_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_15();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8676746791758983092U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_15_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_15();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6873646389487391247U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_16()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(15));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9503820395388931938U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(15223650805094968364U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_16_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_16();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11339429372010735019U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_16_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_16();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12054114249803650356U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_17()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(16));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3947492645773295733U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6975661528125954214U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_17_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_17();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12573256956915422038U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_17_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_17();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4948980615066232563U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_18()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(17));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8499507554749806482U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14651788168020524192U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_18_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_18();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9566596562949583730U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_18_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_18();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11631421336321443490U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_19()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(18));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1643220898485635597U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4298896929501548547U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_19_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_19();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8895995538766140795U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_19_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_19();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13671626360330703785U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_20()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(19));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8002259664637236101U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5736119797646552693U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_20_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_20();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14974791599129069250U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_20_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_20();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13843532795044900105U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_21()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(20));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7836591656718456066U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12022943830971734413U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_21_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_21();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(15464803778963377579U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_21_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_21();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8180935036544691802U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_22()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(21));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9126358650548662879U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(17302368603692437705U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_22_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_22();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6890991814610075223U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_22_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_22();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14039009699688453068U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_23()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(22));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2988716372134280318U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(17716265457822694714U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_23_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_23();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1924986091189091785U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_23_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_23();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3566457377175468610U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_24()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(23));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4678537563206635862U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14733699739589311871U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_24_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_24();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14299101612118807685U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_24_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_24();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2107782427278069954U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_25()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(24));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1709861666645055889U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8224044778785184642U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_25_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_25();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(15903383099808629798U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_25_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_25();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(17321971937961823920U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_26()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(25));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2505161215594592713U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13205163652466786507U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_26_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_26();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8390515650423562762U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_26_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_26();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1640421508195079338U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_27()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(26));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2809092952450316404U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11620254905143038382U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_27_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_27();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(15837621651259638882U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_27_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_27();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(18003518116283552115U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_28()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(27));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9474478748131646333U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5824200845374626190U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_28_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_28();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16906469200128072258U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_28_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_28();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14713102035649064956U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_29()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(28));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6476045911106391023U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7066535968742861585U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_29_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_29();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13282580035115437720U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_29_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_29();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9643537061282814229U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_30()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(29));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1471594340839154412U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9433606937041389951U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_30_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_30();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1632170347756869859U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_30_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_30();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14078952549128999134U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_31()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(30));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1156284245901310865U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(18329280945885404715U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_31_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_31();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1022351861701911650U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_31_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_31();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(18280919785828642271U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_32()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(31));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(528));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1131320578491870398U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7321190359991867498U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_32_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_32();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(64));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11649358092598998715U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_5_32_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_5_32();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(4));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(324902463303177662U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2654315310835699064U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2654315310835699064U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4091590245705803367U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_1_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(15486467636250009794U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_1_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_1();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3837149901698816848U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(1));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9087333915303366381U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4614404516743571937U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_2_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6607617384787061117U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_2_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_2();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11425726930305749773U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(2));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4705138367063419092U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12072069272788614716U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_3_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3844180943090170255U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_3_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_3();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(18089381813465483318U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_4()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(3));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8155543300563643229U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11774635273537626659U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_4_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(690938787935789067U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_4_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_4();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8415656626877219900U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_5()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(4));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7216843277404197302U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14792966392706819595U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_5_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(10468254500651253045U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_5_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_5();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8981089172050011373U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_6()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(5));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8695140651337706160U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(451190269557314743U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_6_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14372565978914286694U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_6_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8725362693605210686U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_7()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(6));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7058655842546534543U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(18106841722078380424U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_7_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(843763391908787618U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_7_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_7();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11579459132195455551U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_8()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(7));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9432042266180901536U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(594742038340526074U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_8_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14635634335149538102U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_8_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_8();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9612275075199728997U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_9()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(8));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1893488513164484558U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16130324366552329927U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_9_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_9();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9280938669118410867U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_9_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_9();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16520062316963868058U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_10()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(9));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5093387692312016985U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(15214530380094789869U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_10_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_10();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11976682126746419110U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_10_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_10();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3622896063097988347U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_11()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(10));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6562839534884250809U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(17064784720954389463U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_11_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_11();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(10099211724258562576U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_11_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_11();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7526937276254098457U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_12()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(11));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7431742497117619039U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(18389382674382434700U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_12_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_12();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16927833197197081226U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_12_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_12();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5320890878619788512U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_13()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(12));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6364275455151263095U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9984801268588027450U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_13_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_13();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12765552882952475971U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_13_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_13();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9224286412190232977U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_14()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(13));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2331250433673099980U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6072694973818956991U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_14_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_14();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13255576733578874023U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_14_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_14();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3308405835103728544U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_15()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(14));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1226806791849595178U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9449829388442841831U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_15_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_15();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14437994516271918037U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_15_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_15();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(17234043311549118349U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_16()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(15));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7143843845523125266U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5164677445685903529U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_16_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_16();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2414091308142083771U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_16_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_16();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9459668822454634628U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_17()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(16));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8642234340600207352U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7575607779924191837U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_17_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_17();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(18297418214675523907U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_17_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_17();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12257051986448364317U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_18()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(17));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1592805764859437153U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16697247710465745425U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_18_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_18();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2512574204263048977U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_18_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_18();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1869113252985744046U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_19()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(18));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2460201324557611531U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(10690032189954873887U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_19_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_19();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(10289432594229651805U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_19_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_19();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3222728374915155436U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_20()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(19));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3315223179619530114U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16835377868517457848U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_20_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_20();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(15731618112508016050U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_20_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_20();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16285549519924679750U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_21()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(20));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9687014435748264530U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5136695845434918446U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_21_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_21();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13140070242725543053U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_21_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_21();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8143215660984507913U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_22()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(21));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(846381128903314583U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(17289689845042912337U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_22_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_22();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9407795315030534111U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_22_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_22();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13752535102937042331U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_23()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(22));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4743474690328143003U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14598951557512690388U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_23_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_23();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8952416434000626807U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_23_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_23();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6001824630477785846U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_24()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(23));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2174312378176031181U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(18076152008279093437U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_24_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_24();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(15999165393162723434U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_24_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_24();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12553619479561062348U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_25()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(24));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8556723628810045891U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(16816553429465132280U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_25_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_25();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5061694312805401211U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_25_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_25();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13688364915802130854U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_26()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(25));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(7216450558355390583U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6880054850172355262U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_26_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_26();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8031760242348769844U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_26_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_26();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6500400033562357413U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_27()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(26));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6218092269903566002U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(8048421961416352153U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_27_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_27();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3577071737753830314U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_27_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_27();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(5824746844344347339U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_28()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(27));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1453513085540184860U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12950428044085613363U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_28_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_28();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(479279317676344021U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_28_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_28();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13291818713379981813U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_29()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(28));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6208993324490229027U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(1246829864396430160U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_29_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_29();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(14349208232665554829U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_29_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_29();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(3781721558917931536U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_30()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(29));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(9201405717470461749U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(11485481162035649950U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_30_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_30();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12202594882003046085U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_30_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_30();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(13964200825306960162U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_31()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(30));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(4551720539470157951U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(17903142419476237452U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_31_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_31();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(12265735324505624691U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_31_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_31();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2744822820732830251U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_32()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<fmwkng::impl::parallel_tag,fmwkng::impl::element_sense::OPEN>>(31));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(fmwkng::logarithmic(1024,262144,16)));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(202));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(2293570226223573391U));
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
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(6559936110071942554U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_32_2()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_32();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(16384,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(48));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(15769169959820993435U));
        return rv;
    }
    static fmwkng::gold_pair gr_1_1_1_6_32_3()
    {
        fmwkng::gold_pair rv;
        rv.key = gp_1_1_1_6_32();
        rv.key.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::osize,fmwkng::impl::element_sense::OPEN>>(std::make_pair(262144,fmwkng::logarithmic(1024,262144,16))));
        rv.key.push_back(std::make_unique<fmwkng::impl::config_element<bsearchmain::repeats,fmwkng::impl::element_sense::OPEN>>(3));
        rv.value.push_back(std::make_unique<fmwkng::impl::element_t<bsearchmain::chksum,fmwkng::impl::element_sense::CLOSE>>(851536143823612237U));
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
