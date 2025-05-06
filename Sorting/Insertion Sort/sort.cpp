#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    cout << "Subodh Rana URN : 2302689\n";
    int arr[] = {1,
                 7,
                 5,
                 3,
                 11};
    cout << "Original UnSorted Array" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    InsertionSort(arr, 5);
    cout << "Sorted Array " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}