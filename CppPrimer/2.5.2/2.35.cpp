#include <iostream>

int main(int argc, char *argv[])
{
    const int i = 42;

    // j is an int.
    auto j = i;

    // k is a const reference.
    const auto &k = i;

    // p is a pointer to const.
    auto *p = &i;

    // j2 is a const int.
    const auto j2 = i;

    // k2 is a const reference.
    const auto &k2 = i;

    // Testing j.
    std::cout << "j before modifying it: " << j << std::endl;
    j = 50;
    std::cout << "j after modifying it: " << j << " and i: " << i << std::endl;

    // Testing k. It can't be modified.
    std::cout << "k is: " << k << " and i: " << i << std::endl;
    // k = 32;

    // Testing p. Its value can't be modified;
    std::cout << "*p before modifying it: " << *p << " and i: " << i << std::endl;
    // *p = 39;
    p = &j;
    std::cout << "*p after modifying it: " << *p << " and j: " << j << std::endl;

    // Testing j2. It can't be modified.
    std::cout << "j2 is: " << j2 << " and i: " << i << std::endl;
    // j2 = 0;

    // Testing k2. It can't be modified.
    std::cout << "k2 is: " << k2 << " and i: " << i << std::endl;
    // k2 = 100;

    return 0;
}
