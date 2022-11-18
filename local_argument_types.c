#define ID(x) x

// Solution is to move struct definition to global scope

// struct l
// {
//     int a;
// };

// struct l id(struct l l) { return l; }

int main(int argc, char const *argv[])
{
    struct l
    {
        int a;
    } l;

    // struct l l;

    ID(l);

    // id(l);

    return 0;
}
