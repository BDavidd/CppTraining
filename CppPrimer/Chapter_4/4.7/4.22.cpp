#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    int grade = 0;

    std::cout << "Enter your grade: ";
    std::cin >> grade;

    std::string result = (grade > 90) ? "high pass" :
                                (grade < 60) ? "fail" :
                                    (grade <= 75) ? "low pass" : "pass";

    std::cout << "Your result is " << result << std::endl;

    if (grade > 90)
    {
        result = "high pass";
    }
    else if (grade > 75)
    {
        result = "pass";
    }
    else if (grade > 60)
    {
        result = "low pass";
    }
    else
    {
        result = "fail";
    }

    std::cout << "Your result is also " << result << std::endl;

    return 0;
}
