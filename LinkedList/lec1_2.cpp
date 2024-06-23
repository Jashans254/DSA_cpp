// insertion at beginning and traversing
// copying elements of array to LL
//basic linked list structure

#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next; 

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

int main()
{
    Node *head = NULL;

    int arr[] = {1,2,3,4,5};
    for(int i = 0 ; i<5 ; i++)
    {

    //Linked list does not exist
    if(head == NULL)
    {
        head = new Node(arr[i]);
    }
    //Linked list exists
    else
    {
        Node *temp ;
        temp = new Node(arr[i]);
        temp->next = head;
        head = temp;
    }
    }

    // traverse
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}