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

// atlernative

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
        ListNode *detectCycle(ListNode *head) {
    
            ListNode * slow = head;
            ListNode * fast = head;
    
            while(fast !=NULL && fast->next !=NULL){
    
                slow = slow->next;
    
                fast = fast->next->next;
    
    
                if(slow == fast){
    
                    slow = head;
    
    
                    while( slow!=fast){
                        slow = slow->next;
                        fast = fast->next;
                    }
    
                    return slow;
                }
            }
            
    
            return NULL;
        }
    };


// alternative
int removeDuplicates(int arr[], int n) {
    set < int > set;
    for (int i = 0; i < n; i++) {
      set.insert(arr[i]);
    }
    int k = set.size();
    int j = 0;
    for (int x: set) {
      arr[j++] = x;
    }
    return k;
  }
// alternative
class Solution {
    public:
        int removeDuplicates(vector<int>& arr) {
            int n = arr.size();
    
            int i = 0;
      for (int j = 1; j < n; j++) {
        if (arr[i] != arr[j]) {
          i++;
          arr[i] = arr[j];
        }
      }
      return i + 1;
        }
    };  