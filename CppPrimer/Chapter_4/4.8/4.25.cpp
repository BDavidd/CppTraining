#include <iostream>

int main(int argc, char* argv[])
{
    // q = 01110001
    // q is promoted to an int when applying the bitwise not
    // ~q = 111111111111111110001110
    // ~'q' << 6 = 11111111111111111110001110000000
    unsigned result = ~'q' << 6;

    std::cout << "~'q' << 6 = " << result << std::endl; 

    return 0;
}
