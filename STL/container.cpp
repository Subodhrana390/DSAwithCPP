#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{

    // stack
    //  stack<string> s;

    // s.push("love");
    // s.push("babber");
    // s.push("code");

    // cout << s.top() << endl;
    // cout << s.size() << endl;

    // Queues

    // queue<string> s;
    // s.push("love");
    // s.push("babber");
    // s.push("code");

    // cout << s.front() << endl;
    // cout << s.back();
    // s.pop();

    // Priority Queue
    // max_heap
    priority_queue<int> maxi;

    // min_heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);
    int n = mini.size();
    for (int i = 0; i < n; i++)
    {
        cout << mini.top() << " ";
        maxi.pop();
    }
}