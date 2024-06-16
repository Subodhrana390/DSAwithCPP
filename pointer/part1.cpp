#include <iostream>
using namespace std;


int main()
{
    int num = 5;
    cout << num << endl;
    cout << "address of num is " << &num << endl;
    return 0;
}

void update(int *p)
{
    cout << "size " << sizeof p << endl;
    *p = *p + 1;
}

int main()
{
    int arr[5] = {1, 2, 3, 5, 6};
    int *ptr = arr;
    update(ptr);
    cout << "Value is " << *ptr;
}