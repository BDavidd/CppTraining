#include <iostream>
#include <vector>

int main()
{
    std::vector<int> readValues;
    int input = 0;

    std::cout << "Enter some numbers: ";
    while (std::cin >> input)
    {
        readValues.push_back(input);
    }

    if (readValues.empty())
    {
        std::cerr << "You must enter at least 1 number!" << std::endl;
        return -1;
    }

    // Could be solved much easier using iterators, but they have not been introduced yet in the book.
    for (decltype(readValues.size()) i = 0; i < readValues.size(); i += 2 )
    {
        // If the current element is the last one.
        if (i == (readValues.size() - 1))
        {
            std::cout << readValues.at(i) << ' ';
        }
        else
        {
            std::cout << readValues.at(i) + readValues.at(i + 1) << ' ';
        }
    }
    std::cout << std::endl;

    if (readValues.size() == 1)
    {
        std::cout << readValues.at(0);
    }
    for (decltype(readValues.size()) i = 0; i < readValues.size() / 2; ++i)
    {
        std::cout << readValues.at(i) + readValues.at(readValues.size() - 1 - i) << ' ';

        // If the vector has an odd number of elements and the elements that are added in this loop
        // are the ones right before and after the middle element, the middle element is printed 
        // (since it has no pair).
        if ((readValues.size() - 1 - i) - i == 2)
        {
            std::cout << readValues.at(i + 1);
        }
    }
    std::cout << std::endl;

    return 0;
}
