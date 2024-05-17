#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of n :";
    cin >> n;

    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;

    // fibonacci Series

    int a = 0;
    int b = 1;

    cout << a << "" << b << "" << endl;

    for (int i = 1; i < n; i++)
    {
        int nextNumber = a + b;
        cout << nextNumber << endl;
        a = b;
        b = sum;
    }

    bool isPrime = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 0)
    {
        cout << "not a prime number" << endl;
    }
    else
    {
        cout << "is a prime number" << endl;
    }
}