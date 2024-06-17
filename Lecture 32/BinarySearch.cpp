#include <iostream>
using namespace std;

// bool BinarySearch(int *arr, int s, int e, int k)
// {
//     if (s > e)
//         return false;

//     int mid = s + (e - s) / 2;
//     if (arr[mid] == k)
//         return true;

//     if (arr[mid] > k)
//         return BinarySearch(arr, s, mid - 1, k);
//     else
//         return BinarySearch(arr, mid + 1, e, k);
// }

// int main()
// {
//     int arr[8] = {3, 5, 7, 10, 16, 21, 63, 64};
//     int size = 8;
//     int key = 16;
//     bool ans = BinarySearch(arr, 0, size, key);

//     if (ans == true)
//         cout << "Key is Present : " << "yes" << endl;
//     else
//     {
//         cout << "Key is Absent" << endl;
//     }
// }

// Power of 2^n

int power(int a, int b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;

    int ans = power(a, b / 2);

    if (b % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return a * ans * ans;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    int ans = power(a, b);

    cout << "Answer is " << ans << endl;
}