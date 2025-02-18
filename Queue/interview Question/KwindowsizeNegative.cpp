#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K)
{
    deque<long long int> dq;  // Deque to store indices of negative numbers
    vector<long long> ans;   // Result vector

    // Process the first window of size K
    for (int i = 0; i < K; i++)
    {
        if (A[i] < 0)
        {
            dq.push_back(i);
        }
    }

    // Store the answer for the first window
    if (!dq.empty())
    {
        ans.push_back(A[dq.front()]); // Add the first negative integer in the deque
    }
    else
    {
        ans.push_back(0); // No negative number in the window
    }

    // Process the rest of the array
    for (int i = K; i < N; i++)
    {
        // Remove elements outside the current window
        if (!dq.empty() && dq.front() <= i - K)
        {
            dq.pop_front();
        }

        // Add the current element if it's negative
        if (A[i] < 0)
        {
            dq.push_back(i);
        }

        // Store the result for the current window
        if (!dq.empty())
        {
            ans.push_back(A[dq.front()]);
        }
        else
        {
            ans.push_back(0);
        }
    }

    return ans;
}

// Example usage
int main()
{
    long long int A[] = {-8, 2, 3, -6, 10};
    long long int N = 5;
    long long int K = 2;

    vector<long long> result = printFirstNegativeInteger(A, N, K);

    for (long long x : result)
    {
        cout << x << " ";
    }

    return 0;
}
