#include <iostream>

int main()
{
    std::cout << "Enter some integers: " << std::endl;

    int input = 0;
    while (std::cin >> input && input != 42)
    {
        std::cout << "You entered: " << input << std::endl;
    }

    std::cout << "Exiting." << std::endl;

    return 0;
}
