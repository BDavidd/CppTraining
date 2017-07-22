#include <iostream>
#include <string>

void subSectionA();
void subSectionB();
void subSectionC();
void subSectionD();

int main()
{
    std::string input;
    std::cout << "Which subsection do you want to run? [A/B/C/D]" << std::endl;
    std::cin >> input;

    if (input == "A" || input == "a")
    {
        subSectionA();
    }
    else if (input == "B" || input == "b")
    {
        subSectionB();
    }
    else if (input == "C" || input == "c")
    {
        subSectionC();
    }
    else if (input == "D" || input == "d")
    {
        subSectionD();
    }
    else
    {
        std::cout << "Invalid value entered. Only A-D and a-d values are accepted." << std::endl;
    }

    return 0;
}

void subSectionA()
{
    int ival1(0);
    int ival2(0);
    std::cout << "Enter 2 integers: " << std::endl;
    std::cin >> ival1 >> ival2;

    // The assignment missed the semicolon, the statement of the else
    // case should be on a new line.
    if (ival1 != ival2)
    {
        ival1 = ival2;
    }
    else
    {
         ival1 = ival2 = 0;
    }

    std::cout << "ival1: " << ival1 << ", ival2: " << ival2 << std::endl;
}

void subSectionB()
{
    int ival(0);
    int minval(100);
    int occurs(0);

    std::cout << "Enter an integer: ";
    std::cin >> ival;

    // The if statement misses the curly braces, so the assignment of occurs
    // will be executed every time.
    // The original version doesn't compile using -Wall.
    if (ival < minval)
    {
        minval = ival;
        occurs = 1;
    }

    std::cout << "ival: " << ival << ", minval: " << minval << ", occurs: " << occurs << std::endl; 
}

void subSectionC()
{
    int input(0);
    std::cout << "Enter an integer: ";
    std::cin >> input;

    // ival only exists during the scope of the first if statement.
    if (int ival = input)
    {
        std::cout << "ival = " << ival << std::endl;
    }
    else if (!ival)
    {
        std::cout << "ival is 0" << std::endl;
    }
}

void subSectionD()
{
    int ival(0);
    std::cout << "Enter an integer: ";
    std::cin >> ival;

    // Assignment was used instead of comparison.
    if (ival == 0)
    {
        ival = 123;
    }

    std::cout << "ival: " << ival << std::endl;
}
