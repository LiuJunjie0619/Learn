#include <iostream>
#include <sstream>

int main()
{
    char c[10],c2,c3;
    c2 = std::cin.get();
    c3 = std::cin.get();
    std::cin.putback(c2);
    std::cin.getline(&c[0],9);
    std::cout << c << std::endl;

    std::stringstream s1("Hello, world.");
    s1.get();
    if(s1.putback('Y'))
        std::cout << s1.rdbuf() << std::endl;
    else
        std::cout << "putback failed.\n";

    std::istringstream s2("Hello, world.");
    //s2.clear();
    s2.get();
    if(s2.putback('Y'))
        std::cout << s2.rdbuf() << '\n';
    else
        std::cout << "01putback failed.\n";

    s2.clear();
    if(s2.putback('H'))
        std::cout << s2.rdbuf() << '\n';
    else
        std::cout << "02putback failed\n";

    s2.clear();
    if(s2.putback('H'))
        std::cout << s2.rdbuf() << '\n';
    else
        std::cout << "03putback failed\n";

    s2.clear();
    if(s2.putback('H'))
        std::cout << s2.rdbuf() << '\n';
    else
        std::cout << "04putback failed\n";

    std::cin.get();

    return 0;
}
