#include <iostream>

int main()
{
    std::cout.setf(std::ios::hex,std::ios::basefield);
    std::cout << 42 << std::endl;

    std::cout.unsetf(std::ios::hex);
    std::cout << 42 << std::endl;

    return 0;
}
