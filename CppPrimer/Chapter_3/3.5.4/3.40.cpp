#include <iostream>
#include <cstring>

int main()
{
    const char str1[] = "Hello";
    const char str2[] = "world!";

    // strlen  doesn't count the terminating null.
    // +1 for the null and +1 for the space.
    char finalStr[std::strlen(str1) + std::strlen(str2) + 2];

    std::strcpy(finalStr, str1);
    std::strcat(finalStr, " ");
    std::strcat(finalStr, str2);

    std::cout << finalStr << std::endl;

    return 0;
}
