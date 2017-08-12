int main()
{
    // Undefined: basic types defined inside a block must be initialized.
    int i;

    // Error: const pointers must be initialized.
    // int *const cp;

    // Undefined: pointers should be initialized.
    int *p1;
    
    // Error: const pointers must be initialized.
    // int *const p2;

    // Error: constant variables must be initialized.
    // const int ic;

    // Would be Ok if ic were initialized.
    // const int &r = ic;

    // Error: const pointers must be initialized.
    // const int *const p3;

    // Undefined: pointers should be initialized.
    const int *p;

    return 0;
}
