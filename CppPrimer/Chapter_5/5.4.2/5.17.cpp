#include <iostream>
#include <vector>

int main()
{
    std::vector<int> firstVector{};
    std::vector<int> secondVector;
    int input(0);

    std::cout << "Enter some numbers: " << std::endl;
    while (std::cin >> input)
    {
        firstVector.push_back(input);
    }

    // cin may enter a failed state after reading eof, so it must be reset.
    if (!std::cin.good())
    {
        std::cin.clear();
        std::cin.ignore();
    }

    std::cout << "Enter some more numbers: " << std::endl;
    while (std::cin >> input)
    {
        secondVector.push_back(input);
    }

    if (firstVector.size() == secondVector.size())
    {
        std::cout << "The vectors have the same length and they are "
                  << ((firstVector == secondVector) ? "equal" : "unequal") << std::endl;
    }
    else
    {
        const auto minSize = (firstVector.size() < secondVector.size()) ? firstVector.size() : secondVector.size();

        for (std::vector<int>::size_type i = 0; i < minSize; ++i)
        {
            if (firstVector[i] != secondVector[i])
            {
                std::cout << "The vectors are not prefixes of eachother." << std::endl;
                return 0;
            }
        }

        std::cout << "One vector is a prefix of the other." << std::endl;
    }

    return 0;
}
