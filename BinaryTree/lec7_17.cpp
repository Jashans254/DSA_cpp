//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to Build Tree
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node* root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

bool isCousins(Node* root, int x, int y);

int main() {

    int t;
    scanf("%d ", &t);
    while (t--) {
        string s;
        getline(cin, s);
        Node* root = buildTree(s);
        int x, y;
        scanf("%d ", &x);
        scanf("%d ", &y);
        if (x == y) {
            cout << "0\n";
            continue;
        }
        cout << isCousins(root, x, y) << endl;
    }
    return 1;
}
// } Driver Code Ends


/*Complete the function below
Node is as follows:
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
// Returns true if the nodes with values 'a' and 'b' are cousins. Else returns false
bool parent(Node *root , int a , int b)
{
    if(!root)
        return false;
      
    if(root->left && root->right)
    {
        if((root->left->data == a && root->right->data == b) || 
           (root->left->data == b && root->right->data == a))
        {
            return true;
        }
    }
    
    return parent(root->left , a , b) || parent(root->right , a , b);
}

// Returns true if the nodes with values 'a' and 'b' are cousins. Else returns false
bool isCousins(Node *root, int a, int b) {
    if (!root) return false;

    queue<Node*> q;
    q.push(root);
    
    int l1 = -1, l2 = -1;
    int level = 0;
    
    while(!q.empty())
    {
        int n = q.size();
        
        while(n--) // process all nodes at the current level
        {
            Node *temp = q.front();
            q.pop();
            
            if(temp->data == a)
                l1 = level;
              
            if(temp->data == b)
                l2 = level;
               
            if(temp->left)
                q.push(temp->left);
              
            if(temp->right)
                q.push(temp->right);
        }
        
        // After processing the entire level, check if both nodes are found.
        if (l1 != -1 && l2 != -1)
            break;

        level++;
    }
    
    // If both nodes are found and they are at the same level, check their parents.
    if (l1 == l2 && l1 != -1)
        return !parent(root, a, b);

    // If nodes are not on the same level or one/both are not found.
    return false;
}