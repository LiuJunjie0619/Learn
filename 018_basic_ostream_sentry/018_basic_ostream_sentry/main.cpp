#include <iostream>

struct Foo
{
    char n[6];
};

std::ostream & operator<<(std::ostream & is,Foo & f)
{
    std::ostream::sentry s(is);
    if(s)
    {
        is.write(f.n,5);
    }
    return is;
}
int main()
{
    Foo f = {"abcde"};
    std::cout << f << '\n';

    return 0;
}
