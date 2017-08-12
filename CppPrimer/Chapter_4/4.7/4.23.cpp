#include <iostream>
#include <string>

int main()
{
    std::string s = "word";

    // The expression fails because the sum is evaluated first.
    // The result, a string, is compared to a char, which is not valid.
    std::string pl = s + (s[s.size() - 1] == 's' ? "" : "s");

    std::cout << pl << std::endl;

    return 0;
}
