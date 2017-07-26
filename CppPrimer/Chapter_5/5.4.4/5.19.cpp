#include <iostream>
#include <string>

using std::string;

int main()
{
	char userResponse;

	do
	{
		string firstString;
		string secondString;

		std::cout << "Enter a string: ";
		std::cin >> firstString;

		std::cout << "Enter another string: ";
		std::cin >> secondString;

		if (firstString == secondString)
		{
			std::cout << "The two string are equal" << std::endl;
		}
		else
		{
			std::cout << ((firstString < secondString) ? firstString : secondString) << " is less."
				      << std::endl;
		}
		
		std::cout << "Do you want to run this test again? [Y/N]" << std::endl;
		std::cin >> userResponse;
	} while (userResponse == 'y' || userResponse == 'Y');
	
	return 0;
}
