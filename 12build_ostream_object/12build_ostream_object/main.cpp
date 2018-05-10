#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>

int main()
{
    //文件形式
    std::filebuf fb;
    fb.open("test.txt",std::ios::out);
    std::ostream os(&fb);
    os << "Test sentence\n" << std::flush;
    fb.close();

    //错误的方式
    //std::ostream myout(std::cout);

    //输出缓冲区
    std::ostream myout(std::cout.rdbuf());
    myout << "Test myout" << std::endl;

    //用移动的构造函数
    std::ostringstream buf2("test",std::ios_base::ate);
    std::ostringstream s2(std::move(buf2));
    myout << s2.str() << std::endl;

    return 0;
}
