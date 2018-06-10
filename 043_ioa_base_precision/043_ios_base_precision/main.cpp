#include <iostream>

int main()
{
    double d = 1.234567890123456;
    std::cout << "The default precision is " << std::cout.precision() << "\n\n";
    std::cout << "with default precision d is " << d << '\n';
    std::cout.precision(12);
    std::cout << "win high percision d is " << d << '\n';

    d += 3000;
    std::cout << d << std::endl;

    std::cout.flags(std::ios::fixed);
    std::cout << d << std::endl;

    std::cout.precision(2);
    std::cout << d << std::endl;

    return 0;
}
