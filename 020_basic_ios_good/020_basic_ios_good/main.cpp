#include <iostream>

int main()
{
    bool b = std::cout.bad();
    std::cout << std::boolalpha;
    std::cout << b << std::endl;

    b = std::cout.good();
    std::cout << b << std::endl;

    std::cin.get();
    return 0;
}
