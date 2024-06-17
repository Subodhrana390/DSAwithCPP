#include <iostream>
using namespace std;

bool isSorted(int *arr, int n)
{
    if (n == 0 || n == 1)
        return 1;
    if (arr[0] > arr[1])
        return false;
    else
        return isSorted(arr + 1, n - 1);
}

int main()
{
    int arr[5] = {2, 4, 9, 8, 10};
    int size = 5;

    if (isSorted(arr, size))
        cout << "Array is Sorted " << endl;
    else
        cout << "not sorted " << endl;
}