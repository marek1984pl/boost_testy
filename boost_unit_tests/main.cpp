// boost_unit_tests.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "testowany program.h"
#include <iostream>

int main()
{
	try
	{
		podziel(5.0, 0.0);
	}
	catch (std::logic_error e)
	{
		std::cout << e.what() << std::endl;
	}
	system("pause");
	return 0;
}