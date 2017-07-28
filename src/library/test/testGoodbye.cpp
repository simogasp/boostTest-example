#define BOOST_TEST_MODULE libraryTest

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

#include <library/goodbye.hpp>

BOOST_AUTO_TEST_SUITE( test_suite1 )

    BOOST_AUTO_TEST_CASE( test_case1 )
    {
        goodbye("Test1");
    }

    BOOST_AUTO_TEST_CASE( test_case2 )
    {
        goodbye("Test2");
    }

BOOST_AUTO_TEST_SUITE_END()

BOOST_AUTO_TEST_SUITE( test_suite2 )

    BOOST_AUTO_TEST_CASE( test_case3 )
    {
        goodbyeWorld();
    }

BOOST_AUTO_TEST_SUITE_END()

