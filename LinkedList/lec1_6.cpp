// insertion at any particular position

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

    int arr[] = { 2 , 4, 6, 8};

    // 5 values already inserted at end
    Head = CreateLinkedList(arr , 0 , 5);
    Node *temp;
    temp = Head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<"\nAfter insertion\n";
    int x = 3 ; // insertion at 3rd position
    int value = 30 ;
    temp = Head;
    x--;

    while(x--)
    {
        temp = temp->next;
    }
    Node *temp2 = new Node(value);
    temp2->next = temp->next;
    temp->next = temp2;

    temp = Head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0 ;
}