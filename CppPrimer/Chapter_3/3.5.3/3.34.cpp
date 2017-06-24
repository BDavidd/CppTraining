#include <iostream>
#include <iterator>

int main(int argc, char *argv[])
{
    int intArr[] = {0, 1, 2, 3, 4, 5};
    int *p1 = std::begin(intArr);
    int *p2 = p1 + 3;

    std::cout << "*p1: " << *p1 << std::endl;
    std::cout << "*p2: " << *p2 << std::endl;

    // p1 will point to the same element as p2.
    p1 += p2 - p1;

    std::cout << "*p1: " << *p1 << std::endl;
    std::cout << "*p2: " << *p2 << std::endl;

    return 0;
}
