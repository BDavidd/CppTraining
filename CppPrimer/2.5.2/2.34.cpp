#include <iostream>

int main(int argc, char *argv[])
{
    // Declarations from previous examples.
    int i = 0;
    int &r = i;
    auto a = r;
    
    const int ci = i;
    const int &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    const auto f = ci;
    const auto &g = ci;

    // The value of a changes (a is an int).
    std::cout << "a before modifying it: " << a << std::endl;
    a = 42;
    std::cout << "a after modifying it: " << a << std::endl;

    // The value of b changes (b is an int).
    std::cout << "b before modifying it: " << b << std::endl;
    b = 42;
    std::cout << "b after modifying it: " << b << std::endl;

    // The value of c changes (c is an int).
    std::cout << "c before modifying it: " << c << std::endl;
    c = 42;
    std::cout << "c after modifying it: " << c << std::endl;

    // Error: d now points to address 42 (d is int*).
    // d = 42;

    // Error: e now points to address 42 (e is const int*).
    // e = 42;

    // Error: g is a const reference, so its value can't be modified.
    // g = 42;

    return 0;
}
