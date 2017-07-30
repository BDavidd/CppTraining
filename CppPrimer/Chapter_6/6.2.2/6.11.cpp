#include <iostream>

void resetInt(int &value);

int main()
{
	int input = 0;
	std::cout << "Enter a number: ";
	std::cin >> input;

	resetInt(input);
	std::cout << "The value was reset to: " << input << std::endl;

	return 0;
}

void resetInt(int &value)
{
	std::cout << "Resetting..." << std::endl;
	value = 0;
}
