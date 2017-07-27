#include <iostream>
#include <stdexcept>

int main()
{
	int firstNumber = 0;
	int secondNumber = 1;

	std::cout << "Enter two numbers: " << std::endl;
	std::cin >> firstNumber >> secondNumber;

	if (secondNumber == 0)
	{
		throw std::invalid_argument("Can't divide by 0.");
	}
	else
	{
		std::cout << "The result of the division is: " << firstNumber / secondNumber
			<< std::endl;
	}

	return 0;
}
