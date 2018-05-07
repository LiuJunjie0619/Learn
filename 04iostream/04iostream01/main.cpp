#include <iostream>

struct Foo
{
    int n;
    Foo()
    {
        std::cout << "static constructor." << std::endl;
    }
    ~Foo()
    {
        std::cout << "static destructor." << std::endl;
    }
};
Foo f;
int main()
{
    std::cout << "main function." << std::endl;

    return 0;
}
