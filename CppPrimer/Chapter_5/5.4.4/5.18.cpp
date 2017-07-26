#include <iostream>

int main()
{
	// The curly braces were missing.
	do
	{
		int v1{ 0 };
		int v2{ 0 };
		std::cout << "Please enter two numbers to sum: ";
		if (std::cin >> v1 >> v2)
		{
			std::cout << "The sum is: " << v1 + v2 << std::endl;
		}
	} while (std::cin);

	// Variable definitions are not allowed inside the condition of a 
	// do-while loop.
	//do
	//{
	//	// ...
	//} while (int ival = get_response());

	// The variables defined in the do-while scope are not visible in the
	// while condition.
	int ival{ 5 };
	do
	{
		std::cout << --ival << ' ';
	} while (ival);
	std::cout << std::endl;

	return 0;
}
