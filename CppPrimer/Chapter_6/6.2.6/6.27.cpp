#include <initializer_list>
#include <iostream>

int addInt(std::initializer_list<int> elements);

int main()
{
	std::cout << addInt({ 1, 2, 3, 4, 5, 6 }) << std::endl;
	return 0;
}

int addInt(std::initializer_list<int> elements)
{
	int sum = 0;

	for (const auto number : elements)
	{
		sum += number;
	}

	return sum;
}
