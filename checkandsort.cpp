// #include <bits/stdc++.h>
// using namespace std;

// class Solution
// {
// public:
//     void rotate(vector<int> &nums, int k)
//     {
//         vector<int> temp(nums.size());
//         for (int i = 0; i < i < nums.size(); i++)
//         {
//             temp[(i + k) % nums.size()] = nums[i]
//         }
//         nums = temp;
//         return nums;
//     }

//     bool check(vector<int> &nums)
//     {
//         int count = 0;
//         int n = nums.size();
//         for (int i = 1; i < n; i++)
//         {
//             if (nums[i - 1] > nums[i])
//                 count++;
//         }

//         if (nums[n - 1] > nums[0])
//             count++;

//         return count <= 1;
//     }

//     vector<int> reverse(vector<int> v)
//     {
//         int s = 0;
//         int e = v.size() - 1;

//         while (s < e)
//         {
//             swap(v[s++], v[e--]);
//         }
//         return v;
//     }

//     vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
//     {
//         int i = n - 1;
//         int j = m - 1;

//         int carry = 0;
//         vector<int> ans;

//         while (i >= 0 && j >= 0)
//         {
//             int val1 = a[i];
//             int val2 = b[j];

//             int sum = val1 + val2 + carry;

//             carry = sum / 10;
//             sum = sum % 10;
//             ans.push_back(sum);
//             i--;
//             j--;
//         }

//         while (i >= 0)
//         {
//             int sum = a[i] + carry;
//             carry = sum / 10;
//             sum = sum % 10;
//             ans.push_back(sum);
//             i--;
//         }

//         while (j >= 0)
//         {
//             int sum = a[j] + carry;
//             carry = sum / 10;
//             sum = sum % 10;
//             ans.push_back(sum);
//             j--;
//         }

//         while (carry != 0)
//         {
//             int sum = carry;
//             carry = sum / 10;
//             sum = sum % 10;
//             ans.push_back(sum);
//         }
//         return reverse(ans);
//     }
// };

#include <iostream>
#include <vector>

using namespace std;

vector<int> reverse(vector<int> v)
{
    int s = 0;
    int e = v.size() - 1;

    while (s < e)
    {
        swap(v[s++], v[e--]);
    }
    return v;
}

vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{
    int i = n - 1;
    int j = m - 1;
    int carry = 0;
    vector<int> ans;

    while (i >= 0 && j >= 0)
    {
        int val1 = a[i];
        int val2 = b[j];
        int sum = val1 + val2 + carry;

        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    while (i >= 0)
    {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }

    while (j >= 0)
    {
        int sum = b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }

    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }
    return reverse(ans);
}

vector<int> addToArrayForm(vector<int> &num, int k)
{
    int sum = 0;
    int n = nums.size() - 1;
    vector<int> ans;
    while (n >= 0)
    {
        sum = sum * 10 + num[n];
        n--;
    }

    int result = sum + k;

    while (result > 0)
    {
        int res = result % 10;
        ans.push_back(res);
        result /= 10;
    }
    return ans;
}

int main()
{
    vector<int> a = {9, 9, 9};
    vector<int> b = {1};

    vector<int> result = findArraySum(a, a.size(), b, b.size());

    cout << "Sum: ";
    for (int num : result)
    {
        cout << num;
    }
    cout << endl;

    return 0;
}