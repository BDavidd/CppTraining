#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    int i = 1;
    int *ptr = &i;

    std::vector<int> vec {0, 1, 2, 3, 4};
    int ival = 1;

    // Checks if ptr is not null.
    // Then increments the address that the pointer points to and checks whether
    // the value stored at that address is different from 0.
    // Since ptr points to an int, incrementing the pointer is an error.
    // What could be desired is incrementing the variable that ptr points to, after 
    // checking if its value is != 0.
    // && specifies evaluation order so the expression is safe.
    if (ptr != 0 && (*ptr)++)
    {
        std::cout << "*ptr: " << *ptr << std::endl;
    }

    // Since ival++ is executed first, the condition checks whether ival is != 0 and
    // ival + 1 is also != 0.
    if (ival++ && ival)
    {
        std::cout << "ival: " << ival << std::endl;
    }

    // The <= does not specify the order in which the operands are evaluated, so this expression
    // is in errror.
    // if (vec[ival++] <= vec[ival])
    // {
    // }

    int ival2 = ival + 1;
    if (vec[ival] <= vec[ival2])
    {
        std::cout << "ival: " << ival << ", ival2: " << ival2 << std::endl;
    }

    return 0;
}
