#include <iostream>

// Returns a refference to the value at position index from the array.
int &get (int* array, int index)
{
    return array[index];
}

int main()
{
    int ia[10];
    for (int i = 0; i != 10; ++i) {
        get(ia, i) = i;
    }
    
    for (const int x : ia) {
        std::cout << x << ' ';
    }
    std::cout << std::endl;
}