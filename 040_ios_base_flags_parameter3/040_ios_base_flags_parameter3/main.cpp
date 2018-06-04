#include <iostream>
#include <iomanip>
#include <sstream>

int main()
{
    std::cout.fill('*');

    std::cout << 4.0 << std::endl;
    std::cout.flags(std::ios::dec | std::ios::showpoint);
    std::cout << "dec|showpoint:" << std::setw(12) << 4.0 << std::endl;

    std::cout.fill(' ');
    std::cout.flags(std::ios::dec | std::ios::showpos);
    std::cout << "dec | showpos: " << std::setw(12) << 4.0 << std::endl;

    char c1,c2,c3;
    std::istringstream("a b c") >> c1 >> c2 >> c3;
    std::cout << "Default behavior: c1 = " << c1 << " c2 = " << c2
              << " c3 = " << c3 << '\n';

    std::istringstream is("a b c");
    is.flags(is.flags() & ~std::ios::skipws);
    is >> c1 >> c2 >> c3;
    std::cout << "noskipws behavior: c1 = " << c1 << " c2 = " << c2
              << " c3 = " << c3 << '\n';

    std::cout << std::unitbuf;
    std::cout << "abc" << std::endl;

    std::cout.flags(std::ios::hex | std::ios::showbase);
    std::cout << 42 << std::endl;
    std::cout.flags(std::ios::hex | std::ios::showbase | std::ios::uppercase);
    std::cout << "hex|uppercase: " << 42 << std::endl;

    return 0;
}
