#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = next = nullptr;
    }
};

// Insert at beginning
Node* insertAtBeginning(Node* head, int data) {
    Node* newNode = new Node(data);

    if (!head) {
        newNode->next = newNode->prev = newNode;
        return newNode;
    }

    Node* last = head->prev;

    newNode->next = head;
    newNode->prev = last;
    last->next = newNode;
    head->prev = newNode;

    return newNode; // new head
}

// Insert at end
Node* insertAtEnd(Node* head, int data) {
    Node* newNode = new Node(data);

    if (!head) {
        newNode->next = newNode->prev = newNode;
        return newNode;
    }

    Node* last = head->prev;

    newNode->next = head;
    newNode->prev = last;
    last->next = newNode;
    head->prev = newNode;

    return head;
}

// Insert at specific position (1-based index)
Node* insertAtPosition(Node* head, int pos, int data) {
    if (pos < 1) return head;

    if (!head && pos == 1) {
        Node* newNode = new Node(data);
        newNode->next = newNode->prev = newNode;
        return newNode;
    }

    if (pos == 1)
        return insertAtBeginning(head, data);

    Node* curr = head;
    for (int i = 1; i < pos - 1 && curr->next != head; i++) {
        curr = curr->next;
    }

    Node* newNode = new Node(data);
    Node* nextNode = curr->next;

    curr->next = newNode;
    newNode->prev = curr;
    newNode->next = nextNode;
    nextNode->prev = newNode;

    return head;
}

// Delete at specific position (1-based index)
Node* deleteAtPosition(Node* head, int pos) {
    if (!head || pos < 1)
        return head;

    // Only one node
    if (head->next == head && pos == 1) {
        delete head;
        return nullptr;
    }

    if (pos == 1) {
        Node* last = head->prev;
        Node* newHead = head->next;

        last->next = newHead;
        newHead->prev = last;

        delete head;
        return newHead;
    }

    Node* curr = head;
    for (int i = 1; i < pos && curr->next != head; i++) {
        curr = curr->next;
    }

    // Position beyond length
    if (curr == head)
        return head;

    Node* prevNode = curr->prev;
    Node* nextNode = curr->next;

    prevNode->next = nextNode;
    nextNode->prev = prevNode;

    delete curr;
    return head;
}

// Print list
void printList(Node* head) {
    if (!head) return;
    Node* curr = head;
    do {
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr != head);
    cout << endl;
}

// Main function
int main() {
    Node* head = nullptr;

    head = insertAtBeginning(head, 12);
    head = insertAtBeginning(head, 34);        // 34 12
    head = insertAtEnd(head, 14);              // 34 12 14
    head = insertAtPosition(head, 2, 35);      // 34 35 12 14
    printList(head);                           // Output: 34 35 12 14

    head = deleteAtPosition(head, 2);          // Deletes 35
    printList(head);                           // Output: 34 12 14

    head = deleteAtPosition(head, 1);          // Deletes 34
    printList(head);                           // Output: 12 14

    head = deleteAtPosition(head, 5);          // Invalid, no change
    printList(head);                           // Output: 12 14

    return 0;
}
