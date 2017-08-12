#include <iostream>

int main()
{
    int i = 0;

    // Error: a pointer to double can not point to an int.
    // double *dp = &i;

    // Error: a pointer must be initialized with an object's address or 0.
    //int *ip = i;

    // Ok: p points to i.
    int *p = &i;
    
    std::cout << "i: " << i << " *p: " << *p << std::endl;
    return 0;
}
