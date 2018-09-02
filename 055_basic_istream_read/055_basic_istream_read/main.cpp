#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdint>

int main()
{
    char c[10];
    int count = 5;

    std::cout << "Type 'abcdefg': ";

    std::cin.read(&c[0], count);
    c[count] = 0;

    std::cout << c << std::endl;

    //////////////////////////////////
    //read() is often used for binary I/O
    std::string bin = {'\x12', '\x12', '\x12', '\x12', '\x12'};
    std::istringstream raw(bin);
    std::uint32_t n;
    raw.read(reinterpret_cast<char*>(&n), sizeof n);
    std::cout << std::hex << std::showbase << n << '\n';

    //prepare file for next snippet
    std::ofstream os("test.txt",std::ios::binary);
    for(unsigned i=0; i < 10; ++i)
    {
        os << "abcd" << i << "\n";
    }
    os.close();

    //read entire file into string
    std::ifstream is;
    is.open("test.txt",std::ios::binary | std::ios::ate);   //二进制打开；指针移动到文件尾部
    //if(std::ifstream is{"test.txt",std::ios::binary | std::ios::ate})
    if(is)
    {
        auto size = is.tellg();
        std::string str(size,'\0'); //construct string to stream size
        is.seekg(0);        //移动指针到文件到开始位置
        is.read(&str[0],size);
        std::cout << str << '\n';
    }
    else
    {
        std::cerr << "Could not open test.txt\n";
    }

    return 0;
}
