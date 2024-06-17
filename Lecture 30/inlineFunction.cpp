#include <iostream>
using namespace std;

// reduce function call overhead

inline getMax(int &a, int &b)
{
    return a > b ? a : b;
}

int main()
{
    int a = 1, b = 2;

    int ans = 0;
    ans = getMax(a, b);
    cout << ans << endl;
    a = a + 3;
    b = b + 1;
    ans = getMax(a, b);
    cout << ans << endl;
}