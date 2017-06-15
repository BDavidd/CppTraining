#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    int index = 10;

    while (index >= 0)
    {
        cout << index << endl;
        --index;
    }

    return 0;
}
