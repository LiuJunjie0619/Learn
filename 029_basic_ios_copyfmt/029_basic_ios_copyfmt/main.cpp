#include <iostream>
#include <fstream>

int main()
{
    std::ofstream out;
    std::cout << std::boolalpha ;

    out.copyfmt(std::cout);         //cipy everything except rdstate and rdbuf
    out.clear(std::cout.rdstate()); //copy rdstate
    out.basic_ios<char>::rdbuf(std::cout.rdbuf());  //share the buffer

    out << "Hello, world\n";
    out << true << std::endl;
    return 0;
}
