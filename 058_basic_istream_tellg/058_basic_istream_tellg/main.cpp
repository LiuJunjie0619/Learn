#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

int main()
{
    std::cout << std::endl;
    std::string str = "Hello, world";
    std::istringstream in(str);
    std::string word;
    in >> word;
    std::cout << "After reading the word \"" << word << "\" tellg() returns " << in.tellg() << std::endl;

    //////////////////////////////////////////////////
    std::ifstream file;
    char c;
    std::streamoff i;
    file.open("basic_istream_tellg.txt");
    i = file.tellg();
    file >> c;
    std::cout << c << " " << i << std::endl;

    i = file.tellg();
    file >> c;
    std::cout << c << " " << i << std::endl;

    i = file.tellg();
    std::cout << "Current i:" << i << std::endl;

    return 0;
}
