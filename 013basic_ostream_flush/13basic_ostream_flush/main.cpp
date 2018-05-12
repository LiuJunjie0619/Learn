#include <iostream>
#include <thread>
#include <chrono>

void f()
{
    std::cout << "OUtput from thread...";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "...thread calls flush()\n";
    std::cout.flush();
}

int main()
{
    std::thread t1(f);
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::clog << "OutPut from main" << std::endl;
    t1.join();
    return 0;
}
