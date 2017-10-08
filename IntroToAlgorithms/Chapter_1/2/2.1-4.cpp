#include <vector>
#include <iostream>

void printVector(const std::vector<int>& vec);

std::vector<int> addVectors(const std::vector<int>& a, const std::vector<int>& b)
{
    if (a.size() != b.size())
    {
        return std::vector<int>{};
    }

    std::vector<int> c(a.size() + 1, 0);
    printVector(c);

    // Using int variable loop because std::vector<int>::size_type is unsigned, so it wraps around
    // when decreased in the final iteration, so the loop never ends. 
    for (int i = a.size() - 1; i >= 0; --i)
    {
        // using c[i+1], since c has more elements than a and b, so its last element is at index a.size().
        int sum = a[i] + b[i] + c[i + 1];
        c[i + 1] = sum % 2;              // sum
        c[i] = sum / 2;                  // carry, will be at index i + 1 in the next iteration

        printVector(c);
    }

    return c;
}

int main()
{
    std::vector<int> a {0, 1, 1, 1};
    std::vector<int> b {1, 0, 1, 1};

    std::vector<int> c = addVectors(a, b);

    return 0;
}

void printVector(const std::vector<int> &vec)
{
    for (int x : vec)
    {
        std::cout << x << ' ';
    }
    std::cout << std::endl;
}
