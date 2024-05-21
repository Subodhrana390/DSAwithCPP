#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
    int left = 0, right = n - 1;
    int mid = left + (right - left) / 2;
    while (left <= right)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
        mid = left + (right - left) / 2;
    }
    return -1;
}

int main()
{
    int arr[] = {2,
                 5,
                 6,
                 8,
                 11,
                 19,
                 23,
                 27};

    cout << "index of 23 is " << BinarySearch(arr, 7, 23);
}
