#include <stddef.h>

#define GET_G() g

int g = 0;

int *get_g() { return &g; }

int main(int argc, char const *argv[])
{
    int *p = NULL;

    p = &GET_G();

    p = get_g();

    return 0;
}

// Question: What if the macro is addressed,
// and returns an argument?
// Solution: Combine transformations for addressed macros
// and macros with addressed arguments

#define ID(x) x

int *id(int *x)
{
    return &*x;
}
