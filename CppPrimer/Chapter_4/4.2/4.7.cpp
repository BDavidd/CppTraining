#include <iostream>

int main()
{
    short shortVal = 32767;
    std::cout << ++shortVal << std::endl; 

    unsigned short ushortVal = 65535;
    std::cout << ++ushortVal << std::endl;

    int x = 3;
    unsigned y = 4;
    std::cout << x - y << std::endl;

    return 0;
}
