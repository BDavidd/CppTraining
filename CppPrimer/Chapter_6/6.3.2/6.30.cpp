#include <string>
#include <iostream>

bool str_subrange(const std::string &str1, const std::string &str2);

int main()
{
	std::string str1;
	std::string str2;
	std::cout << "Enter two strings: ";
	std::cin >> str1 >> str2;

	std::cout << (str_subrange(str1, str2) ? "true" : "false") << std::endl;

	return 0;
}

bool str_subrange(const std::string &str1, const std::string &str2)
{
	if (str1.size() == str2.size())
	{
		return str1 == str2;
	}

	auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();

	for (decltype(size) i = 0; i != size; ++i)
	{
		if (str1[i] != str2[i])
		{
			// A bool value must be returned
			return false;
		}
	}

	// All control paths must have a return value.
	return true;
}