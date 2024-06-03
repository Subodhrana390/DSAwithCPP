#include <iostream>
#include <vector>
using namespace std;

void RotateArray(vector<int> &nums, int k)
{
    vector<int> temp(nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
        temp[(i + k) % nums.size()] = nums[i];
    }
    nums = temp;
}

void print(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {1,
                       2,
                       3,
                       4,
                       5,
                       6,
                       7};
    RotateArray(arr, 3);
    print(arr, 7);
}