#include <iostream>

int main()
{
    int* point = nullptr;
    int val = 0;

    point = &val;
    *point = 10;

    std::cout << "*point: " << *point << " val: " << val << std::endl;

    return 0;
}
