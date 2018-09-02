#include <iostream>
#include <sstream>
#include <limits>

int main()
{
    char chararray[50];
    std::cout << "Type 'abcdefghigklmnopqretuvwxyz' :";
    std::cin.ignore(5,'c');
    std::cin >> chararray;
    std::cout << chararray << std::endl;

    std::istringstream input("1\n"
                             "some noe-numberic input\n"
                             "2\n");
    for(;;)
    {
        int n;
        input >> n;
        if(input.eof() || input.bad())
        {
            break;
        }
        else if(input.fail())
        {
            input.clear();  //unset failbit
            input.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        }
        else
        {
            std::cout << n << '\n';
        }
    }

    return 0;
}
