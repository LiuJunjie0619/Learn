#include <iostream>
#include <string>
#include <fstream>
#include <utility>

int main()
{
    std::ofstream f0;
    std::ofstream f1("test.bin",std::ios_base::binary);
    std::string name = "example.txt";
    std::ofstream f2(name);
    std::ofstream f3(std::move(f1));

    return 0;
}
