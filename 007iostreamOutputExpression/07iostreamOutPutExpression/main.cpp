#include <iostream>

void max(int nVal1, int nVal2)
{
    using std::cout;
    using std::endl;
    cout << (nVal1 > nVal2)? nVal1 : nVal2;
    cout << endl;
    cout << (nVal1 <= nVal2)? nVal1 : nVal2;
    cout << endl;
    cout << ((nVal1 <= nVal2)? nVal1 : nVal2);
    cout << endl;
}

int main()
{
    using std::cout;
    using std::endl;

    cout << ((2>3)?true:false) << endl;
    max(50,20);

    return 0;
}
