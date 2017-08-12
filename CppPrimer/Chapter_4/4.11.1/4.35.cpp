int main()
{
    char cval = 0;
    int ival = 1;
    unsigned int ui = 2;
    float fval = 3;
    double dval = 4;

    // a is converted to an int, then the result to a char.
    cval = 'a' + 3;

    // ival is converted to a double, ui to a double, then the result to a float
    fval = ui - ival * 1.0;

    // ui is converted to a float, then the result to a double.
    dval = ui * fval;

    // Unspecified order.
    // ival is converted to float, the result to double, the result to char.
    // fval is converted to double, ival is converted to double, the result to char.
    cval = ival + fval + dval;

    (void)cval;

    return 0;
}
