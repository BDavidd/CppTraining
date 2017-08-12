#include <iostream>

int main()
{
    // Ok, initializing an int with the value -1.
    int i = -1;

    // Error: non-const references can't be initialized using literals.
    // int &r = 0;

    // Ok, i2 is a cont int initialized with the value of i (-1).
    const int i2 = i;
    std::cout << "i2: " << i2 << std::endl;

    // Ok, initializing a const reference with the value of i (-1).
    const int &r = i;
    std::cout << "&r: " << r << std::endl;

    // Error: p2 is not const so it may be used to change the value of i2 which is const.
    // int *const p2 = &i2;

    // Ok: ci is a const int.
    const int ci = -1;
    std::cout << "ci: " << ci << std::endl;

    // Ok: const references can be initialized using literals.
    const int &cr = 0;
    std::cout << "&cr: " << cr << std::endl;

    // Ok, const pointer to const, pointing to the address of i2.
    const int *const p3 = &i2;
    std::cout << "*p3: " << *p3 << std::endl;

    // Ok, pointer to const, pointing to the address of i2.
    const int *p1 = &i2;
    std::cout << "*p1: " << *p1 << std::endl;

    // Error: references are not objects, so they may not be const and all references must be initialized.
    // const int &const r2;

    return 0;
}
