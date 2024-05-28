#include <iostream>
using namespace std;

int isPossible(int stall[], int k, int mid)
{
    int cowCount = 1;
    int lastPos = stall[0];
    for (int i = 0; i < stall.size(); i++)
    {
        if (stall[i] - lastPos >= mid)
        {
            cowCount++;
            if (cowCount == k)
            {
                return k;
            }
            lastPos = stall[i];
        }
    }
    return false;
}

int aggressiveCow(int stall[], int k)
{

    sort(stall.begin(), stall.end());
    int s = 0;
    int maxi = 1;
    for (int i = 0; i < n; i++)
    {
        maxi = max(max, stall[i]);
    }
    e = maxi;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(stall, k, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return mid;
}

int main()
{
}