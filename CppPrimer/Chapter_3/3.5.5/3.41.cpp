#include <iostream>
#include <vector>
#include <iterator>

int main(int argc, char *argv[])
{
    const int intArr[] = {1, 2, 3, 4, 5, 6, 7};

    std::vector<int> intVec(std::begin(intArr), std::end(intArr));

    std::cout << "The int arrray: ";
    for (const auto i : intArr)
    {
        std::cout << i << ' ';
    }
    std::cout << std::endl;

    std::cout << "The int vector: ";
    for (const auto i : intVec)
    {
        std::cout << i << ' ';
    }
    std::cout << std::endl;

    return 0;
}
