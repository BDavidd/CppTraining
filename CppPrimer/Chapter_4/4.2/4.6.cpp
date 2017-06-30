#include <iostream>

int main(int argc, char *argv[])
{
    int intVal = 0;
    
    std::cout << "Enter an integer: ";
    std::cin >> intVal;

    if (intVal % 2 == 0)
    {
        std::cout << "The number is even." << std::endl;
    }
    else
    {
        std::cout << "The number is odd." << std::endl;
    }

    return 0;
}
