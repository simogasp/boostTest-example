#define BOOST_TEST_MODULE testGreetings

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

#include <library/greetings/goodbye.hpp>

BOOST_AUTO_TEST_SUITE( test_goodbye )

    BOOST_AUTO_TEST_CASE( test_case1 )
    {
        goodbye("Test1");
    }

    BOOST_AUTO_TEST_CASE( test_case2 )
    {
        goodbye("Test2");
    }

BOOST_AUTO_TEST_SUITE_END()

BOOST_AUTO_TEST_SUITE( test_goodbyeWorld )

    BOOST_AUTO_TEST_CASE( test_case )
    {
        goodbyeWorld();
    }

BOOST_AUTO_TEST_SUITE_END()

