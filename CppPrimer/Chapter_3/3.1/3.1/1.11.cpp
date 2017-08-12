#include <iostream>

using std::cout;
using std::cin;
using std::cerr;
using std::endl;

int main()
{
    int a = 0;
    int b = 0;

    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    if (a == b)
    {
        cerr << "The two numbers are equal!" << endl;
        return -1;
    }
    else if (a < b)
    {
        while (a <= b)
        {
            cout << a << endl;
            ++a;
        }
    }
    else if (a > b)
    {
        while (b <= a)
        {
            cout << a << endl;
            --a;
        }
    }

    return 0;
}
