#include <iostream>
using namespace std;

int mySqrt(int x)
{
    int l = 0, r = x;
    while (l < r)
    {
        int mid = (l + r + 1ll) >> 1;
        if (mid > x / mid)
        {
            r = mid - 1;
        }
        else
        {
            l = mid;
        }
    }
    return l;
}

int main()
{
    cout << "Square root of " << 4 << " is " << mySqrt(8) << endl;
    return 0;
}

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *dummy = new ListNode();
        ListNode *temp = dummy;

        int carry = 0;
        while (l1 != NULL || l2 != NULL || carry)
        {
            int sum = 0;
            if (l1 != NULL)
            {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2 != NULL)
            {
                sum += l2->val;
                l2 = l2->next;
            }

            sum += carry;
            carry = sum / 10;
            ListNode *Node = new ListNode(sum % 10);
            temp->next = Node;
            temp = temp->next;
        }
        return dummy->next;
    }
};
