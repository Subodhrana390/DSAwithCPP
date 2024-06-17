#include <iostream>
using namespace std;

bool LinearSearch(int *arr, int size, int key)
{
    if (size == 0)
        return false;

    if (arr[0] == key)
        return true;
    else
        return LinearSearch(arr + 1, size - 1, key);
}

int main()
{
    int arr[8] = {3, 5, 7, 10, 16, 21, 63, 64};
    int size = 8;
    int key = 11;
    bool ans = LinearSearch(arr, size, key);

    if (ans == true)
        cout << "Key is Present : " << "yes" << endl;
    else
    {
        cout << "Key is Absent" << endl;
    }
}