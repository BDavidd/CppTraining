#include <iostream>
#include <vector>

int main()
{
    std::vector<int> readValues;
    int input = 0;

    std::cout << "Enter some integers: " << std::endl;
    while (std::cin >> input)
    {
        readValues.push_back(input);
    }

    if (readValues.empty())
    {
        std::cerr << "You must enter at leas one number!" << std::endl;
        return -1;
    }

    for (auto it = readValues.cbegin(); it < readValues.cend(); it += 2)
    {
        // If the current element is the last one, print it since it has no pair.
        if (readValues.cend() - it == 1)
        {
            std::cout << *it;
        }
        else
        {
            std::cout << *it + *(it + 1) << ' ';
        }
    }
    std::cout << std::endl;

    auto mid = readValues.cbegin() + (readValues.cend() - readValues.cbegin()) / 2;
    auto begin = readValues.cbegin();
    auto end = readValues.cend() - 1;

    if (begin == mid)
    {
        std::cout << *begin;
    }

    for (auto it = begin; it < mid; ++it)
    {
        std::cout << *it + *end << ' ';

        // If the vector has an odd number of elements, the middle element would not
        // be printed. So if the front and back iterators are pointing to the elements one
        // before and one past the middle, print the middle element.
        if (end - it == 2)
        {
            std::cout << *(it + 1);
        }

        --end;
    }
    std::cout << std::endl;

    return 0;
}
