#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*Method 1 : Using Array Implementation*/
class Stack
{

    int *arr;
    int top;
    int size;

public:
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack OverFlow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack UnderFlow" << endl;
        }
    }

    int peak()
    {
        if (top >= 0 && top < size)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty" << endl;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

/*Method 2 : using linked list*/
class Node
{
public:
    int data;   // Make data public so it can be accessed in other parts of the code
    Node *next; // Pointer to the next node
};

class myStack
{
    Node *head;    // Points to the top of the stack
    int stackSize; // Keeps track of the size of the stack

public:
    myStack()
    {
        head = NULL;
        stackSize = 0;
    }

    void push(int g)
    {
        Node *temp = new Node();
        temp->data = g;
        temp->next = head; // The new node points to the current head
        head = temp;       // Update head to point to the new node
        stackSize++;       // Increment stack size
    }

    void pop()
    {
        if (head == NULL)
        {
            cout << "Stack is empty, cannot pop.\n";
            return;
        }

        Node *temp = head;
        head = temp->next; // Move head to the next node
        delete temp;       // Free memory of the popped node
        stackSize--;       // Decrement stack size
    }

    int top()
    {
        if (head == NULL)
        {
            cout << "Stack is empty.\n";
            return -1; // Return -1 or any invalid value if the stack is empty
        }
        return head->data; // Return the value at the top of the stack
    }

    int size()
    {
        return stackSize; // Return the current size of the stack
    }

    bool isEmpty()
    {
        return head == NULL; // Return true if stack is empty, false otherwise
    }
};

int main()
{
    // using STL libraray
    /*
    stack<int> s;
    s.push(2);
    s.push(5);
    if (s.empty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "stack is not empty" << endl;
    }
    cout << "Top is "
         << s.top();
*/
    Stack st(5);
    st.push(22);
    st.push(23);
    st.push(33);
    cout << st.peak() << endl;
    st.pop();
    cout << st.peak() << endl;
    if (st.isEmpty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "stack is not empty" << endl;
    }
}

/*
class TwoStack
{

public:
    int *arr;
    int top1;
    int top2;
    int size;
    // Initialize TwoStack.
    TwoStack(int s)
    {
        this->size = s;
        top1 = -1;
        top2 = s;
        arr = new int[size];
    }

    // Push in stack 1.
    void push1(int num)
    {
        if (top2 - top1 > 1)
        {
            top1++;
            arr[top1] = num;
        }
        else
        {
            cout << "stackoverflow in stack 1";
        }
    }

    // Push in stack 2.
    void push2(int num)
    {
        if (top2 - top1 > 1)
        {
            top2--;
            arr[top2] = num;
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1()
    {
        if (top1 >= 0)
        {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else
        {
            return -1;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2()
    {
        if (top2 < size)
        {
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else
        {
            return -1;
        }
    }
}
*/