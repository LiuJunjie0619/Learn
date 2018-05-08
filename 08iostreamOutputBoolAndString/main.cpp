#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>

int main()
{
    std::cout << true << " " << false << std::endl;
    std::cout << std::boolalpha << true << " " << false << std::endl;

    std::vector < std::string > vStr;
    vStr.push_back("a");
    vStr.push_back("b");
    vStr.push_back("c");

    for(auto & it : vStr)
    {
        std::cout << it << std::endl;
    }

    std::ostream_iterator<std::string> Out(std::cout," ");
    std::copy(vStr.begin(),vStr.end(),Out);
    std::cout << std::endl;

    return 0;
}
