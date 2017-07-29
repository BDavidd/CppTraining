#include "swapInt.hpp"
#include <iostream>
#include <sstream>

int main(int argc, char *argv[])
{
	int value1 = 0;
	int value2 = 0;

	if (argc < 3)
	{
		std::cout << "Enter two numbers: " << std::endl;
		if (!(std::cin >> value1))
		{
			std::cerr << "Invalid argument." << std::endl;
			return -1;
		}
		if (!(std::cin >> value2))
		{
			std::cerr << "Invalid argument." << std::endl;
			return -1;
		}
	}
	else
	{
		std::istringstream stream(argv[1]);
		if (!(stream >> value1))
		{
			std::cerr << "Invalid argument." << std::endl;
			return -1;
		}

		stream.clear();      // Clear eof flag.
		stream.str(argv[2]);
		if (!(stream >> value2))
		{
			std::cerr << "Invalid argument." << std::endl;
			return -1;
		}
	}

	swapInt(&value1, &value2);

	std::cout << "The numbers, in order: " << value1 << ", " << value2 << std::endl;
	return 0;
}
