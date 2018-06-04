#include <iostream>

int main()
{
    std::cout << std::cout.flags() << std::endl;
    std::cout << true << std::endl;

    std::cout.flags(std::ios::dec | std::ios::boolalpha);

    std::cout << std::cout.flags() << std::endl;
    std::cout << true << std::endl;


    return 0;
}
