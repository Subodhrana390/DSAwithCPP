#include <iostream>
#include <vector>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }

    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }

    while (j < m)
    {
        arr3[k++] = arr2[j++];
    }
}

void print(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void moveZeros(vector<int> &nums)
{
    int size = nums.size();
    int nonZero = 0;
    for (int j = 0; j < size; j++)
    {
        if (nums[j] != 0)
        {
            swap(nums[j], nums[nonZero]);
            nonZero++;
        }
    }
}

int main()
{
    // int arr1[5] = {1, 3, 5, 7, 9};
    // int arr2[3] = {2,
    //                4,
    //                6};

    // int arr3[8] = {0};
    // merge(arr1, 5, arr2, 3, arr3);
    // print(arr3, 8);

    vector<int> arr4 = {0, 1, 0, 3, 12};
    moveZeros(arr4);
    print(arr4, 5);
}