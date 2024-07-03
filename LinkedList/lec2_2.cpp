//Deletion of last node
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

Node* CreateLinkedList(int arr[] , int index , int size)
{
    if(index == size)
    {
        return NULL;
    }
    Node *temp;
    temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr , index+1 , size);
    return temp;
}


int main()  
{       
    Node *Head;
    Head = NULL;    

    int arr[] = {2 , 4, 6, 8 , 10};

    // 5 values already inserted at end
    Head = CreateLinkedList(arr , 0 , 5);

   // Deletion of last node
   if(Head!=NULL)
   {
    // only one Node is present
    if(Head->next == NULL)
    {
        Node * temp = Head;
        delete temp;
        Head = NULL;
    }
    //more than 1 node is  present
    else
    {
        Node *curr = Head;
        Node *prev = NULL;

        // curr->next = NULL
        while(curr->next!=NULL)
        {
            prev = curr;
            curr = curr->next;
        }
        delete curr;
        prev->next = NULL;

    }
   }
    Node *temp;
    temp = Head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}