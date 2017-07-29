#include "6.4.hpp"
#include <iostream>

int main()
{
	computeFactorial();
	return 0;
}

void computeFactorial()
{
	int value = 0;
	std::cout << "Enter a value between 1 and 20: ";
	std::cin >> value;

	// long long overflows when computing the factorial of numbers greater than 20.
	if (value < 1 || value > 20)
	{
		std::cout << "The value entered is invalid!" << std::endl;
		return;
	}

	long long factorial = 1;

	// There's no need to multiply by 1, so i starts at 2.
	for (int i = 2; i <= value; ++i)
	{
		factorial *= i;
	}

	std::cout << "The factorial is: " << factorial << std::endl;
}
