// insertion in doubly linked list 

#include<iostream>
using namespace std;

class Node 
{
    public:
    int data;
    Node *prev;
    Node *next;
    Node(int value)
    {
        data = value;
        prev = NULL;
        next = NULL;
    }
};

int main()
{
    Node *head = NULL;

    //insert at start 

    // linkedllst doesnt exist
    if(head == NULL)
    {
        head = new Node(5);
    }
    // already existing linked list
    else{
        Node *temp = new Node(5);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }

    // insertion at end
    if(head == NULL )
    {
        head = new Node(15);
    }
    else{
        Node *curr = head;
        while(curr->next!=NULL)
        {
            curr = curr->next;
        }
        Node *temp = new Node(15);
        curr->next = temp;
        temp->prev = curr;
    }

    // Traversing 
    Node *trav = head ;
    while(trav)
    {
        cout<<trav->data<<" ";
        trav = trav->next;
    }
}