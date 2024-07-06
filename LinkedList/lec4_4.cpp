//Insertion using recursion
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

    //insert at any position
    int pos = 2 ;

    // insert at start
    if(pos == 0)
    {
        // LinkedList doesn't exist
        if(head == NULL)
        {
            head = new Node(5);
        }
        // LinkedList exists
        else{
            Node *temp = new Node(5);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }
    else{
        Node *curr = head;
        //Go to the node , after which i have to insert
        while(--pos)
        {
            curr = curr->next;
        }
         // insert at end
         if(curr->next == NULL)
         {
            Node *temp = new Node(5);
            temp->prev = curr;
            curr->next = temp;
         }
        // insert at middle
        else{
            Node *temp = new Node(5);
            temp->next = curr->next;
            temp->prev = curr;
            curr->next->prev = temp;
            curr->next = temp;
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
