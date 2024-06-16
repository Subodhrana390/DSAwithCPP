#include <iostream>
using namespace std;

void update(int **p)
{
    // p = p + 1;
    // *p = *p + 1;
    **p = **p + 1;
}

int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    // cout << " printing of p " << p << endl;
    // cout << " address of p" << &p << endl;
    // cout << " value of p = " << *p << endl;

    // cout << " printing of p2 " << p2 << endl;
    // cout << " address of p2" << &p2 << endl;
    // cout << " value of p2 = " << **p2 << endl;

    cout << " Before " << i << endl;
    cout << " Before" << p << endl;
    cout << " Before" << p2 << endl;
    update(p2);
    cout << " After " << i << endl;
    cout << " After" << p << endl;
    cout << " After" << p2 << endl;
}