#include <iostream>
#include <vector>
#include <string>
#include <cctype>

int main(int argc, char *argv[])
{
    std::vector<std::string> text {
        "some random sample text",
        "",
        "more random sample text"
    };

    for (auto it = text.begin(); it != text.cend() && !it->empty(); ++it)
    {
        for (auto &ch : *it)
        {
            ch = std::toupper(ch); 
        }
    }

    for (const auto &str : text)
    {
        std::cout << str << std::endl;
    }

    return 0;
}
