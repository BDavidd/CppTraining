#include <iostream>

int main(int argc, char *argv[])
{
	// i starts from 1 to avoid printing the program name.
	for (int i = 1; i < argc; ++i)
	{
		std::cout << argv[i] << ' ';
	}
	std::cout << std::endl;

	return 0;
}
