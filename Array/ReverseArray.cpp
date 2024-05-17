#include <iostream>
using namespace std;

int reverse(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[6] = {6, 7, 9, 11, 2, 5};
    int b[5] = {2, 7, 6, 2, 5};
    reverse(arr, 6);
    reverse(b, 5);

    PrintArray(arr, 6);
    cout << endl;
    PrintArray(b, 5);
}