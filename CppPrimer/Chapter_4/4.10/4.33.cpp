#include <iostream>

int main(int argc, char *argv[])
{
    int x = 0;
    int y = 1;
    bool someValue = true;

    // The comma has very low precedence, so it will not be grouped as a 
    // part of the conditional expression, so --y will be executed every time,
    // as marked by the parantheses.
    (someValue ? ++x, ++y : --x), --y;

    std::cout << "x: " << x << ", y: " << y << std::endl;

    return 0;
}
