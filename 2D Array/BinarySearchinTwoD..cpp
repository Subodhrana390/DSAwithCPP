#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0;
    int end = row * col - 1;
    int mid = start + (end - row) / 2;

    while (start <= end)
    {
        int element = matrix[mid / col][mid % col];

        if (element == target)
            return 1;
        if (element < target)
            start = mid + 1;
        if (element > target)
            e = mid - 1;
        mid = start + (end - row) / 2;
    }
    return 0;
}

bool searchMatrixII(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();

    int rowIndex = 0;
    int colIndex = col - 1;
    while (rowIndex < row && colIndex >= 0)
    {
        int element = matrix[rowIndex][colIndex];

        if (element == target)
            return 1;
        if (element < target)
            rowIndex++;
        if (element > target)
            colIndex--;
    }

    return 0;
}