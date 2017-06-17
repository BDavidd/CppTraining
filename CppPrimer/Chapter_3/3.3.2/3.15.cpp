#include <iostream>
#include <vector>
#include <string>

int main(int argc, char *argv[])
{
    std::vector<std::string> readValues;
    std::string input;

    std::cout << "Enter some strings: ";
    while (std::cin >> input)
    {
        readValues.push_back(input);
    }

    std::cout << "The values entered: ";
    for (const auto &i : readValues)
    {
        std::cout << i << ' ';
    }
    std::cout << std::endl;

    return 0;
}
