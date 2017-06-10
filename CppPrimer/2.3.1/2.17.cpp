#include <iostream>

int main(int arg, char *argv[])
{
    int i;
    int &ri = i;

    i = 5;
    ri = 10;

    // Will print 10 10 because assigning 10 to ri assigns 10 to i.
    std::cout << i << " " << ri << std::endl;

    return 0;
}
