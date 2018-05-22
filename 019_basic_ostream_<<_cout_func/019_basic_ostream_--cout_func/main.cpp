#include <iostream>
#include <string>

std::ios_base &  hex2(std::ios_base & ib)
{
    ib.unsetf(std::ios_base::dec);
    ib.setf(std::ios_base::hex);
    return ib;
}

std::basic_ostream<char,std::char_traits<char>> &
somefunc(std::basic_ostream<char,std::char_traits<char>> & i)
{
    if(&i == &std::cout)
    {
        i << "i is cout " << std::endl;
    }
    return i;
}

class CTxtStreambuf: public std::basic_streambuf<char , std::char_traits<char>>
{
public:
    CTxtStreambuf(char * _pszTest)
    {
        pszText = _pszTest;
        setg(pszText,pszText,pszText + strlen(pszText));
    }
public:
    char * pszText;
};

int main()
{
    std::cout << somefunc;
    std::cout << 21 << std::endl;
    hex2(std::cout);
    std::cout << 21 << std::endl;

    CTxtStreambuf f("text in streambuf");
    std::cout << &f << std::endl;


    return 0;
}
