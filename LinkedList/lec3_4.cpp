// using count
https://leetcode.com/problems/middle-of-the-linked-list/

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
    ListNode* middleNode(ListNode* head) {
        int count = 0 ; //count total number of nodes

        ListNode *temp = head;

        while(temp!=NULL)
        {
            count++;
            temp = temp->next;
        }

        count/=2;

        //This number of step I have to take from start
        temp = head;
        while(count--)
        {
            temp=temp->next;
        }

        return temp;

    }
};