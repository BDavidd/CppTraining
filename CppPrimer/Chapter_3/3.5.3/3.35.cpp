#include <iostream>
#include <iterator>

int main()
{
    int intArr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << "The initial array values: ";
    for (const auto i : intArr)
    {
        std::cout << i << ' ';
    }
    std::cout << std::endl;

    for (int *ind = std::begin(intArr); ind < std::end(intArr); ++ind)
    {
        *ind = 0;
    }

    std::cout << "The final array values: ";
    for (const auto i : intArr)
    {
        std::cout << i << ' ';
    }
    std::cout << std::endl;

    return 0;
}
