#include <vector>
#include <string>

int main (int argc, char *argv[])
{
    // Ok, ivec is a vector containing int vectors.
    std::vector<std::vector<int>> ivec;

    // Error: the types of svec and ivec don't match.
    // std::vector<std::string> svec = ivec;

    // Ok, svec has 10 string elements having the value "null".
    std::vector<std::string> svec(10, "null");

    return 0;
}
