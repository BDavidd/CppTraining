#include <iostream>

int main()
{
    // Correctly defining the variables from the previous exercise.
    
    int i = 0;
    const int ic = 1;
    int *p1 = nullptr;
    int *const p2 = &i;
    const int *const p3 = &i;


    // Solving the current exercise.

    // Ok, assigning i the value of ic (1).
    i = ic;
    std::cout << "i: " << i << std::endl;

    // Error: p1 is not const so it may be used to modify the value that p3 points to.
    // p1 = p3;

    // Error: a non-const pointer may not point to a const variable.
    // p1 = &ic;

    // Error: the variable that a const pointer points to may not be changed.
    // p3 = &ic;

    // Error: the variable that a const pointer points to may not be changed.
    // p2 = p1;

    // Error: the value of a constant variable may not be changed.
    // ic = *p3;

    return 0;
}
