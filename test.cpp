#include <iostream>
#include <math.h>
using namespace std;

void display(int arr[], int n, string type)
{
    cout << "Display " << type << " Array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
};

int firstMain()
{
    int n = 10;
    int arr[n];
    cout << "Input Array " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    display(arr, n, "old");
    int insertNumber;
    cout << "Enter a number to insert in array :";
    cin >> insertNumber;
    int newArr[n + 1];
    newArr[0] = insertNumber;

    for (int i = 0; i < n; i++)
    {
        newArr[i + 1] = arr[i];
    }

    display(newArr, n + 1, "first time insertion");

    int pos;
    cout << "Enter index in which you want to insert a number: ";
    cin >> pos;

    int newNumber;
    cout << "Enter number in which you want to insert: ";
    cin >> newNumber;

    for (int i = n + 2; i >= pos; i--)
        newArr[i] = newArr[i - 1];

    newArr[pos - 1] = newNumber;
    display(newArr, n + 2, "Second time insertion");
    return 0;
};

int secondMain()
{

    int n = 10;
    int arr[n];
    cout << "Input Array " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    display(arr, n, "Original");

    int pos;
    cout << "Enter a position to delete data element in Array : ";
    cin >> pos;

    for (int i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    display(arr, n - 1, "new");
}

int ThirdMain()
{
    cout << endl;
    cout << " To find Largest And smallest number";

    int n = 10;
    int arr[n];
    cout << "Input Array " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    display(arr, n, "Original");

    int smallest = arr[0], largest = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
            smallest = arr[i];

        if (arr[i] > largest)
            largest = arr[i];
    }

    cout << "Largest and smallest Number are " << smallest << " and " << largest << " respectively" << endl;
}

int main()
{
    secondMain();
    return 0;
}