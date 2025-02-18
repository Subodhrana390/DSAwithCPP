#include <iostream>
using namespace std;

/*
// Method 1: using Array Implementation
int main()
{
    int sparseMatrix[4][5] =
        {
            {0, 0, 3, 0, 4},
            {0, 0, 5, 7, 0},
            {0, 0, 0, 0, 0},
            {0, 2, 6, 0, 0}};

    int size = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (sparseMatrix[i][j] != 0)
                size++;
        }
    }

    int compactMatrix[3][size];
    int k = 0;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 5; j++)
            if (sparseMatrix[i][j] != 0)
            {
                compactMatrix[0][k] = i;
                compactMatrix[1][k] = j;
                compactMatrix[2][k]=sparseMatrix[i][j];
                k++;
            }


      for (int i=0; i<3; i++)
    {
        for (int j=0; j<size; j++)
            cout <<" "<< compactMatrix[i][j];

        cout <<"\n";
    }

    return 0;
}
*/

class Node
{
public:
    int row;
    int col;
    int data;
    Node *next;
};

void
create_new_node(Node **p, int row_index, int col_index, int x)
{
    Node *temp = *p;
    Node *r;
    if (temp == NULL)
    {
        temp = new Node();
        temp->row = row_index;
        temp->col = col_index;
        temp->data = x;
        temp->next = NULL;
        *p = temp;
    }
    else
    {
        while (temp->next != NULL)
            temp = temp->next;
        r = new Node();
        r->row = row_index;
        r->col = col_index;
        r->data = x;
        r->next = NULL;
        temp->next = r;
    }
}

void printList(Node *start)
{
    Node *ptr = start;
    while (ptr != NULL)
    {
        cout << ptr->row << " ";
        ptr = ptr->next;
    }
    cout << endl;

    ptr = start;
    while (ptr != NULL)
    {
        cout << ptr->col << " ";
        ptr = ptr->next;
    }
    cout << endl;

    ptr = start;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

int main()
{
    int sparseMatrix[4][5] = {{0, 0, 3, 0, 4},
                              {0, 0, 5, 7, 0},
                              {0, 0, 0, 0, 0},
                              {0, 2, 6, 0, 0}};

    Node *first = NULL;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (sparseMatrix[i][j] != 0)
                create_new_node(&first, i, j,
                                sparseMatrix[i][j]);
        }
    }

    printList(first);
    return 0;
}