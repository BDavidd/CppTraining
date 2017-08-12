#include <utility>
#include <iostream>

void swapValues(int *ptr1, int *ptr2);

int main()
{
	int val1{};
	int val2{};
	std::cout << "Enter two numbers: ";
	std::cin >> val1 >> val2;

	swapValues(&val1, &val2);

	std::cout << "The numbers are now: " << val1 << ", " << val2 << std::endl;
	return 0;
}

void swapValues(int *ptr1, int *ptr2)
{
	std::swap(*ptr1, *ptr2);
}
