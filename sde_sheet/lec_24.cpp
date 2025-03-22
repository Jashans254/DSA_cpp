/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    public:
        void deleteNode(ListNode* t) {
            t->val = t->next->val;
        t->next = t->next->next;
        }
    };