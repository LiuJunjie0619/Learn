#include <iostream>

int main()
{
    char * z = "Hello";
    wchar_t y[2] = {0,0};
    std::cout << z[0] << std::endl;
    //y[0] = std::wcout.widen(z[0]);
    y[0] = z[0];
    std::wcout << &y[0] << std::endl;

    return 0;
}
