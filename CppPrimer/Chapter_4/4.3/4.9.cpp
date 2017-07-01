#include <iostream>

int main(int argc, char *argv[])
{
    const char *cp = "Hello World";

    // Checks if the pointer is not null and if the string is not empty (!= '\0').
    if (cp && *cp)
    {
        std::cout << cp << std::endl;
    }

    return 0;
}
