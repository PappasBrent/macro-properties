#define ID(x) x

struct
{
    int a;
} g;

// Solution is to give this struct a name so we can define
// a function that has it as its return type

// struct g
// {
//     int a;
// } g;

// struct g id(struct g g) { return g; }

int main(int argc, char const *argv[])
{

    ID(g);

    // id(g);

    return 0;
}
