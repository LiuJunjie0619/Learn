#include <iostream>
#include <sstream>

int main()
{
    char c[10];

    c[0] = std::cin.get();      //1
    std::cin.get(c[1]);         //2
    std::cin.get(&c[2], 3);     //3
    std::cin.get(&c[4], 4, '7');     //4
    std::cout << c <<std::endl;

    ///////////////////////////////////////
    std::istringstream s1("Hello, world.");
    char c1 = s1.get();         //read 'H'
    std::cout << "after reading " << c1 << ", gcount() == " << s1.gcount() << '\n';

    char c2;
    s1.get(c2);             //read 'e'

    char str[5];
    s1.get(str,5);          //read "llo," 遇到空格，终止读取
    std::cout << "after reading " << str << ", gcount() == " << s1.gcount() << '\n';
    std::cout << c1 << c2 << str << "|";

    s1.get(*std::cout.rdbuf());  //5 reads the rest, not including '\n'
    std::cout << "\nAfter the last get(), gcount() == " << s1.gcount() << '\n';


    return 0;
}
