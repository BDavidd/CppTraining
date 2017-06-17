#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    std::vector<int> readValues;
    int input = 0;

    std::cout << "Enter some numbers: ";
    while (std::cin >> input)
    {
        readValues.push_back(input);
    }

    std::cout << "The values entered: ";
    for (const auto i : readValues)
    {
        std::cout << i << ' ';
    }
    std::cout << std::endl;

    return 0;
}
