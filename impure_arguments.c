
#define TWICE(x) ((x) + (x))

int post_incr(int *x) { return (*x)++; }

int twice_repeat_side_effects(int f(int *), int *x)
{
    return ((f(x)) + (f(x)));
}

int twice_dont_repeat_side_effects(int x)
{
    return ({int a = x; ((a) + (a)); });
}

int main(int argc, char const *argv[])
{
    int x = 0;

    TWICE(x++);

    twice_repeat_side_effects(post_incr, &x);

    twice_dont_repeat_side_effects(x);

    return 0;
}
