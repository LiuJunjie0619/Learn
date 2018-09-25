#include <iostream>
#include <string>
#include <sstream>

int main()
{
    std::string str = "Hello, world.";
    std::stringstream in(str);
    std::string word1;
    std::string word2;

    in >> word1;
    in.seekg(0);
    in >> word2;

    std::cout << "word1:" << word1 << '\n'
              << "word2:" << word2 << '\n';

    return 0;
}
