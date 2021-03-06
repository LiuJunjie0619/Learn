#include <iostream>
#include <sstream>

int main()
{
    std::istringstream s("1 2 3 error");
    int n;
    std::cout << std::boolalpha << "(bool)s is " << (bool)s << '\n';
    while(s >> n)
    {
        std::cout << n <<'\n';
    }
    std::cout << std::boolalpha << "(bool)s is " << (bool)s << '\n';
    std::cout << (bool)(&std::cout != 0) << std::endl;       //Stream is still good

    return 0;
}
