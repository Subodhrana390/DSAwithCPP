#include <iostream>
#include <map>
using namespace std;

class Node
{
    int data;
    Node *next;
    Node *random;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->random = NULL;
    }
}

void
insertAtTail(Node *&head, Node *&tail, int d)
{

    Node *newNode = new Node(d);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

Node *
copyList(Node *head)
{
    Node *cloneHead = NULL;
    Node *cloneTail = NULL;

    Node *temp = head;
    while (temp != NULL)
    {
        insertAtTail(cloneHead, cloneTail, temp->data);
        temp = temp->next;
    }

    unordered_map<Node *, Node *> oldToNewNode;
    Node *originalNode = head;
    Node *cloneNode = cloneHead;

    while (originalNode != NULL)
    {
        oldToNewNode[originalNode] = cloneNode;
        originalNode = originalNode->next;
        cloneNode = cloneNode->next;
    }

    originalNode = head;
    cloneNode = cloneHead;

    while (originalNode != NULL)
    {
        cloneNode->random = oldToNew[originalNode->random];
        originalNode = originalNode->next;
        cloneNode = cloneNode->next;
    }
    return cloneHead;
}

Nodee *CopyRight(Node *head)
{
    Node *cloneHead = NULL;
    Node *cloneTail = NULL;

    Node *temp = head;
    while (temp != NULL)
    {
        insertAtTail(cloneHead, cloneTail, temp->data);
        temp = temp->next;
    }

    Node *originalNode = head;
    Node *cloneNode = cloneHead;

    while (originalNode != NULL && cloneNode != NULL)
    {
        Node *next = originalNode->next;
        originalNode->next = cloneNode;
        originalNode = next;

        next = cloneNode->next;
        cloneNode->next = originalNode;
        cloneNode = next;
    }

    temp = head;
    while (temp->next != NULL)
    {
        if (temp->next != NULL)
        {
            temp->next->random = temp->random ? temp->random->next : temp->next;
        }
        temp = temp->next->next;
    }

    originalNode = head;
    cloneNode = cloneHead;

    while (originalNode != NULL && cloneHead != NULL)
    {
        originalNode->next = cloneNode->next;
        originalNode = originalNode > next;
        if (originalNode != NULL)
        {
            cloneNode->next = originalNode->next;
        }
        cloneNode = cloneNode->next;
    }

    return clonehead;
}

Node *findMid(Node *head)
{
    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
Node *merge(Node *left, Node *right)
{
    if (left == NULL)
        return right;

    if (right == NULL)
        return left;

    Node *ans = new Node(-1);
    node temp = ans;

    while (left != NULL && right != NULL)
    {
        if (left->data < right->data)
        {
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else
        {
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }

    while (left != NULL)
    {
        temp->next = left;
        temp = left;
        left = left->next;
    }

    while (right != NULL)
    {
        temp->next = right;
        temp = right;
        right = right->next;
    }

    ans = ans->next;
    return ans;
}

Node *mergeSort(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *mid = findMid(haed);

    Node *left = head;
    Node *right = mid->next;
    mid->next = NULL;

    left = mergeSort(left);
    right = mergeSort(right);

    Node *result = merge(left, right);
}