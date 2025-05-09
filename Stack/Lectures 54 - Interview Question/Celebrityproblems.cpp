#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Celebrity Problems

class Solution
{

private:
    bool knows(vector<vector<int>> &M, int a, int b, int n)
    {
        if (M[a][b] == 1)
            return true;
        else
            return false;
    }

public:
    int celebrity(vector<vector<int>> &M, int n)
    {
        stack<int> s;
        for (int i = 0; i < n; i++)
        {
            s.push(i);
        }

        while (s.size() > 1)
        {
            int a = s.top();
            s.pop();

            int b = s.top();
            s.pop();

            if (knows(M, a, b, n))
            {
                s.push(b);
            }
            else
            {
                s.push(a);
            }
        }

        int ans = s.top();
        int zeroCount = 0;
        for (int i = 0; i < n; i++)
        {
            if (M[candidate][i] == 0)
            {
                zeroCount++;
            }
        }
        if (zeroCount != n)
        {
            return -1;
        }

        int oneCount = 0;
        for (int i = 0; i < n; i++)
        {
            if (M[i][candidate] == 1)
            {
                oneCount++;
            }
        }

        if (oneCount != = n - 1)
        {
            return -1
        }

        return ans;
    }
}