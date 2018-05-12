#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    std::ostringstream s;
    std::cout << s.tellp() << '\n';
    s << 'h';
    std::cout << s.tellp() << '\n';
    s << "ello,world ";
    std::cout << s.tellp() << '\n';
    s << 3.14 << '\n';
    std::cout << s.tellp() << '\n' << s.str();
    ////////////////////////////////////////////////
    std::ostringstream os("hello, world");
    os.seekp(7);
    os << 'W';
    os.seekp(0,std::ios_base::end);
    os << '!';
    os.seekp(0);
    os << 'H';
    std::cout << os.str() << '\n';

    return 0;
}
