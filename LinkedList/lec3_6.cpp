https://leetcode.com/problems/remove-nth-node-from-end-of-list/
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0 ;
        ListNode *temp = head;
        //count total number of Listnodes
        while(temp)
        {
            count++;
            temp = temp->next;
        }

        count-=n;
        if(!count)
        {
            ListNode *temp = head;
            head = temp->next;
            delete temp;
            return head;
        }
        ListNode *curr = head , *prev = NULL;

        while(count--)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        delete curr;

        return head;
    }
};