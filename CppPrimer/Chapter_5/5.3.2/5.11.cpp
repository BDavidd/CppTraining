#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter some text:" << std::endl;

    std::string input;
    unsigned int aCount(0);
    unsigned int eCount(0);
    unsigned int iCount(0);
    unsigned int oCount(0);
    unsigned int uCount(0);
    unsigned int spaceCount(0);
    unsigned int tabCount(0);
    unsigned int newLineCount(0);

    while (std::getline(std::cin, input))
    {
        // std::getline reads until the first end of line character.
        // When it returns it means that a new line was found.
        ++newLineCount;

        for (const char ch : input)
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

            case ' ':
                ++spaceCount;
                break;

            case '\t':
                ++tabCount;
                break;
            }
        }
    }

    std::cout << "The number of a's: " << aCount << std::endl;
    std::cout << "The number of e's: " << eCount << std::endl;
    std::cout << "The number of i's: " << iCount << std::endl;
    std::cout << "The number of o's: " << oCount << std::endl;
    std::cout << "The number of u's: " << uCount << std::endl;
    std::cout << "The number of spaces: " << spaceCount << std::endl;
    std::cout << "The number of tabs: " << tabCount << std::endl;
    std::cout << "The number of new lines: " << newLineCount << std::endl;

    return 0;
}
