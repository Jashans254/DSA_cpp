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

    // traverse
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
