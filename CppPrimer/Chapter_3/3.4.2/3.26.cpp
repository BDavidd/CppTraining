#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

int main(int argc, char *argv[])
{
    std::vector<int> values;
    int input = 0;

    int soughtVal = 0;
    std::cout << "What value do you want to search?" << std::endl;
    std::cin >> soughtVal;

    std::cout << "Enter some numbers: " << std::endl;
    while (std::cin >> input)
    {
        values.push_back(input);
    }

    if (values.empty())
    {
        std::cerr << "You must enter at least one number!" << std::endl;
        return -1;
    }

    std::sort(values.begin(), values.end());

    auto begin = values.begin();
    auto end = values.end();
    auto mid = begin + (end - begin) / 2;

    // This is not used because the result of the operation is a difference_type
    // which is an int, not an iterator.
    // auto mid = (begin + end) / 2;

    while (mid != end && *mid != soughtVal)
    {
        if (*mid > soughtVal)
        {
            end = mid;
        }
        else
        {
            begin = mid + 1;
        }
        mid = begin + (end - begin) / 2;
    }

    if (*mid == soughtVal)
    {
        std::cout << "The value " << soughtVal << " was found!" << std::endl;
    }
    else
    {
        std::cout << "The value " << soughtVal << " was not found!" << std::endl;
    }

    return 0;
}
