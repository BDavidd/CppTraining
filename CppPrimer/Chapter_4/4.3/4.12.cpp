#include <iostream>

int main()
{
    int i = 0;
    int j = 0;
    int k = 0;

    std::cout << "Enter i: ";
    std::cin >> i;

    std::cout << "Enter j: ";
    std::cin >> j;

    std::cout << "Enter k: ";
    std::cin >> k;

    // The condition verifies that k is greater than 1 if i and j have different values
    // or that k is greater than 0 if i and j have the same value.
    // The condition does not compile (with the -Wall flag) as presented in the book, so I
    // added parentheses to mirror the way the compiler evaluates the expression.
    if ((i != j) < k)
    {
        std::cout << "The condition is true." << std::endl;
    }
    else
    {
        std::cout << "The condition is false." << std::endl;
    }

    return 0;
}
