#include <iostream>

void readUsingJump();
void readUsingLoop();

int main()
{
	char input('\0');
	std::cout << "Do you want to use a jump or a loop? [J/L]" << std::endl;
	std::cin >> input;
	
	if (input == 'J' || input == 'j')
	{
		readUsingJump();
	}
	else if (input == 'L' || input == 'l')
	{
		readUsingLoop();
	}
	else
	{
		std::cerr << "Invalid input." << std::endl;
	}

	return 0;
}

void readUsingJump()
{
read:
	int x = 0;
	std::cout << "Enter a number: ";
	std::cin >> x;
	if (x <= 0)
	{
		goto read;
	}
}

void readUsingLoop()
{
	int x = 0;
	do
	{
		std::cout << "Enter a number: ";
		std::cin >> x;
	} while (x <= 0);
}
