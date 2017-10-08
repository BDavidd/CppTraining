#include <vector>
#include <iostream>

void decreasingInsertionSort(std::vector<int>& data);

int main()
{
    std::vector<int> data {9, 51, 1, 42, 75, 10, 31};
    decreasingInsertionSort(data);
    for (int x : data)
    {
        std::cout << x << ' ';
    }
    std::cout << std::endl;

    return 0;
}

void decreasingInsertionSort(std::vector<int>& data)
{
    for (std::vector<int>::size_type j = 1; j < data.size(); ++j)
    {
        int key = data[j];
        int i = j - 1;

        while (i >= 0 && data[i] < key)
        {
            data[i + 1] = data[i];
            --i;
        }

        data[i + 1] = key;
    }
}
