#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    // This is the preferred way, since it is the shortest.
    std::vector<int> ivec1(10, 42);

    std::vector<int> ivec2 { 42, 42, 42, 42, 42, 
                             42, 42, 42, 42, 42 };

    std::vector<int> ivec3(10);
    for (auto &val : ivec3)
    {
        val = 42;
    }

    std::cout << "ivec1: ";
    for (const auto val : ivec1)
    {
        std::cout << val << ' ';
    }
    std::cout << std::endl;

    std::cout << "ivec2: ";
    for (const auto val : ivec2)
    {
        std::cout << val << ' ';
    }
    std::cout << std::endl;

    std::cout << "ivec3: ";
    for (const auto val : ivec3)
    {
        std::cout << val << ' ';
    }
    std::cout << std::endl;
}