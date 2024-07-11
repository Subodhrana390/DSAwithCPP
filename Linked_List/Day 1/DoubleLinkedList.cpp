#include <iostream>
using namespace std;

class Node
{
public:
    Node *prev;
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node()
    {
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};

int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&head, Node *&tail, int d)
{

    if (tail == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    if (position == 1)
    {
        insertAtHead(head, tail, 1);
    }
    else
    {
        Node *temp = head;
        int cnt = 1;
        while (cnt < position - 1)
        {
            temp = temp->next;
            cnt++;
        }

        if (temp->next == NULL)
        {
            insertAtTail(head, tail, d);
            return;
        }

        Node *nodeToInsert = new Node(d);
        nodeToInsert->next = temp->next;
        temp->next->prev = nodeToInsert;
        temp->next = nodeToInsert;
        nodeToInsert = temp->prev;
    }
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteNode(int position, Node *&head)
{
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *cur = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = cur;
            cur = cur->next;
            cnt++;
        }
        cur->prev = NULL;
        prev->next = cur->next;
        cur->next = NULL;
        delete cur;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 12);
    insertAtHead(head, tail, 13);
    insertAtTail(head, tail, 23);
    insertAtPosition(head, tail, 4, 56);
    insertAtPosition(head, tail, 6, 45);
    print(head);
    deleteNode(1, head);
    print(head);
    deleteNode(3, head);
    print(head);
    cout << getLength(head);
    return 0;
}