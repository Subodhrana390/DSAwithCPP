#include <iostream>
#include <vector>
using namespace std;

vector<int> revereArray(vector<int> &arr, int m)
{
    int s = m;
    int e = arr.size() - 1;
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    return arr;
}

int main()
{
    vector<int> arr;

    arr.push_back(11);
    arr.push_back(7);
    arr.push_back(3);
    arr.push_back(12);
    arr.push_back(4);

    vector<int> ans = revereArray(arr, 2);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}