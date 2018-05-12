#include <iostream>
using std::cout;
using std::endl;

int main()
{
    float fTest = 1.234669f;
    char cTest = 'a';
    double dTest = 3.1415926;
    int nTest = 100;
    char * pTest = "abc";

    cout << fTest << endl;
    cout << cTest << endl;
    cout << dTest << endl;
    cout << nTest << endl;
    cout << pTest << endl;
    cout << *pTest << endl;

    return 0;
}
