#include <iostream>

int main()
{
    constexpr size_t arrSize = 10;

    int intArr[arrSize] = {};

    for (size_t i = 0; i < arrSize; ++i)
    {
        intArr[i] = i;
    }

    std::cout << "intArr: ";
    for (const auto i : intArr)
    {
        std::cout << i << ' ';
    }
    std::cout << std::endl;

    return 0;
}
