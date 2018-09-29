#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    std::ostringstream oss("test",std::ios_base::ate);
    oss << 100 << std::endl;
    oss << 10.5 << std::endl;
    oss << "OK" << std::endl;
    std::cout << oss.str() << std::endl;

    oss.str("");
    oss << "this is new word" << std::endl;
    std::cout << oss.str() << std::endl;

    return 0;
}
