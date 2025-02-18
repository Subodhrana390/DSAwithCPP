#include <bits/stdc++.h>
using namespace std;

queue<int> modifyQueue(queue<int> q, int k)
{
    stack<int> s;
    for (int i = 0; i < k; i++)
    {
        int val = q.front();
        q.pop();
        s.push(val)
    }

    while (!s.empty())
    {
        int val = s.top();
        s.pop();
        q.push(val);
    }

    int t = q.size() - k;
    while (t--)
    {
        int val = q.front();
        q.pop();
        q.push(val)
    }
    return q;
}
#include <bits/stdc++.h>
using namespace std;

// Function to modify the queue
queue<int> modifyQueue(queue<int> q, int k)
{
    stack<int> s;

    // Move first k elements from queue to stack
    for (int i = 0; i < k; i++)
    {
        int val = q.front();
        q.pop();
        s.push(val);
    }

    // Move the elements from the stack back to the queue
    while (!s.empty())
    {
        int val = s.top();
        s.pop();
        q.push(val);
    }

    // Move remaining elements to the back of the queue
    int t = q.size() - k;
    while (t--)
    {
        int val = q.front();
        q.pop();
        q.push(val);
    }

    return q;
};

int main()
{
    queue<int> q;

    // Add elements to the queue
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    int k = 3; // Number of elements to reverse

    // Modify the queue
    queue<int> modifiedQueue = modifyQueue(q, k);

    // Print the modified queue
    cout << "Modified Queue: ";
    while (!modifiedQueue.empty())
    {
        cout << modifiedQueue.front() << " ";
        modifiedQueue.pop();
    }
    cout << endl;

    return 0;
}
