#include <iostream>

int main(int argc, char *argv[])
{
    constexpr size_t array_size = 10;

    // ia's index has values from 0 to 9, not 1 to 10!
    
    // int ia[array_size];
    // for (size_t ix = 1; ix <= array_size; ++ix)
    // {
    //     ia[ix] = ix;
    // }

    // Correct way:
    int ia[array_size] = {};
    for (size_t ix = 0; ix < array_size; ++ix)
    {
        ia[ix] = ix;
    }

    std::cout << "ia: ";
    for (const auto i : ia)
    {
        std::cout << i << ' ';
    }
    std::cout << std::endl;

    return 0;
}
