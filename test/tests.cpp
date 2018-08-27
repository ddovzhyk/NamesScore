#define BOOST_TEST_MODULE NamesScoreTests
#include <boost/test/unit_test.hpp>

#include "NamesScore.h"

BOOST_AUTO_TEST_SUITE(test_suite)

BOOST_AUTO_TEST_CASE(FalseTest)
{
    NamesScore obj;

    BOOST_TEST_MESSAGE(".::FalseTestCase::. If you see error message below, then test passed.");
    BOOST_CHECK(!obj.readFile("aaa/bbbb/abcdefgh"));

}

BOOST_AUTO_TEST_CASE(Test1Name)
{
    NamesScore obj;

    BOOST_TEST_MESSAGE(".::1NameCase::. Test computing score for COLIN name.");
    BOOST_CHECK(obj.readFile("res/1Name.txt"));
    BOOST_CHECK_EQUAL(53, obj.calculateTotalScore());
}

BOOST_AUTO_TEST_CASE(Test10Names)
{
    NamesScore obj;

    BOOST_TEST_MESSAGE(".::10NamesCase::. Test computing score for 10 name.");
    BOOST_CHECK(obj.readFile("res/10Names.txt"));
    BOOST_CHECK_EQUAL(3722, obj.calculateTotalScore());
}

BOOST_AUTO_TEST_CASE(Test5163Names)
{
    NamesScore obj;

    BOOST_TEST_MESSAGE(".::5163NamesCase::. Test computing score for 5163 name.");
    BOOST_CHECK(obj.readFile("res/5163Names.txt"));
    BOOST_CHECK_EQUAL(871198282, obj.calculateTotalScore());
}

BOOST_AUTO_TEST_SUITE_END()
