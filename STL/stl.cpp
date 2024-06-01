#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>

using namespace std;

int main()
{

    // array
    // array<int, 4> a = {1,
    //                    2,
    //                    3,
    //                    4};
    // int size = a.size();
    // cout << a.front() << endl;
    // cout << a.back() << endl;

    // VEctor
    // vector<int> v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // cout
    //     << v.capacity() << endl;

    // cout
    //     << v.at(2) << endl;

    // cout << v.front() << endl;
    // cout << v.back() << endl;

    // v.pop_back();

    // Deque

    // deque<int> d;
    // d.push_back(1);
    // d.push_front(2);

    // for (int i : d)
    // {
    //     cout << i << endl;
    // }

    // cout << d.at(0) << endl;
    // cout << d.front() << endl;
    // cout << d.back() << endl;
    // d.pop_back();

    // for (int i : d)
    // {
    //     cout << i << endl;
    // }

    // d.erase(d.begin(), d.begin() + 1);

    // cout << d.size() << endl;

    // List

    list<int> l;
    list<int> last(5, 100);
    l.push_back(1);
    l.push_front(2);

    for (int i : last)
    {
        cout << i << endl;
    }

    l.erase(l.begin());

    for (int i : l)
    {
        cout << i << endl;
    }
}