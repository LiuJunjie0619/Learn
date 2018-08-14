#include <iostream>
#include <sstream>
#include <vector>
#include <array>

int main()
{
    char c[10];
    std::cin.getline(&c[0],5,'2');
    std::cout << c << std::endl;

    /////////////////////////////////
    std::istringstream input("abc|def|gh|i|jkl");
    std::vector<std::array<char,4>> v;

    for(std::array<char,4> a; input.getline(&a[0],4,'|');)
    {
        v.push_back(a);
    }

    for(auto &a : v)
    {
        std::cout << &a[0] << std::endl;
    }

    return 0;
}
