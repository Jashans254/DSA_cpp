#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *left , *right;

    Node(int val) {
        data = val; 
        left = right = NULL;
    }
};

Node *BinaryTree()
{
    int x;
    
    cin>>x;

    if(x == -1)
    {
        return NULL;
    }

    Node *root = new Node(x);

    cout<<"Enter the left child of "<<x<<endl;
    root->left = BinaryTree();
    cout<<"Enter the right child of "<<x<<endl;
    root->right = BinaryTree();
    return root;
}

int main()
{
    cout<<"Enter the value of root"<<endl;
    Node *root = BinaryTree();
    return 0 ;
}