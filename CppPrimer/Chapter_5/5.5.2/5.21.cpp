#include <iostream>
#include <string>
#include <cctype>

int main()
{
	std::string previousWord;
	std::string currentWord;
	bool isWordRepeated = false;

	std::cout << "Enter some words: " << std::endl;
	while (std::cin >> currentWord)
	{
		if (!std::isupper(currentWord[0]))
		{
			continue;
		}

		if (currentWord == previousWord)
		{
			isWordRepeated = true;
			break;
		}
		else
		{
			previousWord = currentWord;
		}
	}

	if (isWordRepeated)
	{
		std::cout << currentWord << " was repeated." << std::endl;
	}
	else
	{
		std::cout << "No word was repeated" << std::endl;
	}

	return 0;
}
