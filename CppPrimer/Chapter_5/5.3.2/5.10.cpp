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
        switch (ch)
        {
        case 'a':
        case 'A':
            ++aCount;
            break;

        case 'e':
        case 'E':
            ++eCount;
            break;

        case 'i':
        case 'I':
            ++iCount;
            break;

        case 'o':
        case 'O':
            ++oCount;
            break;

        case 'u':
        case 'U':
            ++uCount;
            break;
        }
    }

    std::cout << "The number of a's: " << aCount << std::endl;
    std::cout << "The number of e's: " << eCount << std::endl;
    std::cout << "The number of i's: " << iCount << std::endl;
    std::cout << "The number of o's: " << oCount << std::endl;
    std::cout << "The number of u's: " << uCount << std::endl;

    return 0;
}
