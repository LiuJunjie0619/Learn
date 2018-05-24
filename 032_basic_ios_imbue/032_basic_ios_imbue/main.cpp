#include <iostream>
#include <locale>

int main()
{
    //std::wcout << L"没" << std::endl;

    std::locale loc("zh_CN.UTF-8");
    std::wcout.imbue(loc);
    std::wcout << L"测试中文输出" << std::endl;

    std::wcout.imbue(std::locale());
    std::wcout << L"没" << std::endl;
    std::wcout << L"abc" << std::endl;

    return 0;
}
