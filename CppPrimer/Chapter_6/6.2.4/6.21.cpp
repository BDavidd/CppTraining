#include <iostream>

int compareInt(int value, const int *ptr);

int main()
{
	int val1{};
	int val2{};
	std::cout << "Enter two numbers: ";
	std::cin >> val1 >> val2;

	std::cout << compareInt(val1, &val2) << " is greater." << std::endl;

	return 0;
}

int compareInt(int value, const int *ptr)
{
	return (value > *ptr) ? value : *ptr;
}
