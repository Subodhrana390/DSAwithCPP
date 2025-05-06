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
    pair<int, int> diameterFast(Node *root)
    {
        if (root == NULL)
        {
            return {0, 0};
        }

        pair<int, int> left = diameterFast(root->left);
        pair<int, int> right = diameterFast(root->right);

        int op1 = left.first;
        int op2 = right.first;
        int op3 = left.second + right.second + 1;

        pair<int, int> ans;
        ans.first = max(op1, max(op2, op3));
        ans.second = max(left.second, right.second) + 1;
        return ans;
    }

    int diameter(Node *root)
    {
        return diameterFast(root).first;
    }

    int checkBalance(Node *node)
    {
        if (node == NULL)
        {
            return 0;
        }

        int leftHeight = checkBalance(node->left);
        if (leftHeight == -1)
            return -1;

        int rightHeight = checkBalance(node->right);
        if (rightHeight == -1)
            return -1;

        if (abs(leftHeight - rightHeight) > 1)
        {
            return -1;
        }

        return max(leftHeight, rightHeight) + 1;
    }

    pair<bool, int> isBalancedFast(Node *root)
    {
        if (root == NULL)
        {
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }

        pair<int, int> left = isBalancedFast(root->left);
        pair<int, int> right = isBalancedFast(root->right);
        bool leftAns = left.first;
        bool rightAns = right.first;
        bool diff = abs(left.second - right->second) <= 1;

        pair<bool, int> ans;
        ans.second = max(left.second + right.second) + 1;
        ans.first = leftAns && rightAns && diff;
        return ans;
    }

    bool isBalanced(Node *root)
    {
        return isBalancedFast(root).first;
        // return checkBalance(root) != -1;
    }
};

;

int main()
{
    // Creating a sample binary tree
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);
    root->left->left->left = new Node(7);

    Solution sol;
    cout << "Diameter of the tree: " << sol.diameter(root) << endl;

    return 0;
}
