#define FOO()                    \
    ({                           \
        ((struct l){.a = 42}).a; \
    })

// Solution is to move struct definition to global scope

// struct l
// {
//     int a;
// };

// int foo()
// {
//     return ({ ((struct l){.a = 42}).a; });
// }

int main(int argc, char const *argv[])
{
    struct l
    {
        int a;
    };

    FOO();

    // foo();

    return 0;
}
