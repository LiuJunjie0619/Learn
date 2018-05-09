#include <iostream>
#include <chrono>

template<typename Diff>
void log_progress(Diff d)
{
    std::cout << "..("
              << std::chrono::duration_cast<std::chrono::milliseconds>(d).count()
              << "ms).." << std::flush;
}

int main()
{
    volatile int sink = 0;
    std::setvbuf(stdout,NULL,_IOLBF,1024);//设置控制台输出为行缓存模式，把缓冲区与流相关内容不会立即输出
    auto t1 = std::chrono::high_resolution_clock::now();
    for(int j=0;j<5;++j)
    {
        for(int n=0;n<10000;++n)
        {
            for(int m=0;m<20000;++m)
            {
                sink += m*n;//do some work
            }
        }
        auto now = std::chrono::high_resolution_clock::now();
        log_progress(now - t1);
    }
    std::cout << "\n";

    return 0;
}
