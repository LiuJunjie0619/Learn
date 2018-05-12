#include <iostream>

int main()
{
    int x =73;
    std::cout.put(x);    //未格式化输出
    std::cout << std::endl;

    int n = 0x41424344;
    std::cout.write(reinterpret_cast<char *>(&n),sizeof n) << '\n';

    char c[] = "This is sample text.";
    std::cout.write(c,4) << std::endl;

    return 0;
}
