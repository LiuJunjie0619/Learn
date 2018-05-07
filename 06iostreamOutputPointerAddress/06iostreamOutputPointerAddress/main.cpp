#include <iostream>

using std::cout;
using std::endl;

int main()
{
    const char * pStr = "Test";
    cout << pStr << endl;
    cout << *pStr << endl;
    cout << "Test Address:" << &pStr << endl;
    cout << "char * pStr Address:" <<static_cast<void *>(const_cast<char*>(pStr)) << endl;
    cout << "---------------" << endl;
    int* pInt = new int(100);
    cout << "100 Address:" <<&pInt << endl;
    cout << "int * pInt Address:" << pInt << endl;
    cout << "int * pInt Address:" << static_cast<void *>(pInt) << endl;
    cout << "pInt value:" << *pInt << endl;

    return 0;
}
