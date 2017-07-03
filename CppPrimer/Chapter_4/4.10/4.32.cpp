#include <iostream>

int main(int argc, char *argv[])
{
    constexpr int size = 5;
    int ia[size] { 1, 2, 3, 4, 5 };

    // Iterates through the array using both an index and a pointer.
    for (int *ptr = ia, ix = 0; ix != size && ptr != ia + size; ++ix, ++ptr)
    {
        std::cout << "*ptr: " << *ptr << ", ia[ix]: " << ia[ix] << std::endl;
    }

    return 0;
}
