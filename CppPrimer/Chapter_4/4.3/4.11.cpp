#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    std::cout << "Enter a: ";
    std::cin >> a;

    std::cout << "Enter b: ";
    std::cin >> b;

    std::cout << "Enter c: ";
    std::cin >> c;

    std::cout << "Enter d: ";
    std::cin >> d;

    if (a > b && b > c && c > d)
    {
        std::cout << "The numbers were entered in descending order." << std::endl;
    }

    return 0;
}
