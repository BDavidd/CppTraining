#include "6.19.hpp"
#include <string>
#include <vector>
#include <iostream>

int main()
{
	std::vector<int> vec(10);
	double doubleRet{};
	int intRet{};

	// calc only accepts one argument.
	doubleRet = calc(23.4/*, 55.1*/);
	std::cout << "calc(23.4) = " << doubleRet << std::endl;
	
	// Ok. count has a const reference parameter.
	intRet = count("abcda", 'a');
	std::cout << "count(\"abcda\", 'a') = " << intRet << std::endl;

	// Ok. Implicit conversion from int to double.
	doubleRet = calc(66);
	std::cout << "calc(66) = " << doubleRet << std::endl;

	// Ok. Implicit conversion from double to int.
	intRet = sum(vec.begin(), vec.end(), 3.8);
	std::cout << "sum(vec.begin(), vec.end(), 3.8) = " << intRet << std::endl;

	return 0;
}

double calc(double value)
{
	return value * 2;
}

int count(const std::string &str, char searched)
{
	int counter = 0;
	for (std::string::size_type i = 0; i < str.size(); ++i)
	{
		auto n = str.find_first_of(searched, i);
		if (n != std::string::npos)
		{
			i = n;
			++counter;
		}
		else
		{
			break;
		}
	}

	return counter;
}

int sum(std::vector<int>::iterator begin, std::vector<int>::iterator end, int startVal)
{
	int sum = startVal;
	for (auto it = begin; it != end; ++it)
	{
		sum += *it;
	}

	return sum;
}
