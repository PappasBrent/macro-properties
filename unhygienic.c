#define GET_ERR() (err)

int get_err(int err) { return err; }

int main(int argc, char const *argv[])
{
    int err = 0;

    GET_ERR();
    get_err(err);

    return 0;
}
