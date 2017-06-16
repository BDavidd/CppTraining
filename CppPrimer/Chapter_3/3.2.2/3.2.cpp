#include <iostream>
#include <string>
#include <limits>

int main(int argc, char *argv[])
{
    std::string wordFlag;

    std::cout << "Do you want to read a word at a time? [Y/N]" << std::endl;
    std::cin >> wordFlag;

    // Flush the buffer in case the user enters "yes" / "no"
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::string readString;

    if (wordFlag.front() == 'y' || wordFlag.front() == 'Y')
    {
        std::cout << "Write something: ";
        std::cin >> readString;
        std::cout << "You entered: " << readString << std::endl;
    }
    else if (wordFlag.front() == 'n' || wordFlag.front() == 'N')
    {
        std::cout << "Write something: ";
        std::getline(std::cin, readString);
        std::cout << "You entered: " << readString << std::endl;
    }
    else
    {
        std::cerr << "Only [Y/N] values are accepted!" << std::endl;
        return -1;
    }

    return 0;
}
