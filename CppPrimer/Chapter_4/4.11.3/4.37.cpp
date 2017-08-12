#include <string>

using std::string;

int main()
{
    int i = 0;
    double d = 0.0;
    const string *ps = nullptr;
    char c = 'a';
    char *pc = &c;
    void *pv = nullptr;

    // pv = (void*)ps;
    string *pps = const_cast<string*>(ps);
    pv = static_cast<void*>(pps);

    // i = int(*pc);
    i = static_cast<int>(*pc);

    // pv = &d;
    pv = static_cast<void*>(&d);

    // pc = (char*) pv;
    pc = reinterpret_cast<char*>(pv);

    (void)i;

    return 0;
}
