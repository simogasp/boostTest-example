#define BOOST_TEST_MODULE testComputing

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

#include <library/computing/multiplication.hpp>


bool checkMessage(const std::domain_error& e, const std::string &msg)
{
    return std::string(e.what()) == msg;
};

bool throwingThrowed(const std::domain_error& e)
{
    return checkMessage(e, "Error! You should not call this function");
}

BOOST_AUTO_TEST_SUITE( test_multiply )

    BOOST_AUTO_TEST_CASE( test_int )
    {
        BOOST_CHECK( multiply(4, 5) == 20);
    }

    BOOST_AUTO_TEST_CASE( test_float )
    {
        BOOST_CHECK( multiply(4.5f, 5.5f) == 24.75);
    }

BOOST_AUTO_TEST_SUITE_END()

BOOST_AUTO_TEST_SUITE( test_computeInterest )

    BOOST_AUTO_TEST_CASE( test_simple )
    {
        BOOST_CHECK_CLOSE_FRACTION(computeInterest(154.5, 1.15), 177.675, 0.01);
    }

BOOST_AUTO_TEST_SUITE_END()

BOOST_AUTO_TEST_SUITE( test_throwing )

    BOOST_AUTO_TEST_CASE( test_simpleCall )
    {

        BOOST_REQUIRE_EXCEPTION(throwingFunction(), std::domain_error, throwingThrowed);
    }

BOOST_AUTO_TEST_SUITE_END()