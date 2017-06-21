#include <iostream>
#include <string>

std::string sa[10];
int ia[10];

int main(int argc, char *argv[])
{
    // Contains 10 empty strings.
    std::cout << "sa: ";
    for (const auto str : sa)
    {
        std::cout << str << ' ';
    }
    std::cout << std::endl;

    // Contains 10 ints having value 0;
    std::cout << "ia: ";
    for (const auto i : ia)
    {
        std::cout << i << ' ';
    }
    std::cout << std::endl;

    // Contains 10 empty strings.
    std::string sa2[10];
    std::cout << "sa2: ";
    for (const auto str : sa2)
    {
        std::cout << str << ' ';
    }
    std::cout << std::endl;

    // Contains 10 ints having undefined values.
    int ia2[10];
    std::cout << "ia2: ";
    for (const auto i : ia2)
    {
        std::cout << i << ' ';
    }
    std::cout << std::endl;

    return 0;
}
