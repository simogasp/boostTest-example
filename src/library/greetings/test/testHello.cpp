#define BOOST_TEST_MODULE testGreetings

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

#include <library/greetings/hello.h>

BOOST_AUTO_TEST_SUITE( test_suite1 )

    BOOST_AUTO_TEST_CASE( test_case1 )
    {
        hello("Test1");
    }

    BOOST_AUTO_TEST_CASE( test_case2 )
    {
        hello("Test2");
    }

BOOST_AUTO_TEST_SUITE_END()

BOOST_AUTO_TEST_SUITE( test_suite2 )

    BOOST_AUTO_TEST_CASE( test_case3 )
    {
        helloWorld();
    }

BOOST_AUTO_TEST_SUITE_END()