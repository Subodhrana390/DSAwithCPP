#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter any number : " << endl;
    cin >> n;

    int sum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if ((sum > (INT32_MAX / 10)) || (sum < (INT32_MIN / 10)))
            return 0;
        sum = sum * 10 + digit;
        n = n / 10;
    }
    cout << sum;
}