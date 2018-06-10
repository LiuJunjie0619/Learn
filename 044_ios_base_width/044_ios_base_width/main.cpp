#include <iostream>

int main()
{
    std::cout.fill('*');
    std::cout.width(20);
    std::cout << std::cout.width() << std::endl;

    std::cout << std::cout.width() << std::endl;
    std::cout << std::cout.width(10) << std::endl;
    std::cout << "abc" << std::endl;

    std::cout.width(10);
    std::cout << "abc" << std::endl;

    return 0;
}
