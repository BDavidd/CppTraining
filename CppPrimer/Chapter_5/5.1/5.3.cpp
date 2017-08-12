#include <iostream>

int main()
{
    int sum = 0;
    int val = 1;

    while (val <= 10)
    {
        // Should be actually written as sum += val++;
        sum += val, ++val;
    }

    std::cout << "Sum of 1 to 10 inclusive is: " << sum << std::endl;
    return 0;
}
