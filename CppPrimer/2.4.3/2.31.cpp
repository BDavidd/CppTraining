int main(int argc, char *argv[])
{
    // Variable declarations from the previous exercise.
    const int v2 = 0;
    int v1 = v2;
    int *p1 = &v1;
    int &r1 = v1;
    const int *p2 = &v2;
    const int *const p3 = &v1;
    const int &r2 = v2;

    // Current exercise solution.

    // Ok, assigning the value of v2 to v1.
    r1 = v2;

    // Error: non-const pointer can't point to const object (low-level const).
    // p1 = p2;

    // Error: non-const pointer can't point to const object (low-level const).
    // p1 = p3;

    // Ok: const pointers can point to non-const objects.
    p2 = p1;

    // Ok: const pointer pointing to const object.
    p2 = p3;
    
    return 0;
}
