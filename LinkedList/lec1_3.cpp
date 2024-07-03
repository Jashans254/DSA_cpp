#include<iostream>
using namespace std;
// insertion at the end
class Node
{
    public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }

};
int main()
{
    Node *Head = NULL;
    Node *Tail = NULL;
    int arr[] = {2 , 4 , 6 , 8 , 10};
    //insert the value at end
    for(int i = 0 ;i<5;i++){
    // Linked list is empty
    if(Head = NULL)
    {
        Head = new Node(4);
        Tail = Head;
    }
    // Linked list exists 
    else{
        Tail->next = new Node(arr[i]);
        Tail = Tail->next;
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