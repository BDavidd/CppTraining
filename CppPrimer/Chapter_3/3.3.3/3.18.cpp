#include <vector>

int main(int argc, char *argv[])
{
    // This will cause a segmentation fault when accessing the element at index 0 since ivec has no elements.
    // std::vector<int> ivec;
    // ivec[0] = 42;

    // Use the push_back method to add an element to the vector.
    std::vector<int> ivec2;
    ivec2.push_back(42);

    // Initialize the vector having (at least) one element.
    std::vector<int> ivec3(1);
    ivec3[0] = 42;

    return 0;
}
