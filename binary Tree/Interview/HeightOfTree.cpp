#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    node *left;
    node *right;

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
    int height(Node* node){
        if(node==NULL){
            return -1;
        }

        int left = height(node->left);
        int right = height(node->right);

        int ans= max(left,right)+1;̥̥
        return ans;
    }

    int diameter(Node* root) {
     if(root==NULL){
        return 0;
     }

     int op1 = diameter(root->left);
     int op2 = diameter(root->right);
     int op3 = height(root->left)+1+height(root->right);

     int ans = max(op1,op2,op3);
     return ans;
    }
}