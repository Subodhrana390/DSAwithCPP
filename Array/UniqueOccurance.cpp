#include <iostream>
using namespace std;

void findUnqiueOccurance()
{
}

int findDuplicate(vector<int> &arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }

    for (int i = 1; i < arr.size(); i++)
    {
        ans = ans ^ i;
    }
    return ans;
}

void ArrayIntersection(int arr[], int n)
{
    vector<int> ans;
    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (arrp1[i] == arr2[j])
        {
            ans.push_back(element);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
            i++;
        else
        {
            j++;
        }
    }
    return ans;
}
int main()
{
    int arr[] = {1, 2, 2, 1, 1, 3};
}