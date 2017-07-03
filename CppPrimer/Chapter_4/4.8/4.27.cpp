#include <iostream>

int main(int argc, char *argv[])
{
    // 00000011
    unsigned long ul1 = 3;

    // 00000111
    unsigned long ul2 = 7;

    // 00000011 = 3
    unsigned long result = ul1 & ul2;
    std::cout << "ul1 & ul2 = " << result << std::endl;
    
    // 00000111 = 7
    result = ul1 | ul2;
    std::cout << "ul1 | ul2 = " << result << std::endl;

    // Logical and. Both numbers are != 0 so the result is 1.
    result = ul1 && ul2;
    std::cout << "ul1 && ul2 = " << result << std::endl;

    // Logical or. At least 1 number is != 0 so the result is 1.
    result = ul1 || ul2;
    std::cout << "ul1 || ul2 = " << result << std::endl;

    return 0;
}
