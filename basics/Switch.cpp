#include <iostream>
using namespace std;

int power(int a, int b)
{
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

bool isEven(int n)
{
    if (n & 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{

    int a, b;
    cin >> a;
    cin >> b;

    // cout << power(a, b);
    // cout <<
}