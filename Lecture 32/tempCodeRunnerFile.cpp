bool BinarySearch(int *arr, int s, int e, int k)
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