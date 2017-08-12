#include <iostream>
#include <vector>
#include <string>

template <typename T>
void printVector(T vector, std::string name)
{
    std::cout << '[' << name << "] length: " << vector.size() << ", elements: ";
    for (auto it = vector.cbegin(); it != vector.cend(); ++it)
    {
        std::cout << *it << ' ';
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> v1;
    printVector(v1, "v1");

    std::vector<int> v2(10);
    printVector(v2, "v2");

    std::vector<int> v3(10, 42);
    printVector(v3, "v3");

    std::vector<int> v4{10};
    printVector(v4, "v4");

    std::vector<int> v5 {10, 42};
    printVector(v5, "v5");

    std::vector<std::string> v6 {10};
    printVector(v6, "v6");

    std::vector<std::string> v7 {10, "hi"};
    printVector(v7, "v7");

    return 0;
}
