#define ADDR(x) (&(x))

int *addr(int *x) { return (&(*x)); }

int main(int argc, char const *argv[])
{
    int x = 0;

    ADDR(x);

    addr(&x);

    return 0;
}
