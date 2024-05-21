#include <iostream>
using namespace std;

int findunique(int arr[], int size)
{
    int ans = 0;
    int for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
}