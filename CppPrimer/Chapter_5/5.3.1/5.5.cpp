#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> grades {"F", "D", "C", "B", "A", "A++"};

    unsigned grade = 0;

    do
    {
        std::cout << "Enter your grade: ";
        std::cin >> grade;
    } while (grade > 100);

    std::string letterGrade;
    if (grade < 60)
    {
        letterGrade = grades[0];
    }
    else
    {
        letterGrade = grades[(grade - 50) / 10];

        if (grade != 100)
        {
            if (grade % 10 < 3)
            {
                letterGrade += '-';
            }
            else if (grade % 10 > 7)
            {
                letterGrade += '+';
            }
        }
    }

    std::cout << "Your letter grade is: " << letterGrade << std::endl;

    return 0;
}
