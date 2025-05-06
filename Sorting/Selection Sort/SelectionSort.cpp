#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main()
{
    cout << "Subodh Rana URN : 2302689\n";
    int arr[5] = {6, 2, 8, 4, 10};

    cout << "Original UnSorted Array" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    SelectionSort(arr, 5);
    cout << "Sorted Array " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}