#include <bits/stdc++.h>
using namespace std;

class KQueue
{
public:
    int n;
    int k;
    int *front;
    int *rear;
    int *arr;
    int freeSpot;
    int *next;

    KQueue(int n, int k)
    {
        this->n = n;
        this->k = k;
        front = new int[k];
        rear = new int[k];

        for (int i = 0; i < k; i++)
        {
            front[i] = -1;
            rear[i] = -1;
        }

        next = new int[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = i + 1;
        }
        arr[n - 1] = -1;

        arr = new int[n];
        freeSpot = 0;
    }

    void enqueue(int data, int qn)
    {
        if (freeSpot == -1)
        {
            cout << "No vacant space is available" << endl;
            return;
        }

        int index = freeSpot;
        freeSpot = next[index];

        if (front[qn - 1] == -1)
        {
            front[qn - 1] = index;
        }
        else
        {
            next[rear[qn - 1]] = index;
        }

        next[index] = -1;

        rear[qn - 1] = index;

        arr[index] = data;
    }
}