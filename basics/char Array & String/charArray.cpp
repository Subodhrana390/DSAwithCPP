#include <iostream>
#include <vector>
using namespace std;

void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

int main()
{

    char name[20];
    cout << "Enter your name " << endl;
    cin >> name;
    cout << "Your name is";
    cout << name << endl;
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }

    reverse(name, count);
    cout
        << "Your name after reversing is";
    cout << name << endl;
}
