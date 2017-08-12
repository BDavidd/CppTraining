#include <iostream>
#include <vector>

int main()
{
    std::vector<int> iVec = {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10
    };

    for (int &elem : iVec)
    {
        elem *= (elem % 2 == 0) ? 1 : 2;

        std::cout << elem << ' ';
    }
    std::cout << std::endl;

    return 0;
}
