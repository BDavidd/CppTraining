#include <iostream>

int main(int argc, char *argv[])
{
    double dval = 1.0;
    int ival = 1;
    int *pi = nullptr;

    // Error: cannot assign pi (int*) to ival (int).
    // dval = ival = pi = 0;
    dval = ival = 0;
    pi = 0;

    // Suppress unused variable compiler warning.
    (void)pi;

    std::cout << "dval: " << dval << ", ival: " << ival << std::endl;

    return 0;
}
