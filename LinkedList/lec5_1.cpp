https://www.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
    cout<<temp->data<<" ";
    temp=temp->next;
    }
}
Node* removeDuplicates(Node *root);
int main() {
	// your code goes here
	int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		Node *head = NULL;
        Node *temp = head;

		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		
		Node *result  = removeDuplicates(head);
		print(result);
		cout<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
 // your code goes here
   vector <int>ans;
   
   ans.push_back(head->data);
   
   Node *curr = head->next;
   
   while(curr)
   {
       // unique
       if(ans[ans.size() -1]!=curr->data)
       {
           ans.push_back(curr->data);
           
       }
       
           curr = curr->next;
       
   }
   
   curr = head;
   int index = 0 ;
   Node *prev = NULL;
   while(index<ans.size())
   {
       curr->data = ans[index++];
       prev = curr;
       curr = curr->next;
   }
   
   prev->next = NULL;
   
   return head;
   
   
}