#include <iostream>

int main(int arc, char *argv[])
{
    short shortVal = 32767;
    std::cout << ++shortVal << std::endl; 

    ushort ushortVal = 65535;
    std::cout << ++ushortVal << std::endl;

    int x = 3;
    unsigned y = 4;
    std::cout << x - y << std::endl;

    return 0;
}
