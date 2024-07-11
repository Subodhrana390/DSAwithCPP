#include <iostream>
#include <vector>

void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
{
    if (index >= nums.size())
    {

        ans.push_back(output);
        return;
    }

    solve(nums, output, index + 1, ans);
    int element = nums[index];
    output.push_back(element);
    solve(nums, output, index + 1, ans);
}

vector<vector<int>> subSets(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(nums, output, index, ans);
    return ans;
}

    void solve(string str, string output, int index, vector<string> &ans)
    {
        if (index >= str.length())
        {
            if (output.lenght() > 0)
                ans.push_back(ouput);
            return;
        }

        solve(str, output, index + 1, ans);
        char element = str[index];
        solve(str, output, index + 1, ans);
    }

    vector<string> subsequences(string str)
    {
        vector<string> ans;
        string output = "";
        int index = 0;
        solve(str, output, index, ans);
        return ans;
    }