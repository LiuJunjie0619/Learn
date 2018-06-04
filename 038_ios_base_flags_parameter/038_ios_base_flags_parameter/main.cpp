#include <iostream>
#include <iomanip>

int main()
{
    std::cout.flags(std::ios::dec);
    std::cout << "dec: " << 42 << std::endl;

    std::cout.flags(std::ios::hex);
    std::cout << "hex: " << 42 << std::endl;

    std::cout.flags(std::ios::oct);
    std::cout << "oct: " << 42 << std::endl;

    std::cout.flags(std::ios::hex | std::ios::showbase);
    std::cout << "hex|showbase: " << 42 << std::endl;

    std::cout << "Left fill:\n" << std::left
              << std::setfill('*')
              << std::setw(12) << -1.23 << '\n'
              << std::setw(12) << std::hex << std::showbase << 42
              << '\n'
              << std::setw(12) << std::put_money(123,true) << "\n\n";

    std::cout.fill('*');
    std::cout.flags(std::ios::hex | std::ios::showbase | std::ios::internal);
    std::cout << "hex|internal: " << std::setw(12) << 42 << std::endl;

    return 0;
}
