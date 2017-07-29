#include "6.3.hpp"
#include <iostream>
#include <stdexcept>
#include <sstream>

int main(int argc, char *argv[])
{
	int value = 0;

	if (argc <= 1)
	{
		std::cout << "Enter a value between 1 and 16: ";
		std::cin >> value;
	}
	else
	{
		std::istringstream stream(argv[1]);
		stream >> value;
	}

	int factorial = 0;
	try
	{
		factorial = computeFactorial(value);
	}
	catch (std::invalid_argument exception)
	{
		std::cout << exception.what() << std::endl;
		return -1;
	}

	std::cout << "The factorial is: " << factorial << std::endl;

	return 0;
}

int computeFactorial(int value)
{
	// int overflows when computing a factorial greater than 12.
	if (value < 1 || value > 12)
	{
		throw (std::invalid_argument("Invalid argument received"));
	}

	int factorial = 1;

	// There's no need to multiply by 1, so i starts at 2.
	for (int i = 2; i <= value; ++i)
	{
		factorial *= i;
	}

	return factorial;
}
