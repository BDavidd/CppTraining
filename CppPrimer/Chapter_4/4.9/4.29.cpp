#include <iostream>

int main(int argc, char *argv[])
{
    int x[10]{};
    int *p = x;

    // The number of elements of x, 10.
    // x has a size of 10 ints. 
    // The result of dividing it by the size of an int is its size.
    std::cout << sizeof(x) / sizeof(*x) << std::endl;

    // My current system has 64 bit memory addresses.
    // A pointer has a size of 64 bits (a memory address), an int has a size
    // of 32 bits, so the result is 2.
    std::cout << sizeof(p) / sizeof(*p) << std::endl;

    return 0;
}