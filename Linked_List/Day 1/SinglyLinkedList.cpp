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

    ~Node()
    {
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtMiddle(Node *&head, Node *&tail, int position, int d)
{
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(int position, Node *&head)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
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
        prev->next = cur->next;
        cur->next = NULL;
        delete cur;
    }
}
Node *floydDetectLoop(Node *head)
{
    if (head == NULL)
        return NULL;

    Node *slow = head;
    Node *fast = head;

    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (slow == fast)
        {
            return slow;
        }
    }
    return NULL;
}

Node *getStartingNode(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node *interesection = floydDetectLoop(head);
    Node *slow = head;

    while (slow != interesection)
    {
        slow = slow->next;
        interesection = interesection->next;
    }
    return slow;
}

void removeLoop(Node *head)
{
    if (head == = NULL)
    {
        return;
    }

    Node *startOfLoop = getStartingNode(head);
    Node *temp = startOfLoop;

    while (temp->next != startOfLoop)
    {
        temp = temp->next;
    }

    temp->next = NULL;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // Implementation of Linked List
    Node *node1 = new Node(10);

    // Insertion of node at head

    Node *head = node1;
    Node *tail = node1;
    // insertAtHead(head, 12);
    insertAtTail(tail, 12);
    print(head);
    insertAtTail(tail, 15);
    print(head);

    insertAtMiddle(head, tail, 4, 22);
    // print(head);
    if (floydDetectLoop(head) != NULL)
    {
        cout << "Cycle is present" << endl;
    }
    else
    {
        cout << "Cycle isnot present" << endl;
    }

    cout << getStartingNode(head)->next << endl;
    return 0;
}