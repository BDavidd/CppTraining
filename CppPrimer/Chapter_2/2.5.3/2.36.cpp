#include <iostream>

int main()
{
    int a = 3;

	int &b = a;

    // c is an int.
    decltype(a) c = a;

    // b is a reference to int, refering to a.
    decltype((b)) d = a;

    // c will be 4, a will be 3.
    ++c;
    std::cout << "c: " << c << " a: " << a << std::endl;

    // d will be 4, a will be 4.
    ++d;
    std::cout << "d: " << d << " a: " << a << std::endl;

    return 0;
}
