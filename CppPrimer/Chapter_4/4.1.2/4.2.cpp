#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    std::vector<int> vec {0, 1, 2, 3};

    std::cout << *vec.begin() << std::endl;
    std::cout << *(vec.begin()) << std::endl;

    std::cout << *vec.begin() + 1 << std::endl;
    std::cout << (*(vec.begin())) + 1 << std::endl;

    return 0;
}
