#include <iostream>
using namespace std;

int i = 5; // global variable

void a(int &i)
{
    cout << i << endl;
}

void b()
{
    cout << i << endl;
}

int main()
{
    b();

    return 0;
}