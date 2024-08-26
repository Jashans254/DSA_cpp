//Deletion at any position
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

Node * CreateDLL(int arr[] , int index , int size , Node *back)
{
    if(index == size)
    return NULL;

    //Node created
    Node *temp = new Node(arr[index]);
    temp->prev = back;
    temp->next = CreateDLL(arr , index+1 , size , temp);

    return temp;

}
int main()
{
    Node *head = NULL;

    int arr[] = {1,2,3,4,5};

    head = CreateDLL(arr , 0 , 5 , NULL);

    //Delete at given position 
    int pos = 3 ;

    // delete at start 
    if(pos == 1)
    {
         if(head!=NULL)
    {
        // if only one node exists
        if(head->next == NULL)
        {
            delete head;
            head = NULL;
        }
        // if more than one node exists
        else{
        Node *temp = head;
        head = head->next;
        delete temp;
        head->prev = NULL;
        }
    }
    }
    else{    
        Node *curr = head;
        while(--pos)
        {
            curr = curr->next;
        }
        // delete at end
        if(curr->next == NULL)
        {
            curr->prev->next = NULL;
            delete curr;
        }
    // delete at middle
        else{
            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;
            delete curr;
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
