#include <iostream>
#include <vector>
#include <string>
#include <cctype>

int main(int argc, char *argv[])
{
    std::vector<std::string> readValues;
    std::string input;

    std::cout << "Enter some strings: " << std::endl;
    while (std::cin >> input)
    {
        readValues.push_back(input);
    }

    if (readValues.empty())
    {
        std::cerr << "You must enter at least one string!" << std::endl;
        return -1;
    }

    for (auto str : readValues)
    {
        for (auto &ch : str)
        {
            ch = std::toupper(ch);
        }
    }

    unsigned short index = 0;
    std::cout << "The read values: " << std::endl;
    for (const auto str : readValues)
    {
        ++index;
        std::cout << str << ' ';

        if (index % 8 == 0)
        {
            std::cout << std::endl;
            index = 0;
        }
    }
    std::cout << std::endl;

    return 0;
}
