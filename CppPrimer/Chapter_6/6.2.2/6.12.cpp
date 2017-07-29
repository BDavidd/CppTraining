#include <iostream>
#include <utility>

void swapInt(int &value1, int &value2);

int main()
{
	int value1 = 0;
	int value2 = 0;
	std::cout << "Enter two numbers: " << std::endl;
	std::cin >> value1 >> value2;

	swapInt(value1, value2);

	std::cout << "The numbers, in order: " << value1 << ", " << value2 << std::endl;
	return 0;
}

void swapInt(int &value1, int &value2)
{
	std::swap(value1, value2);
}
