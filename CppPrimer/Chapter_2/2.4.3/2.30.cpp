int main()
{
    // Top-level const.
    const int v2 = 0;

    // Non-const.
    int v1 = v2;

    // Non-const.
    int *p1 = &v1;

    // Non-const (implied top-level const).
    int &r1 = v1;

    // Low-level const.
    const int *p2 = &v2;

    // Low-level and top-level const.
    const int *const p3 = &v2;

    // Low-level const (implied top-level const).
    const int &r2 = v2;

    return 0;
}
