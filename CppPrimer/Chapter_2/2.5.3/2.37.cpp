#include <iostream>

int main(int argc, char *arv[])
{
    int a = 3;
    int b = 4;

    // c is an int initialized with the value of a.
    decltype(a) c = a;

    // d is a reference to int, refering to a.
    decltype(a = b) d = a;

    // c will be 4, a will be 3.
    ++c;
    std::cout << "c: " << c << " a: " << a << std::endl;

    // d will be 4, a will be 4.
    ++d;
    std::cout << "d: " << d << " a: " << a << std::endl;

    return 0;
}
