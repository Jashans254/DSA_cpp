https://leetcode.com/problems/palindrome-linked-list/
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
    bool isPalindrome(ListNode* head) {
        if(!head->next )
        return 1;
        //count number of nodes
        int count = 0 ;
        ListNode * temp = head;
        while(temp)
        {
            count++;
            temp = temp->next;
        }

        count/=2;

        ListNode *curr = head , *prev = NULL;

        // skip number of nodes
        while(count--)
        {
            prev = curr;
            curr = curr->next;

        }

        prev->next = NULL;

        //Reverse the second list  , curr is pointing it
        prev = NULL;
        ListNode * front = NULL;
        while(curr)
        {
            front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }
        //comparing , prev is pointing to second
        // head is pointing to first list
        ListNode *head1 = head , *head2 = prev;
        while(head1)
        {
            if(head1->val != head2->val)
            {
                return 0 ;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        return 1;
    }
};