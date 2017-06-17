#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char *argv[])
{
    std::string readValue;

    std::cout << "Enter a string: ";
    std::getline(std::cin, readValue);

    std::string noPunctuation;

    for (auto ch : readValue)
    {
        if (!std::ispunct(ch))
        {
            noPunctuation += ch;
        }
    }

    std::cout << "The string without punctuation: " << noPunctuation << std::endl;

    return 0;
}
