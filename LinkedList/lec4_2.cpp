//Convert Array to DLL using Tail
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
    Node *head = NULL , *tail = NULL;

    //create  Doubly Linked List

    int arr[] = {1 , 2,3 ,4 ,5};

    for(int i = 0 ; i<5;i++)
    {
        //Linked list doesnt exist
        if(head == NULL)
        {
            head = new Node(arr[i]);
            tail = head;
        }
        //Already exists
        else
        {
            Node * temp = new Node(arr[i]);
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }

    Node *trav = head;
    while(trav)
    {
        cout<<trav->data<<" ";
        trav = trav->next;
        
    }

}