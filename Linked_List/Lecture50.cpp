#include <iostream>
#include <vector>
using namespace std;

class Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
}

bool
checkPalindrome(vector<int> arr)
{
    int n = arr.size();
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        if (arr[s] != arr[e])
        {
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}

bool isPalindrome(Node *head)
{
    vector<int> arr;
    Node *temp = head;
    while (temp != NULL)
    {
        arr.push_back(temp->data);
        temp = temp->next;
    }

    return checkPalindrome(arr);
}

// Approach @2
Node *getMid(Node *head)
{
    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL && fast != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return mid;
}

Node *reverse(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    Node *next = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool isAnPalindrome(Node *head)
{
    if (head == NULL || head->next == NULL)
        return true;

    Node *middle = getMid(head);
    Node *temp = middle->next;
    middle->next = reverse(temp);

    Node *head1 = head;
    Node *head2 = middle->next;

    while (head2 != NULL)
    {
        if (head1->data != head2->data)
            return false;
        head1 = head1->next;
        head2 = head2->next;
    }

    temp = middle->next;
    middle->next = reverse(temp);
    return 1;
}

// Add two list

void insertAtTail(Node *head, Node *Tail, int val)
{
    Node *temp = new Node(val);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}

Node *add(Node *first, Node *second)
{
    int carry = 0;

    Node *ansHead = NULL;
    Node *ansTail = NULL;

    while (first != NULL || second != NULL || carry != 0)
    {
        int val1 = 0, val2 = 0;
        if (first != NULL)
        {
            val1 = first->next;
        }
        if (second != NULL)
        {
            val2 = second->next;
        }
        int sum = carry + val1 + val2;
        int digit = sum % 10;

        Node *temp = new Node(digit);
        insertAtTail(ansHead, ansTail, digit);
        carry = sum / 10;
        if (first != NULL)
            first = first->next;
        if (second != NULL)
            second = second->next;
    }

    while (first != NULL)
    {
        int sum = carry + first->data;
        int digit = sum % 10;
        insertAtTail(ansHead, ansTail, digit);
        carry = sum / 10;
        first = first->next;
    }
    while (second != NULL)
    {
        int sum = carry + second->data;
        int digit = sum % 10;
        insertAtTail(ansHead, ansTail, digit);
        carry = sum / 10;
        second = second->next;
    }
    while (carry != 0)
    {
        int sum = carry;
        int digit = sum % 10;
        insertAtTail(ansHead, ansTail, digit);
        carry = sum / 10;
    }
    return ansHead;
}

Node *addTwoList(Node *first, Node *second)
{
    first = reverse(first);
    second = reverse(second);

    Node *ans = add(first, second);
    ans = reverse(ans);
    return ans;
}
