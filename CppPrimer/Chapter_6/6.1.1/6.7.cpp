#include <iostream>

int incrementNumber();

int main()
{
	for (int i = 0; i < 10; ++i)
	{
		std::cout << incrementNumber() << ' ';
	}
	std::cout << std::endl;

	return 0;
}

int incrementNumber()
{
	static int number = 0;
	return number++;
}
