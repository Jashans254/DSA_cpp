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
    Node *head = new Node(10);
    cout<<head->data<<endl;
    cout<<head->next<<endl;
}