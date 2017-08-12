#include <iostream>

int main()
{
    int i = 0;

    // The prefix increases the operand and returns it, having the new value.
    std::cout << "++i: " << ++i << std::endl;
    std::cout << "i: " << i << std::endl;

    int j = 0;

    // The postfix returns a copy of the operand having the old value,
    // then increments it.
    std::cout << "j++: " << j++ << std::endl;
    std::cout << "j: " << j << std::endl;

    return 0;
}
