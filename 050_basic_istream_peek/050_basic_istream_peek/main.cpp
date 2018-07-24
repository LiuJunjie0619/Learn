#include <iostream>
#include <sstream>

int main()
{
    char c[10],c9;
    std::cout << "Type 'abcde': ";

    c9 = std::cin.peek();
    //std::cin.getline(&c[0],9);
    std::cin.getline(c,9);

    std::cout << c9 << " " << c << std::endl;

    //////////////////////////////////////////
    std::istringstream s1("Hello, world.");
    char c1 = s1.peek();
    char c2 = s1.get();
    std::cout << "Peeked: " << c1 << " got: " << c2 << '\n';

    return 0;
}
