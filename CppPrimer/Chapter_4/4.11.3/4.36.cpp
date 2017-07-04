#include <iostream>

int main(int argc, char *argv[])
{
    int i = 2;
    double d = 3.0;

    i *= static_cast<int>(d);

    std::cout << "i: " << i << std::endl;

    return 0;
}
