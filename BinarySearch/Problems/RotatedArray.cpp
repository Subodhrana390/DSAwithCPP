#include <iostream>
using namespace std;

int getPivotElement(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int BinarySearch(int arr[], int s, int e, int key)
{
    int left = s, right = e;
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

int ElementinRotatedArray(int arr[], int n, int k)
{

    int pivot = getPivotElement(arr, n);
    cout << pivot << endl;
    if (k >= arr[pivot] && k << arr[n - 1])
    {
        return BinarySearch(arr, pivot, n - 1, k);
    }
    else
    {
        return BinarySearch(arr, 0, pivot - 1, k);
    }
}

int main()
{
    int arr[] = {12, 15, 18, 2, 3, 4};

    cout << "Element is " << ElementinRotatedArray(arr, 6, 3);
}