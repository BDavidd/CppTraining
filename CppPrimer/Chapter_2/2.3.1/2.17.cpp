#include <iostream>

int main()
{
    // Added initialization to avoid undefined behavior.
    int i  = 0;
    int &ri = i;

    i = 5;
    ri = 10;

    // Will print 10 10 because assigning 10 to ri assigns 10 to i.
    std::cout << i << " " << ri << std::endl;

    return 0;
}
