#include <iostream>

int main(int argc, char *argv[])
{
    int j = 5;
    int i = 2;

    // Performs the int division, then casts the result to double.
    // Since int division is used, the result will have no decimals.
    double slope = static_cast<double>(j / i);

    std::cout << "slope: " << slope << std::endl;

    return 0;
}
