#include <iostream>

int* getPtr()
{
    static int iVal = 100;

    return &iVal;
}

int main(int argc, char *argv[])
{
    int p = 0;
    int *pt = nullptr;

    // Without parentheses, the result of the getPtr() method is compared to 0 first.
    // The result is assigned to p. 
    if ((p = (getPtr() != 0)))
    {
        std::cout << "Comparison before assignment." << std::endl;
    }

    // What was probably intended.
    if ((pt = getPtr()) != nullptr)
    {
        std::cout << "Assignment before comparison." << std::endl;
    }

    // 1024 is assigned to p. Since p is not 0, the condition evaluates to true.
    if ((p = 1024))
    {
        std::cout << "p = 1024" << std::endl;
    }

    // What was probably intended. 
    // p is 1024, since the value was assigned in the previous if statement.
    if (p == 1024)
    {
        std::cout << "p == 1024" << std::endl;
    }

    return 0;
}
