#include <iostream>
using namespace std;

string removeOccurences(string s, string part)
{

    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main()
{
    string s, part;
    cin >> s;
    cin >> part;
    cout << "Max Character is " << removeOccurences(s, part);
}