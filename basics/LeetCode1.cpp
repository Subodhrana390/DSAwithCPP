#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0,
        prod = 1;
    while (n != 0)
    {
        int rem = n % 10;
        prod = prod * rem;
        sum = sum + rem;
        n /= 10;
    }

    cout << "subtract from sum and prod is  " << (prod - sum);
}
