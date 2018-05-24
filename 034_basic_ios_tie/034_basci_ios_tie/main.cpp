#include <iostream>
#include <fstream>
#include <string>

int main()
{
    int i;
    std::cin.tie(&std::cout);
    std::cout << "Enter a number:";
    std::cin >> i;

    //////////////////////////////////////
    std::ofstream os("test.txt");
    std::ifstream is("test.txt");
    std::string value("0");
    is.tie(&os);
    os << "Hello";
    is >> value;
    std::cout << "Result after tie():\"" << value << "\"\n";

    is.clear();
    os.clear();

    value = "0";
    //is.tie(&os);
    os << "Hello";
    is >> value;
    std::cout << "Result before tie():\"" << value << "\"\n";

    is.clear();
    os.clear();

    value = "0";
    is.tie(&os);
    os << "Hello";
    is >> value;
    std::cout << "Result after tie():\"" << value << "\"\n";

    //std::cin.get();

    return 0;
}
