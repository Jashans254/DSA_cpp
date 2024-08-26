//{ Driver Code Starts
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* buildList() {
    vector<int> arr;
    string input;
    getline(cin, input);
    stringstream ss(input);
    int number;
    while (ss >> number) {
        arr.push_back(number);
    }
    if (arr.empty()) {
        return NULL;
    }
    int val = arr[0];
    int size = arr.size();

    Node* head = new Node(val);
    Node* tail = head;

    for (int i = 1; i < size; i++) {
        val = arr[i];
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

void printList(Node* n) {
    while (n) {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
  
    Node* Reverse(Node *curr , Node *prev)
    {
        if(curr == NULL)
        {
            return prev;
        }
        
        Node *front = curr->next;
        curr->next = prev;
        return Reverse(front , curr);
    }
    // Function to add two numbers represented by linked list.
    Node* addTwoLists(struct Node* first, struct Node* second) {
        // code here
        
        first = Reverse(first , NULL);
        second = Reverse(second , NULL);
        
        Node *curr1 = first , *curr2 = second;
        Node *head = new Node(0);
        Node *tail = head;
        
        
        //Addition
        int sum , carry = 0 ;
        while(curr1 && curr2)
        {
            sum = curr1->data+ curr2->data +carry;
            tail->next = new Node(sum%10);
            curr1 = curr1->next;
            curr2 = curr2->next;
            tail = tail->next;
            carry = sum/10;
        }
        
        // sum add karna padega
        while(curr1)
        {
            sum = curr1->data+carry;
            tail->next = new Node(sum%10);
            curr1 = curr1->next;
            tail = tail->next;
            carry = sum/10;
        }
        
        // curr2 exist toh nahi karta
        while(curr2)
        {
            sum = curr2->data+carry;
            tail->next = new Node(sum%10);
            curr2 = curr2->next;
            tail = tail->next;
            carry = sum/10;
        }
        
        // carry
        while(carry)
        {
            tail->next = new Node(carry%10);
            tail = tail->next;
            carry/=10;
        }
        
        //Dummy node bhi present 
        head = Reverse(head->next , NULL);
        return head;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline character after the integer input

    while (t--) {
        Node* num1 = buildList();
        Node* num2 = buildList();
        Solution ob;
        Node* res = ob.addTwoLists(num1, num2);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends