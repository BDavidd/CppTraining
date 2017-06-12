#include <iostream>

int main(int argc, char *argv[])
{
    int i = 0;
    int &r1 = i;
    double d = 0;
    double &r2 = d;

    // Ok: assigning a value to d through r2.
    r2 = 3.14159;
    std::cout << "r2: " << r2 << " d: " << d << std::endl;

    // Ok: d is assigned the value of i through r2.
    r2 = r1;
    std::cout << "r2: " << r2 << " i: " << i << std::endl;

    // Ok: assigning the value of d, through r2, to i.
    i = r2;
    std::cout << "i: " << i << " d: " << d << std::endl;

    // Ok: assigning the value of d to i;
    r1 = d;
    std::cout << "i: " << i << " d: " << d << std::endl;

    return 0;
}
