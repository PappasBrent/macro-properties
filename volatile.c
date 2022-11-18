#define GET_G() g

int g = 0;

int *get_g() { return &g; }

int main(int argc, char const *argv[])
{
    GET_G() = 0;

    *get_g() = 0;

    return 0;
}

// Question: What if the macro is volatile,
// and returns an argument?
// Solution: Combine transformations for volatile macros
// and macros with volatile arguments

#define ID(x) x

int *id(int *x)
{
    return &*x;
}
