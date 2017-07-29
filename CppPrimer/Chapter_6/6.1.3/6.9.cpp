#include "factorial.hpp"
#include <iostream>
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