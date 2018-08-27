#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE NamesScoreTests
#include <boost/test/unit_test.hpp>

#include "NamesScore.h"


BOOST_AUTO_TEST_SUITE(test_suite)

BOOST_AUTO_TEST_CASE(PassTest)
{
    NamesScore game;
//    game.readFile("../name.txt");

// calculate(nameOfFile) == SUMA
    BOOST_CHECK_EQUAL(5, game.calculateTotalScore("res/names.txt"));
//    BOOST_CHECK(1 < 2);
}

BOOST_AUTO_TEST_SUITE_END()
//BOOST_AUTO_TEST_CASE(PassTest)
//{
//    //BOOST_CHECK_EQUAL(4, sqr(2));
//}
