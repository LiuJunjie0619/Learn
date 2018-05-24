#include <iostream>
#include <fstream>

int main()
{
    int ivalue;
    try
    {
        //std::ifstream in("in.txt");
        //in.exceptions(std::ifstream::failbit);
        //in >> ivalue;

        std::cin >> ivalue;
        std::cin.exceptions(std::ostream::failbit);
    }
    catch(std::ios_base::failure &fail)
    {
        std::cout << "exception\n" << std::endl;
    }

    std::cout << std::cout.exceptions() << std::endl;
    std::cout.exceptions(std::ios::eofbit);
    std::cout << std::cout.exceptions() << std::endl;

    try
    {
        std::cout.clear(std::ios::eofbit);
    }
    catch(std::exception &e)
    {
        std::cout.clear();
        std::cout << "Caught the exception." << std::endl;
        std::cout << "Exception class: " << typeid(e).name() << std::endl;
        std::cout << "Exception description: " << e.what() << std::endl;
    }
    return 0;
}
