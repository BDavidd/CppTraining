#include <iostream>

int main()
{
    // Ok, ival is an int and it is initialised with the value '1'.
    int ival = 1.01;
    std::cout << "ival: " << ival << std::endl;

    // Error: references can only be initialized by an object.
    // int &rval1 = 1.01;
    // std::cout << "rval1: " << rval1 << std::endl;

    // Ok, rval2 will reference ival (= 1)
    int &rval2 = ival;
    std::cout << "rval2: " << rval2 << std::endl;

    // Error: references must be initialized.
    // int &rval3;

    return 0;
}
