#include<iostream>
#include<queue>
using namespace std;

class Node 
{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
int main(){
    queue<Node*> q;
    int x;
    cout<<"Enter the value of root"<<endl;
    cin>>x;

    Node* root = new Node(x);
    q.push(root);
    int first , second;
    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();
        cout<<"Enter the left child of "<<temp->data<<endl;
        cin>>first;
        if(first!=-1)
        {
            temp->left = new Node(first);
            q.push(temp->left);
        }
        cout<<"Enter the right child of "<<temp->data<<endl;
        cin>>second;
        if(second!=-1)
        {
            temp->right = new Node(second);
            q.push(temp->right);
        }
    }

    return 0;
}