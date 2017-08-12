#include <iostream>
#include <vector>

void copyArray();
void copyVector();

int main()
{
    copyArray();
    copyVector();

    return 0;
}

void copyArray()
{
    constexpr size_t arrSize = 10;

    int intArr[arrSize] = {};
    for (size_t i = 0; i < arrSize; ++i)
    {
        intArr[i] = i;
    }

    int cpyArr[arrSize] = {};
    for (size_t i = 0; i < arrSize; ++i)
    {
        cpyArr[i] = intArr[i];
    }
    
    std::cout << "intArr: ";
    for (const auto i : intArr)
    {
        std::cout << i << ' ';
    }
    std::cout << std::endl;

    std::cout << "cpyArr: ";
    for (const auto i : cpyArr)
    {
        std::cout << i << ' ';
    }
    std::cout << std::endl;
}

void copyVector()
{
    std::vector<int> intVec;

    for (int i = 0; i < 10; ++i)
    {
        intVec.push_back(i);
    }

    std::vector<int> cpyVec(intVec);

    std::cout << "intVec: ";
    for (const auto i : intVec)
    {
        std::cout << i << ' ';
    }
    std::cout << std::endl;

    std::cout << "cpyVec: ";
    for (const auto i : cpyVec)
    {
        std::cout << i << ' ';
    }
    std::cout << std::endl;
}
