#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    int sum = 0;
    int index = 50;

    while (index <= 100)
    {
        sum += index++;
    }

    cout << "The sum of the numbers from 50 to 100 is: " << sum << endl;

    return 0;
}
