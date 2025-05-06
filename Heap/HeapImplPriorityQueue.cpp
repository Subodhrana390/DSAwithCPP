#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);

    cout << "element at Top :" << pq.top() << endl;
    pq.pop();
    cout << "element at Top :" << pq.top() << endl;

    // Min Heap

    priority_queue<int, vector<int>, greater<int>> minheap;
    minheap.push(4);
    minheap.push(2);
    minheap.push(5);
    minheap.push(3);

    cout << "element at Top :" << minheap.top() << endl;
    minheap.pop();
    cout << "element at Top :" << minheap.top() << endl;
}
