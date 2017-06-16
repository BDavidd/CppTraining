#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    std::string firstString;
    std::string secondString;

    std::cout << "Enter a string: ";
    std::getline(std::cin, firstString);

    std::cout << "Enter another string: ";
    std::getline(std::cin, secondString);

    if (firstString == secondString)
    {
        std::cout << "The strings are equal." << std::endl;
    }
    else
    {
        if (firstString > secondString)
        {
            std::cout << firstString << " is larger." << std::endl;
        }
        else
        {
            std::cout << secondString << " is larger" << std::endl;
        }
    }

    if (firstString.length() == secondString.length())
    {
        std::cout << "The strings have the same length." << std::endl;
    }
    else
    {
        if (firstString.length() > secondString.length())
        {
            std::cout << firstString << " is longer." << std::endl;
        }
        else
        {
            std::cout << secondString << " is longer" << std::endl;
        }
    }

    return 0;
}
