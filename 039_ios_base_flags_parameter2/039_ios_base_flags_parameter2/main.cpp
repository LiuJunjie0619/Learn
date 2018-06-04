#include <iostream>
#include <iomanip>

int main()
{
    std::cout.fill('*');
    std::cout.flags(std::ios::hex | std::ios::showbase | std::ios::internal);
    std::cout << "hex | internal: " << std::setw(12) << 42 << std::endl;

    std::cout.flags(std::ios::hex | std::ios::showbase | std::ios::left);
    std::cout << "hex|showbase|left: " << std::setw(12) << 42 << std::endl;

    std::cout.flags(std::ios::hex | std::ios::showbase | std::ios::right);
    std::cout << "hex|shwobase|right: " << std::setw(12) << 42 << std::endl;

    std::cout << "true" << true;
    std::cout.flags(std::ios::hex | std::ios::boolalpha);
    std::cout << "boolalpha: " << true << std::endl;

    std::cout.flags(std::ios::dec | std::ios::fixed );
    std::cout << "dec | fixed: " << std::setw(12) << 0.42 << std::endl;

    std::cout.flags(std::ios::dec | std::ios::scientific);
    std::cout << "dec|scientific: " << std::setw(12) << 0.42 << std::endl;


    return 0;
}
