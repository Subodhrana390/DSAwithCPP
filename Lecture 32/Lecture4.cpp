#include <iostream>
using namespace std;

void reversString(string &str, int i, int j)
{
    if (i > j)
        return;

    swap(str[i], str[j]);
    i++;
    j--;
    reversString(str, i, j);
}






int main()
{
    string name = "subodh";
    reversString(name, 0, name.length() - 1);
    cout << "Reverse String:- " << name << endl;
}