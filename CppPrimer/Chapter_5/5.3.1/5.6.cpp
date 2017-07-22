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

    std::string letterGrade = (grade < 60) ? grades[0] : grades[(grade - 50) / 10];

    std::cout << "Your letter grade is: " << letterGrade << std::endl;

    return 0;
}
