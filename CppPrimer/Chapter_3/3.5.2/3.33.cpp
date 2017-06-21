#include <iostream>

int main(int argc, char *argv[])
{
    // Scores contains 11 unsigned ints having undefined values.
    // The scores that are not modified will keep the undefined (random) values.
    unsigned scores[11];
    unsigned grade;

    while (std::cin >> grade)
    {
        if (grade <= 100)
        {
            ++scores[grade / 10];
        }
    }

    std::cout << "scores: ";
    for (const auto i : scores)
    {
        std::cout << i << ' ';
    }
    std::cout << std::endl;

    return 0;
}
