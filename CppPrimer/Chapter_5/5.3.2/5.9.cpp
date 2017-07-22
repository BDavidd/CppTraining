#include <iostream>

int main()
{
    std::cout << "Enter some text:" << std::endl;

    char ch('\0');
    unsigned int aCount(0);
    unsigned int eCount(0);
    unsigned int iCount(0);
    unsigned int oCount(0);
    unsigned int uCount(0);

    while (std::cin >> ch)
    {
        if (ch == 'A' || ch == 'a')
        {
            ++aCount;
        }
        else if (ch == 'E' || ch == 'e')
        {
            ++eCount;
        }
        else if (ch == 'I' || ch == 'i')
        {
            ++iCount;
        }
        else if (ch == 'O' || ch == 'o')
        {
            ++oCount;
        }
        else if (ch == 'U' || ch == 'u')
        {
            ++uCount;
        }
    }

    std::cout << "The number of a's: " << aCount << std::endl;
    std::cout << "The number of e's: " << eCount << std::endl;
    std::cout << "The number of i's: " << iCount << std::endl;
    std::cout << "The number of o's: " << oCount << std::endl;
    std::cout << "The number of u's: " << uCount << std::endl;

    return 0;
}
