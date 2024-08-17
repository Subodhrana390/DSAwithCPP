#include <iostream>
using namespace std;

int sum(int a, int b)
{
     while (b != 0) {
            
            unsigned int carry = (unsigned int)(a & b) << 1;
            a = a ^ b;
            b = carry;
        }
        return a;
}

int main()
{
    cout << sum(1, 2) << endl;
}