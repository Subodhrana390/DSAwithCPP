#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// Approach 1
Node *sortedList(Node *head)
{
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == 0)
            zeroCount++;
        else if (temp->data == 1)
            oneCount++;
        else if (temp->data == 2)
            twoCount++;
        temp = temp->data;
    }

    temp = head;
    while (temp != NULL)
    {
        if (zeroCount != 0)
        {
            temp->data = 0;
            zeroCount--;
        }
        else if (oneCount != 0)
        {
            temp->data = 1;
            oneCount--;
        }
        else if (twoCount != 0)
        {
            temp->data = 2;
            twoCount--;
        }
        temp = temp->next;
    }
    return head;
}

// Approach 2

void insertAtTail(Node *&tail, Node *curr)
{
    tail->next = curr;
    tail = curr;
}

Node *sortedList1(Node *head)
{
    Node *zeroHead = new Node(-1);
    Node *zeroTail = new Node(-1);
    Node *oneHead = new Node(-1);
    Node *oneTail = new Node(-1);
    Node *twoHead = new Node(-1);
    Node *twoTail = new Node(-1);

    Node *curr = head;

    while (curr != NULL)
    {
        int value = curr->data;
        if (value == 0)
        {
            insertAtTail(zeroTail, curr);
        }
        else if (value == 1)
        {
            insertAtTail(oneTail, curr);
        }
        else if (value == 2)
        {
            insertAtTail(twoTail, curr);
        }
        curr = curr->nexr;
    }

    if (oneHead->next != NULL)
    {
        zeroHead->next = oneHead->next;
    }
    else
    {
        zeroTail->next = twoHead->next;
    }

    oneTail->next = twoHead->next;
    twoHead->next = NULL;

    head = zeroHead->next;
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
}

int main()
{
}