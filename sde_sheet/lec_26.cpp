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
        bool hasCycle(ListNode *head) {
            ListNode *temp = head;
           unordered_map<ListNode*,int>nodeMap;
    
            while(temp!=NULL){
                if(nodeMap.find(temp)!=nodeMap.end()){
                    return true;
                }
    
                 nodeMap[temp] =1;
    
            temp=temp->next;
            }
    
            return false;
           
        }
    };

// alternative
class Solution {
    public:
        bool hasCycle(ListNode *head) {
            ListNode *slow = head;
            ListNode *fast = head;
            if(head== NULL) return false;
    
            while(fast != NULL && fast->next != NULL){
    
                slow = slow->next;
    
                fast=fast->next->next;
    
                if(slow == fast){
                    return true;
                }
            }
    
    
            return false;
           
        }
    };