#include <iostream>

int txt_size();

int main(int argc, char *argv[])
{
    unsigned buf_size = 1024;

    // Error: buf_size is not a constant expression.
    // Can be compiled using g++ 6.1!
    int ia[buf_size];
    ia[0] = 1;
    std::cout << ia[0] << std::endl;

    // OK: literals are constant expressions.
    int ia2[4 * 7 - 14];
    ia2[0] = 2;
    std::cout << ia2[0] << std::endl;

    // Error: txt_size() doesn't return a constant expression.
    // Can be compiled using g++ 6.1!
    int ia3[txt_size()];
    ia3[0] = 3;
    std::cout << ia3[0] << std::endl;

    // Error: st is too small for "fundamental" (11 chars) and '\0'.
    // char st[11] = "fundamental";
    // std::cout << st << std::endl;

    return 0;
}

int txt_size()
{
    return 10;
}
