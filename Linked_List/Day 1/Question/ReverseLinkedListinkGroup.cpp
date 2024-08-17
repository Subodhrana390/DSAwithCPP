Node *kReverse(Node *head, int k)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node *next = NULL;
    Node *curr = head;
    Node *prev = NULL;
    int count = 0;

    // Reverse the first k nodes
    while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // next is now a pointer to (k+1)th node
    // Recursively call kReverse for the remaining part of the list
    if (next != NULL)
    {
        head->next = kReverse(next, k);
    }

    // prev is now head of the input list
    return prev;
}