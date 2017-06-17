#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    std::vector<int> ivec { 1, 2, 3, 4, 5, 
                            6, 7, 8, 9, 10 };

    for (auto it = ivec.begin(); it != ivec.end(); ++it)
    {
        *it *= 2;
    }

    for (const auto val : ivec)
    {
        std::cout << val << ' ';
    }
    std::cout << std::endl;

    return 0;
}
