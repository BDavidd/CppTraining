#include <iostream>
#include <vector>

void printVector(std::vector<int> intVector, int index)
{
    if (index >= 0 & index < intVector.size()) {
        std::cout << intVector[index] << ' ';
        printVector(intVector, ++index);
    }
    else {
        std::cout << std::endl;
    }
}

int main()
{
    std::vector<int> vec {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    printVector(vec, 0);

    return 0;
}