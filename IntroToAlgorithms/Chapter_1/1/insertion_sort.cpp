#include <vector>
#include <iostream>

void insertionSort(std::vector<int>& data);
void printVector(const std::vector<int>& data);

int main()
{
    std::vector<int> numbers;
    int input{};

    std::cout << "Enter the numbers that you want to sort. Press CTRL-D to start processing them" << std::endl;
    while (std::cin >> input)
    {
        numbers.push_back(input);
    }

    insertionSort(numbers);

    return 0;
}

void insertionSort(std::vector<int>& data)
{
    printVector(data);

    // start iterating from the second element
    for (std::vector<int>::size_type j = 1; j < data.size(); ++j)
    {
        int key = data[j]; // store the current element
        int i = j - 1;

        // iterate through the elements to the left of the current element
        // and shift the ones that are larger than it one position to the right
        while (i >= 0 && data[i] > key)
        {
            data[i + 1] = data[i];
            --i;
        }

        // after all the elements are shifted to the right, one empty space is left.
        // insert the stored value there.
        data[i + 1] = key;

        printVector(data);
    }
}

void printVector(const std::vector<int>& data)
{
    for (int x : data)
    {
        std::cout << x << ' ';
    }
    std::cout << std::endl;
}
