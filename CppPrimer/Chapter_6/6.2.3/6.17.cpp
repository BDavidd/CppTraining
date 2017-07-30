#include "6.17.hpp"
#include <cctype>
#include <string>
#include <iostream>

int main()
{
	std::string input;
	std::cout << "Enter a word: ";
	std::cin >> input;

	if (hasUppercase(input))
	{
		makeLowercase(input);
		std::cout << "The word made lowercase: " << input << std::endl;
	}
	else
	{
		std::cout << "Your word is lowercase." << std::endl;
	}

	return 0;
}

bool hasUppercase(const std::string &value)
{
	for (const auto c : value)
	{
		if (std::isupper(c))
		{
			return true;
		}
	}
	return false;
}

void makeLowercase(std::string &value)
{
	for (auto &c : value)
	{
		c = std::tolower(c);
	}
}
