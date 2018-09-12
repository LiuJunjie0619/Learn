#include <iostream>
#include <iostream>
#include <sstream>

int main()
{
    char c[10] = {0};
    int count = 5;
//    std::cout << "Type 'abcdefgh':" ;

//    //cin.read blocks until user types input
//    std::cin.read(&c[0],2);

//    std::streamsize n = std::cin.readsome(&c[0],count);

//    c[n] = 0;
//    std::cout << n << " characters read" << std::endl;
//    std::cout << c << std::endl;

    /////////////////////////////////////////////////
    std::istringstream input("This is same text.");     //std::stringbuf makes its entire buffer available for unblocking read
    input.readsome(c,5);                                //reads 'This ' and stores in c[0] .. c[4]
    std::cout << c << std::endl;

    input.readsome(c,9);                                //reads 'is sample ' and stores in c[0] .. c[8]
    std::cout << c << std::endl;

    return 0;
}
