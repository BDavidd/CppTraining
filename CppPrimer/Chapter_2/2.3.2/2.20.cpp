#include <iostream>

int main()
{
    // Makes the value of i equal to the square of its initial value.
    int i = 42;
    int *p1 = &i;
    *p1 = *p1 * *p1;

    std::cout << "i: " << i << " *p1: " << *p1 << std::endl;
    return 0;
}
