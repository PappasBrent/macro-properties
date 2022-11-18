#include <stddef.h>

#define IF_THEN(a, b) ((a) && (b))

int if_then(int *a, int b) { return ((a) && (b)); }

int main(int argc, char const *argv[])
{
    int *p = NULL;

    IF_THEN(p, *p);

    if_then(p, (p ? (*p) : 0));

    return 0;
}
