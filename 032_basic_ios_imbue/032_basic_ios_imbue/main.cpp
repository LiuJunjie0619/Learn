#include <iostream>
#include <locale>

int main()
{
    //std::wcout << L"没" << std::endl;

    std::locale loc("zh_CN.UTF-8");
    std::wcout.imbue(loc);
    std::wcout << L"测试中文输出" << std::endl;

    std::cout << "Current locale: " << std::wcout.getloc().name() << '\n';
    std::wcout.imbue(std::locale());
    std::cout << "Global locale: " << std::cout.getloc().name() << '\n';

    return 0;
}
