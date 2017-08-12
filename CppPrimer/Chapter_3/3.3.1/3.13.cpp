#include <iostream>
#include <vector>
#include <string>

template <typename T>
void printVector(T vector, std::string name)
{
    std::cout << '[' << name << "] length: " << vector.size() << ", elements: ";
    for (const auto &i : vector)
    {
        std::cout << i << ' ';
    }
    std::cout << std::endl;
}

int main()
{
    // No elements.
    std::vector<int> v1;
    printVector(v1, "v1");

    // 10 elements having value 0.
    std::vector<int> v2(10);
    printVector(v2, "v2");

    // 10 elements having value 42.
    std::vector<int> v3(10, 42);
    printVector(v3, "v3");

    // 1 element having value 10.
    std::vector<int> v4{10};
    printVector(v4, "v4");

    // 2 elements having values 10 and 42.
    std::vector<int> v5{10, 42};
    printVector(v5, "v5");

    // 10 elements, which are the empty string.
    std::vector<std::string> v6{10};
    printVector(v6, "v6");

    // 10 elements having the value "hi".
    std::vector<std::string> v7{10, "hi"};
    printVector(v7, "v7");

    return 0;
}
