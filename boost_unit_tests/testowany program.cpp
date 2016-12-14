// boost_unit_tests.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "testowany program.h"
#include <iostream>

int dodaj(int a, int b)
{
	return a + b;
}

double dodaj(double a, double b)
{
	return a + b;
}

double podziel(double a, double b)
{
	std::logic_error err("Dzielenie przez 0");
	if (b == 0)
		throw err;
	return a / b;
}

int odejmij(int a, int b)
{
	return a - b;
}