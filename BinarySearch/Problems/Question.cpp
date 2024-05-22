#include <iostream>
using namespace std;

int FirstOccurance(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastoccurance(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{

    int arr[5] = {1,
                  2,
                  3, 3, 5};

    cout << "First Occurance of key 3 is " << FirstOccurance(arr, 5, 3) << endl;
    cout << "Last occurance of key 3 is " << lastoccurance(arr, 5, 3) << endl;
    cout << "Total Occurance of key 3 is " << lastoccurance(arr, 5, 3) - FirstOccurance(arr, 5, 3) + 1;
}
