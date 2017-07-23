#include <iostream>
#include <string>

void checkMaximum(std::string &maximumRepeatWord, unsigned int &maximumRepeat, std::string currentWord, unsigned int currentRepeat);

int main()
{
    std::string previousWord;
    std::string currentWord;
    std::string maximumRepeatWord;
    unsigned int maximumRepeat(0);
    unsigned int currentRepeat(0);

    std::cout << "Enter some words: " << std::endl;
    while (std::cin >> currentWord)
    {
        if (currentWord == previousWord)
        {
            ++currentRepeat;
            checkMaximum(maximumRepeatWord, maximumRepeat, currentWord, currentRepeat);
        }
        else
        {
            previousWord = currentWord;
            currentRepeat = 1;
            
            // Check the maximum, in case there is only one word in the input, which
            // will lead only to the else branch being executed, only once.
            checkMaximum(maximumRepeatWord, maximumRepeat, currentWord, currentRepeat);
        }
    }

    if (maximumRepeatWord != "" && maximumRepeat != 0)
    {
        std::cout << "The word that was repeated the most is: \"" << maximumRepeatWord << "\" count: " << maximumRepeat << std::endl;
    }
    else
    {
        std::cout << "There were no words to process." << std::endl;
    }

    return 0;
}

void checkMaximum(std::string &maximumRepeatWord, unsigned int &maximumRepeat, std::string currentWord, unsigned int currentRepeat)
{
    if (currentRepeat > maximumRepeat)
    {
        maximumRepeat = currentRepeat;

        if (maximumRepeatWord != currentWord)
        {
            maximumRepeatWord = currentWord;
        }
    }
}
