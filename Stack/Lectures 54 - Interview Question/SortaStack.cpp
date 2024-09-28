#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sortedInsert(stack<int> &Stack, int num)
{
    if (Stack.empty() || (!Stack.empty() && Stack.top() < num))
    {
        Stack.push(num);
        return;
    }

    int n = Stack.top();
    Stack.pop();
    sortStack(Stack, n);
    Stack.push(n);
}

void sortStack(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }

    int num = s.top();
    s.pop();
    sortStack(s);
    sortedInsert(s, num);
}
