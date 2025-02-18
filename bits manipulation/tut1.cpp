#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string convertToBinary(int n)
{
    string ans = "";
    while (n != 0)
    {
        if (n % 2 == 1)
            ans += "1";
        else
            ans += "0";
        n /= 2;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int convertToDecimal(string x)
{
    int len = x.length();
    int num = 0, p2 = 1;
    for (int i = len - 1; i >= 0; i--)
    {
        if (x[i] == '1')
        {
            num += p2;
        }
        p2 *= 2;
    }
    return num;
}

string onesComplement(int n)
{
    string ans;
    while (n != 0)
    {
        if (n % 2 == 1)
            ans += "0";
        else
            ans += "1";
        n /= 2;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

string twoComplement(int n, int bitSize = 8)
{
    string binary = convertToBinary(n);
    
    // Step 1: Invert the bits
    for (char &c : binary)
    {
        c = (c == '0') ? '1' : '0';
    }

    // Step 2: Add 1
    int carry = 1;
    for (int i = bitSize - 1; i >= 0; i--)
    {
        if (binary[i] == '1' && carry == 1)
        {
            binary[i] = '0';
        }
        else if (binary[i] == '0' && carry == 1)
        {
            binary[i] = '1';
            carry = 0;
        }
    }

    return binary;
}


int main()
{
    cout << convertToBinary(13) << endl;
    cout << convertToDecimal("1101") << endl;
    cout << onesComplement(13) << endl;
    cout << twoComplement(13) << endl;
}