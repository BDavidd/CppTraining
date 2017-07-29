#include "factorial.hpp"
#include <stdexcept>

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
