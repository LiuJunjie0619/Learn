#include <iostream>
#include <sstream>

int main()
{
    {
        char c[10],c2;
        std::cout << "Type 'abc': ";
        c2 = std::cin.get();
        std::cin.unget();
        std::cin.getline(&c[0],9);
        std::cout << c << std::endl;
    }
    std::istringstream s1("Hello, world.");
    char c1 = s1.get();
    if(s1.unget())
    {
        char c2 = s1.get();
        std::cout << "Got:" << c1 << " got again:" << c2 << '\n';
    }

    std::cin.get();
    return 0;
}
