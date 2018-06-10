#include <iostream>
#include <ctime>
#include <iomanip>
#include <codecvt>

using namespace std;
int main()
{
    std::cout << "------------------------------------" << std::endl;
    std::wcout.imbue(std::locale("zh_CN.UTF-8"));

    std::time_t t = std::time(NULL);
    struct tm *newtime = std::localtime(&t);

    //std::wcout << std::put_time(newtime,L"%A %c") << '\n';
    std::wcout << std::put_time(newtime,L"%A %c") << '\n';
    std::wcout << std::wcout.getloc().name().c_str() << std::endl;

    return 0;
}
