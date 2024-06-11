#include <iostream>
#include <vector>
#include <string>
using namespace std;

char totLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char s[], int n)
{
    int st = 0;
    int e = n - 1;
    while (st <= e)
    {
        if (s[st] != s[e])
        {
            return 0;
        }
        else
        {
            st++;
            e--;
        }
    }
    return 1;
}

bool valid(char c)
{
    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9')
    {
        retun 1;
    }
    return 0;
}

bool isPalindrome(string s)
{
    string temp = "";
    for (int j = 0; j < s.length(); j++)
    {
        if (valid(s[j]))
        {
            temp.push_back(s[j]);
        }
    }

    for (int j = 0; j < count; j++)
    {
        temp[j] = totLowerCase(temp[j]);
    }

    return checkPalindrome(temp);
}

int main()
{
    char name[20];
    cout << "Enter your name " << endl;
    cin >> name;
    cout << "Your name is ";
    cout << name << endl;
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }

    char temp[20] = {""};
    for (int i = 0; i < count; i++)
    {
        temp = temp + totLowerCase(name[i]);
    }

    if (checkPalindrome(temp, count) == 1)
    {
        cout << "Palindrome String";
    }
    else
    {
        cout << "not Palindrome String";
    }
}