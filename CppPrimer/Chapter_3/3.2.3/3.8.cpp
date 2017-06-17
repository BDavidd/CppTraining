#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    std::string readValue;

    std::cout << "Enter a string: ";
    std::cin >> readValue;

    std::string::size_type index = 0;

    while (index < readValue.size())
    {
        readValue[index++] = 'X';
    }
    std::cout << "The result using a while loop: " << readValue << std::endl;

    for (index = 0; index < readValue.size(); ++index)
    {
        readValue[index] = 'x';
    }
    std::cout << "The result using a for loop: " << readValue << std::endl;

    return 0;
}
