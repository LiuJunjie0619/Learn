#include <iostream>
#include <iomanip>

const double PI = 3.1415926535;

int main()
{
    int i = 10;
    std::cout << i << std::endl;

    std::cout.unsetf(std::ios_base::dec);
    std::cout.setf(std::ios_base::hex);
    std::cout << i << std::endl;

    std::cout.setf(std::ios_base::dec);
    std::cout << i << std::endl;
    std::cout.setf(std::ios_base::hex,std::ios_base::dec);
    std::cout << i << std::endl;

    const int WIDTH = 15;
    std::cout.setf(std::ios_base::right);
    std::cout << std::setw(WIDTH / 2) << "radius"
              << std::setw(WIDTH) << "circumference"
              << '\n';

    std::cout.setf(std::ios_base::fixed);
    for(double radius = 1; radius <= 6; radius += 0.5)
    {
        std::cout << std::setprecision(1) << std::setw(WIDTH / 2)
                  << radius
                  << std::setprecision(2) << std::setw(WIDTH)
                  << (2 * PI * radius) << '\n';
    }

    return 0;
}
