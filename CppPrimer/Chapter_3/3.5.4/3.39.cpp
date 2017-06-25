#include <iostream>
#include <cstring>
#include <string>

int main(int argc, char *argv[])
{
    std::string firstString;
    std::string secondString;

    std::cout << "Enter a string: ";
    std::cin >> firstString;

    std::cout << "Enter another string: ";
    std::cin >> secondString;

    if (firstString == secondString)
    {
        std::cout << "The strings are equal!" << std::endl;
    }
    else if (firstString < secondString)
    {
        std::cout << "The first string is smaller!" << std::endl;
    }
    else
    {
        std::cout << "The first string is larger!" << std::endl;
    }

    // Adding 1 to the size of the string because the c_str() method adds a terminating null.
    char firstCarray[firstString.size() + 1]; 
    std::strcpy(firstCarray, firstString.c_str());

    char secondCarray[secondString.size() + 1];
    std::strcpy(secondCarray, secondString.c_str());

    auto cmpResult = std::strcmp(firstCarray, secondCarray);

    if (cmpResult == 0)
    {
        std::cout << "The C strings are equal!" << std::endl;
    }
    else if (cmpResult < 0)
    {
        std::cout << "The first C string is smaller!" << std::endl;
    }
    else
    {
        std::cout << "The first C string is larger!" << std::endl;
    }

    return 0;
}
