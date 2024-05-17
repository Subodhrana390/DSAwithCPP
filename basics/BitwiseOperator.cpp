#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;

    cout << "a&b = " << (a & b) << endl;
    cout << "a|b = " << (a | b) << endl;
    cout << "~a = " << ~a << endl;
    cout << "a^b = " << (a ^ b) << endl;

    cout << "17 << 1  " << (17 << 1) << endl;
    cout << "17 << 2  " << (17 << 2) << endl;
    cout << "17 >> 1  " << (17 >> 1) << endl;
    cout << "17 >> 1  " << (17 >> 2) << endl;

    int i = 7;

    cout << "++i = " << ++i << endl;
    cout << "i++ = " << i++ << endl;
    cout << "--i = " << --i << endl;
    cout << "i-- = " << i-- << endl;
}
