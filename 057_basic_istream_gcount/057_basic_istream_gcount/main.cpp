#include <iostream>
#include <sstream>

int main()
{
    std::cout << "Type the letter 'a':";
    std::ws(std::cin);

    char c[10];
    //std::cin.get(&c[0],9);
    std::cin.get(&c[0],sizeof c);
    std::cout << c << std::endl;
    std::cout << std::cin.gcount() << std::endl;

    ////////////////////////////////////////
    char x[20];
    std::istringstream stream("Hello wordl");
    stream.read(x,sizeof x);
    std::cout << "Characters extraced: " << stream.gcount();

    std::cout << std::endl;

    return 0;
}
