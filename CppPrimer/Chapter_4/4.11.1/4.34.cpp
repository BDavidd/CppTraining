#include <iostream>

int main(int argc, char *argv[])
{
    float fval = 1.0;
    double dval = 0.0;
    int ival = 2;
    char cval = 3;

    // fval is converted to true, since it is not 0.
    if (fval)
    {
        std::cout << "fval is true." << std::endl;
    }

    // ival is converted to float, then the result is converted to double.
    dval = fval + ival;
    std::cout << "dval: " << dval << std::endl;

    // ival is promoted to an int, the result of the multiplication is
    // converted to double.
    dval = dval + ival * cval;
    std::cout << "dval: " << (dval + ival * cval) << std::endl;

    return 0;
}
