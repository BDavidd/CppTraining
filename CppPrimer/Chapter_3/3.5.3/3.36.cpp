#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    int array1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int array2[] = {0, 1, 3, 3, 4, 5, 6, 7, 8};

    auto arrayLen1 = std::end(array1) - std::begin(array1);
    auto arrayLen2 = std::end(array2) - std::begin(array2);
    bool areEqual = true;

    if (arrayLen1 != arrayLen2)
    {
        areEqual = false;
    }
    else
    {
        for (auto i = 0; i != arrayLen1; ++i)
        {
            if (array1[i] != array2[i])
            {
                areEqual = false;
                break;
            }
        }
    }

    if (areEqual)
    {
        std::cout << "The arrays are equal." << std::endl;
    }
    else
    {
        std::cout << "The arrays are not equal." << std::endl;
    }

    std::vector<int> vector1 = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    std::vector<int> vector2 = {0, 1, 2, 3, 4, 5, 6, 7, 8};

    if (vector1 == vector2)
    {
        std::cout << "The vectors are equal" << std::endl;
    }
    else
    {
        std::cout << "The vectors are not equal." << std::endl;
    }

    return 0;
}
