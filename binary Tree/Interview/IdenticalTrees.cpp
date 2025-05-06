#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        left = NULL;
        right = NULL;
    }
};

class Solution
{
public:
    bool isIdentical(Node *r1, Node *r2)
    {
        if (r1 == NULL && r2 == NULL)
        {
            return true;
        }

        if (r1 != NULL && r2 == NULL)
        {
            return false;
        }

        if (r1 == NULL && r2 != NULL)
        {
            return false;
        }

        bool left = isIdentical(r1->left, r2->left);
        bool right = isIdentical(r1->right, r2->right);

        bool val = r1->data == r2->data;
        if (left && right && val)
            return true;
        else
            return false;
    }
};