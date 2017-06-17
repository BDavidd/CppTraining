#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    std::string readValue;

    std::cout << "Enter a string: ";
    std::cin >> readValue;

    for (auto &ch : readValue)
    {
        ch = 'X';
    }

    std:: cout << "The result: " << readValue << std::endl;

    return 0;
}
