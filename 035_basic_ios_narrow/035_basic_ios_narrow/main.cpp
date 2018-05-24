#include <iostream>

int main()
{
    wchar_t *x = L"test";
    char y[10];
    std::cout << x[0] << std::endl;
    std::wcout << x << std::endl;
    y[0] = std::wcout.narrow(x[0],'.');
    std::cout << y[0] << std::endl;

    y[0] = std::wcout.narrow(x[1],'.');
    std::cout << y[0] << std::endl;

    return 0;
}
