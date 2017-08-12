#include <iostream>

int main()
{
    int i = 0;
    double d = 0.0;

    // i = 3, d = 3.
    d = i = 3.5;
    std::cout << "i: " << i << ", d: " << d << std::endl;

    // d = 3.5, i = 3.
    i = d = 3.5;
    std::cout << "i: " << i << ", d: " << d << std::endl;

    return 0;
}
