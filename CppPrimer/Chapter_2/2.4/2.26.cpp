#include <iostream>

int main()
{
    // Error: constant variables must be initialized.
    // const int buff;

    // Ok: defining an int.
    int cnt = 0;

    // Ok, initializing sz with the value 0.
    const int sz = cnt;

    // Ok, cnt is not const.
    ++cnt;

    // Error: sz is const.
    // ++sz;

    std::cout << "cnt: " << cnt << " sz: " << sz << std::endl;

    return 0;
}
