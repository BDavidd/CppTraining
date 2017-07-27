#include <iostream>

int main()
{
	int firstNumber = 0;
	int secondNumber = 1;

	std::cout << "Enter two numbers: " << std::endl;
	std::cin >> firstNumber >> secondNumber;

	std::cout << "The result of the division is: " << firstNumber / secondNumber
		      << std::endl;

	return 0;
}
