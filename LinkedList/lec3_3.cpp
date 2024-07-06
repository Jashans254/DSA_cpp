// using recursion

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode * Reverse(ListNode *curr , ListNode  *prev)
    {
        if(curr == NULL)
        {
            return prev;
        }

        ListNode * fut = curr->next;
        curr->next = prev;

        return Reverse(fut , curr);
    }
    ListNode * reverseList(ListNode* head) {
        return Reverse(head , NULL);
    }
};