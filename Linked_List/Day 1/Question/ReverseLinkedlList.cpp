#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
};

// Approach 1
Node *reverseLinkedList(Node *head)
{

    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;

    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

// Approach 2
void reverse(Node *&head, Node *curr, Node *prev)
{
    // base case
    if (curr == NULL)
    {
        head = prev;
        return;
    }
    reverse(head, curr->next, curr);
    curr->next = prev;
}

Node *reverseLinkedList(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    reverse(head, curr, prev);
    return head;
}

// Approach 3
Node *reverse1(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *chotahead = reverse1(head->next);
    head->next->next = head;
    head->next = NULL;
    return chotahead;
}

int main()
{
}