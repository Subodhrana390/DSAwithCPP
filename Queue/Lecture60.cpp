#include <iostream>
#include <queue>
using namespace std;

// int main()
// {
//     queue<int> q;
//     q.push(11);
//     q.push(15);
//     q.push(17);
//     cout << q.front() << endl;
//     cout << "Size of queue is " << q.size() << endl;
//     q.pop();
//     q.pop();
//     q.pop();
//     if (q.empty())
//     {
//         cout << "Queue is empty" << endl;
//         ;
//     }
//     cout << "Size of queue is " << q.size() << endl;
// }

// Implementing Queue using Array & Linked List

class Queue
{
    int *arr;
    int qfront;
    int rear;
    int size;

public:
    Queue()
    {
        size = 10001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    bool isEmpty()
    {
        if (qfront == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueue(int data)
    {
        if (rear == size)
        {
            cout << "Queue is Full" << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue()
    {
        if (qfront == rear)
        {
            cout << "Queue is empty" << endl;   
        }

        else
        {
            int ans = ans[qfront];
            arr[qfront] = -1;
            qfront++;
            if (qfront == rear)
            {
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int front()
    {
        if (qfront == rear)
        {
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }
};


