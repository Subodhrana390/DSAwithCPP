#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPowerofTwo(int n)
    {
        int ans = 1;
        for (int i = 0; i <= 30; i++)
        {
            if (ans == n)
            {
                return true;
            }
            if (ans < INT32_MAX / 2)
                ans = ans * 2;
        }
        return false;
    }
};

int main()
{
    int n;
    cin >> n;
    Solution soln = Solution();
    bool result = soln.isPowerofTwo(n);
    if (result == 1)
        cout << "true";
    else
    {
        cout << "false";
    }
}