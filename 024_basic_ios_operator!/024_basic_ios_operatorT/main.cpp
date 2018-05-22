#include <iostream>
#include <fstream>
#include <cstdlib>

int main()
{
    std::ifstream file("test.txt");
    if(!file)
    {
        std::cout << "File opening failed\n";
        return EXIT_FAILURE;
    }

    for(int n;file >> n;)
    {
        std::cout << n << ' ';
    }
    std::cout << '\n';

    if(file.bad())
    {
        std::cout << "I/O error while reading\n";
    }
    else if(file.eof())
    {
        std::cout << "End of file reached successfully\n";
    }
    else if(file.fail())
    {
        std::cout << "Non-integer data encountered\n";
    }

    return 0;
}
