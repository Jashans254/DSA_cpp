//Deletion at start and end
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

    //Delete at start
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

    //Delete at end

    // if only 1 node
    if(head->next!=NULL)
    {
        delete head;
        head = NULL;
    }
    //More than 1 node exists
    else
    {
        Node *curr = head;

        // last node to be deleted
        while(curr->next)
        {
            curr= curr->next;
        }

        curr->prev->next = NULL;
        delete curr;
    }
    // traverse
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
