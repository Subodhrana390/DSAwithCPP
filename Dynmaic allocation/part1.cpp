#include <iostream>
using namespace std;

void update(int &n)
{
    n++;
}

int getSum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    // int i = 5;

    // int &j = i;
    // cout << i << endl;
    // update(i);
    // cout << i << endl;
    // cout << i << endl;
    // // variabl size array
    // char *ch = new char; // Dynamic memory allocation

    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << getSum(arr, n);
}