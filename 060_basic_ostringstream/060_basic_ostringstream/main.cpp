#include <iostream>
#include <sstream>

int main()
{
    std::ostringstream buf2("test2", std::ios_base::app);
    buf2 << 1 << ' ';
    buf2.setf(std::ios_base::showbase | std::ios_base::hex,
              std::ios_base::basefield | std::ios_base::showbase);
    buf2 << 42;
    //    buf2.setf(std::ios_base::showbase | std::ios_base::hex,
    //              std::ios_base::basefield | std::ios_base::showbase);
    std::cout << buf2.str() << '\n';

    return 0;
}
