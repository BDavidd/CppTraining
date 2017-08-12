#include <iostream>

int main()
{
    int i = 0;

    // Error: can not assign to a literal.
    // if (42 = i)
    // {
    //     ;
    // }

    // Assigns 42 to i and returns i. i is different from 0, so the condition is true.
    if ((i = 42))
    {
        std::cout << "The condition is true." << std::endl;
    }

    return 0;
}
