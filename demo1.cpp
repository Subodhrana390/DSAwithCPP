#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// string findonescomplement(string str)
// {
//     int n = str.length();
//     int i;
//     for (i = n - 1; i >= 0; i--)
//     {
//         if (str[i] == '1')
//         {
//             str[i] = '0';
//         }
//         else
//         {
//             str[i] = '1';
//         }
//     }
//     return str;
// }

// int main()
// {
//     cout << "SUBODH RANA \nURN: 2302689\n";
//     string number;
//     cout << "Enter binary number :- ";
//     cin >> number;
//     cout << "1's Compliement :- " << findonescomplement(number) << endl;
//     return 0;
// }

class Aritmetic
{
private:
    int a;
    int b;

public:
    void getNum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void sum()
    {
        int result = a + b;
        cout << "The sum of two number " << a << " and " << b << " is " << result << endl;
    }
};

int main()
{
    cout << "SUBODH RANA \nURN: 2302689\n";
    Aritmetic Add;
    int n1, n2;
    cin >> n1 >> n2;
    Add.getNum(n1, n2);
    Add.sum();
}