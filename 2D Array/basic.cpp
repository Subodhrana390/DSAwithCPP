#include <iostream>
using namespace std;

void PrintSum(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << "Sum of row " << (i + 1) << " is " << sum << endl;
    }
}

void largestSumRow(int arr[][4], int row, int col)
{
    int index = -1;
    int maxi = INT32_MIN;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        if (sum > maxi)
        {
            maxi = sum;
            index = i;
        }
    }

    cout << "Largest row " << index + 1 << " of sum is " << maxi;
}

void PrintWavyArray(int arr[][4], int row, int col)
{
    int a[row * col];

    int k = 0;
    for (int i = 0; i < col; i++)
    {
        if (i & 1)
        {
            for (int j = row - 1; j >= 0; j--)
            {
                a[k++] = arr[j][i];
            }
        }

        else
        {
            for (int j = 0; j < row; j++)
            {
                a[k++] = arr[j][i];
            }
        }
    }
    int j = 1;
    for (int i = 0; i <= k; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{

    int row = 3, col = 4;
    int arr[3][4];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout
        << "Printing Array:- " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    PrintWavyArray(arr, 3, 4);

    // PrintSum(arr, 3, 4);
    // largestSumRow(arr, 3, 4);
}