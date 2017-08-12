#include <iostream>
#include <vector>

using std::vector;

int main()
{
    vector<int> ivec { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    auto cnt = ivec.size();

    // Since the increment is done before executing the for body, not in
    // an expression, no change is needed to use the postfix increment.
    for (size_t ix = 0; ix != ivec.size(); ix++, cnt--)
    {
        ivec[ix] = cnt;
        std::cout << "ix: " << ix << ", cnt: " << cnt << std::endl;
    }

    std::cout << "ivec: ";
    for (const auto i : ivec)
    {
        std::cout << i << ' ';
    }
    std::cout << std::endl;

    return 0;
}
