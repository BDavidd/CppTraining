#include <string>
#include <iostream>

// The parameter should be a const reference.
bool is_empty(const std::string &s);

int main()
{
	std::cout << is_empty("test") << std::endl;

	const std::string testString;
	std::cout << is_empty(testString) << std::endl;

	return 0;
}

bool is_empty(const std::string &s)
{
	return s.empty();
}
