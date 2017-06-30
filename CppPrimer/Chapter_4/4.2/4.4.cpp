#include <iostream>

int main(int argc, char *argv[])
{
    // The result is 91. 24 % 4 is evaluated before the division. 
    std::cout << 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 << std::endl;

    return 0;
}
