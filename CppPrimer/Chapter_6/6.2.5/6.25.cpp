#include <iostream>
#include <string>
#include <cstring>

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		std::cerr << "Please provide two command line arguments." << std::endl;
		return -1;
	}

	std::string concatenationResult = std::strcat(argv[1], argv[2]);
	std::cout << concatenationResult << std::endl;

	return 0;
}
