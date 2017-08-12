#include <iostream>

int main()
{
    constexpr size_t rowCount = 3;
    constexpr size_t columnCount = 4;

    using int_arr = int [columnCount];

    int ia[rowCount][columnCount] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };

    std::cout << "Range for: ";
    for (const int_arr &row : ia)
    {
        for (const int element : row)
        {
            std::cout << element << ' ';
        }
    }
    std::cout << std::endl;

    std::cout << "Subscript for: ";
    for (size_t i = 0; i < rowCount; ++i)
    {
        for (size_t j = 0; j < columnCount; ++j)
        {
            std::cout << ia[i][j] << ' ';
        }
    }
    std::cout << std::endl;

    std::cout << "Pointer for: ";
    for (const int_arr *row = ia; row < ia + rowCount; ++row)
    {
        for (const int *element = *row; element < *row + columnCount; ++element)
        {
            std::cout << *element << ' ';
        }
    }
    std::cout << std::endl;

    return 0;
}
