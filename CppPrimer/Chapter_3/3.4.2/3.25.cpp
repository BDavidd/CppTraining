#include <iostream>
#include <vector>

int main()
{
    std::vector<unsigned> scores(11, 0);
    unsigned grade = 0;

    std::cout << "Enter the grades: " << std::endl;
    while (std::cin >> grade)
    {
        if (grade <= 100)
        {
            ++*(scores.begin() + grade / 10);
        }
    }

    for (const auto grd : scores)
    {
        std::cout << grd << ' ';
    }
    std::cout << std::endl;

    return 0;
}
