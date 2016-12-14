// Unit_test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <boost/test/unit_test.hpp>
#include "../boost_unit_tests/testowany program.h"

BOOST_AUTO_TEST_SUITE(Dodawanie_TESTY)
BOOST_AUTO_TEST_CASE(TestDodawania)
{
	BOOST_CHECK_EQUAL(dodaj(2, 2), 4);
	BOOST_CHECK_EQUAL(dodaj(0, 2), 2);
	BOOST_CHECK_EQUAL(dodaj(-2, 2), 0);
	BOOST_CHECK_EQUAL(dodaj(-2.0, 2.0), 0.0);
	BOOST_CHECK_EQUAL(dodaj(static_cast<int>(-2.0), static_cast<int>(-2.0)), static_cast<int>(-4.0));
}
BOOST_AUTO_TEST_SUITE_END()

BOOST_AUTO_TEST_CASE(TestDzielenia)
{
	BOOST_CHECK_THROW(podziel(5, 0), std::logic_error);
}

BOOST_AUTO_TEST_CASE(DifferentTest)
{
	BOOST_CHECK_EQUAL(dodaj(3.3, 3.3), 6.6);
	BOOST_CHECK_EQUAL(podziel(6.6, 2), 3.3);
	BOOST_CHECK_EQUAL(podziel(10, 3), 10.0 / 3.0);
}