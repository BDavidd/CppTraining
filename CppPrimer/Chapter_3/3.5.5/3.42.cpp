#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    std::vector<int> iVec {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int iArr[iVec.size()] {};

    for (std::vector<int>::size_type i = 0; i < iVec.size(); ++i)
    {
        iArr[i] = iVec[i];
    }

    std::cout << "The int vector: ";
    for (const auto i : iVec)
    {
        std::cout << i << ' ';
    }
    std::cout << std::endl;

    std::cout << "The int arrray: ";
    for (const auto i : iArr)
    {
        std::cout << i << ' ';
    }
    std::cout << std::endl;

    return 0;
}
