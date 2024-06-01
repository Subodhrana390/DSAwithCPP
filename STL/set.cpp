#include <iostream>
#include <set>
#include <map>
using namespace std;

int main()
{
    // set<int> s;
    // s.insert(5);
    // s.insert(6);

    // cout << s.count(5) << endl;
    // set<int>::iterator it = s.begin();
    // it++;

    // s.erase(it);

    // for (auto i : s)
    // {
    //     cout << i << endl;
    // }

    // Mapping

    map<int, string> m;

    m[1] = "babber";
    m[2] = "love";

    m.insert({5, "codehelp"});
    // for (auto i : m)
    // {
    //     cout << i.first << endl;
    // }

    // cout << m.count(2) << endl;
    // m.erase(2);

    // for (auto i : m)
    // {
    //     cout << i.first << endl;
    // }

    auto it = m.find(5);
    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }
}