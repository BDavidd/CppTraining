#include <iostream>
#include <stdexcept>

int getInput();

int main()
{
	bool tryAgain = false;

	do
	{
		int result = 0;

		try
		{
			result = getInput();
		}
		catch (std::invalid_argument except)
		{
			std::cout << except.what() << std::endl;
			std::cout << "Do you want to try again? [Y/N]" << std::endl;

			char input = '\0';
			std::cin >> input;

			if (input == 'Y' || input == 'y')
			{
				tryAgain = true;
			}

			// Skip displaying the result if the exception occurred.
			// If the user chose to, the loop runs again.
			continue;
		}

		std::cout << "The result of the division is: " << result << std::endl;
		tryAgain = false;

	} while (tryAgain);

	return 0;
}

int getInput()
{
	int firstNumber = 0;
	int secondNumber = 1; // Default value different from 0.

	std::cout << "Enter two numbers: " << std::endl;
	std::cin >> firstNumber >> secondNumber;

	if (secondNumber == 0)
	{
		throw std::invalid_argument("Can't divide by 0.");
	}
	
	return firstNumber / secondNumber;
}
