// SomeConsoleApplication.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	std::cout << "Hello, world... ! Changes have added...\n";
	for (size_t i = 0; i < 10; i++)
	{
		std::cout << " " << i;
	}
	std::cout << "\n";
    return 0;
}

