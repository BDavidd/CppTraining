#include <iostream>
#include <string>
#include <vector>

int main(int argc, char *argv[])
{
    std::vector<std::string> strVec {
        "Hello", "" , " world,", "!"
    };

    auto iter = strVec.begin();

    // Returns the value of the first element from the vector, then moves
    // the iterator to the next element.
    std::cout << *iter++ << std::endl;

    // Takes the value of the element (string) then increments it.
    // strings can't be incremented.
    // std::cout << (*iter)++ << std::endl;

    // Calls the empty() method of the iter object. iter is an iterator,
    // which doesn't have the empty() method defined, so this is an error.
    // std::cout << *iter.empty() << std::endl;

    // Calls the empty method of the vector element (string) that iter points to.
    std::cout << iter->empty() << std::endl;

    // Returns the object that iter points to, then increments it.
    // strings don't support increments, so this is an error.
    // std::cout << ++*iter << std::endl;

    // Checks whether the element that iter points to is empty,
    // then makes iter point to the next element.
    std::cout << iter++->empty() << std::endl;

    std::cout << *iter << std::endl;

    return 0;
}
