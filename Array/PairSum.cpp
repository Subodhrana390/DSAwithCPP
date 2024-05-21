#include <iostream>
using namespace std;

// vector<vector<int>> pairSum(vector<int> &arr, int s)
// {
//     vector<vector<int>> ans;
//     for (int i = 0; i < s; i++)
//     {
//         for (int j = i + 1; j < s; j++)
//         {
//             if (arr[i] + arr[j] == s)
//             {
//                 vector<int> temp;
//                 temp.push_back(min(arr[i], arr[j]));
//                 temp.pushback(max(arr[i], arr[j]));
//                 ans.push_back(temp)
//             }
//         }
//     }
//     sort(ans.begin(), ans.end());
//     return ans;
// }
// vector<vector<int>> trpletSum(vector<int> &arr, int s)
// {
// vector<vector<int>> ans;
// for (int i = 0; i < s; i++)
// {
//     for (int j = i + 1; j < s; j++)
//     {
//         for (int k = j + 1; k < s; k++)
//         {

//             if (arr[i] + arr[j] + arr[j] == s)
//             {
//                 vector<int> temp;
//                 temp.push_back(min(arr[i], arr[j]));
//                 temp.pushback(max(arr[i], arr[j]));
//                 ans.push_back(temp);
//             }
//         }
//     }
// }
// sort(ans.begin(), ans.end());
// return ans;
// }

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortOne(int arr[], int n)
{
    int left = 0, right = n - 1;
    while (left < right)
    {
        while (arr[left] == 0)
        {
            left++;
        }

        while (arr[right] == 1)
        {
            right--;
        }
        if (left < right)
            swap(arr[left], arr[right]);
        left++;
        right--;
    }
}
int main()
{
    int arr[8] = {1,
                  1,
                  0,
                  0,
                  0,
                  0,
                  1,
                  0};

    sortOne(arr, 8);
    printArray(arr, 8);
}