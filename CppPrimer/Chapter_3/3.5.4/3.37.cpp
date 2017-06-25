#include <iostream>

int main(int argc, char *argv[])
{
    const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    const char *cp = ca;

    // It will iterate until it finds the first 0 in memory.
    // Error, since ca is not null terminated.
    while (*cp) 
    {
        std::cout << *cp << std::endl;
        ++cp;
    }

    return 0;
}
