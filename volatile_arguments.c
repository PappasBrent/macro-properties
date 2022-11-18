#define SET_ERR(err) (err = 1)

int set_err(int *err) { return *err = 1; }

int main(int argc, char const *argv[])
{
    int err = 0;

    SET_ERR(err);
    set_err(&err);

    return 0;
}
