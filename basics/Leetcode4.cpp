#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter any number : " << endl;
    cin >> n;

    int ans = 0, i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        ans = ans * pow(10, i) + bit;
        n = n >> 1;
        i++;
    }

    cout << (~ans & ans);
}