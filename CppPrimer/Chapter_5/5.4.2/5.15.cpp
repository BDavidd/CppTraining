int main()
{
    constexpr int sz = 5;

    for (int ix = 0; ix != sz; ++ix)
    {
        /* ... */
    }

    // ix was declared inside the for loop initializer, so it is not in scope
    // afer the for loop finishes.
    // if (ix != sz)
    // {
    //     /* ... */
    // }

    int ix(0);

    // The initializer is missing.
    for (ix = 0; ix != sz; ++ix)
    {
        /* ... */
    }

    // If sz is incremented, the loop will never end.
    for (int ix = 0; ix != sz; ++ix/*, ++sz*/)
    {
        /* ... */
    }
    
    return 0;
}
