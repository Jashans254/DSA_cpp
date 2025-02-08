// by iterative

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(vector<vector<int>>& adj) {
        // Code here
        int V = adj.size();
         vector<int> ans;
        vector<bool> visited(V, 0);
        stack<int> st;
        
        
        st.push(0);
        
        int node;
        
        while(!st.empty()){
            node = st.top();
            st.pop();

            if(!visited[node]){ // Handles the cyclic graph
                ans.push_back(node);
                visited[node] = 1;
            }

            
            // Traversing from right to left so that 
            // the leftmost node gets popped out first
            for(int j=adj[node].size() -1 ; j>=0 ; --j){
                if(!visited[adj[node][j]]){
                    st.push(adj[node][j]);
                }
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<vector<int>> adj(
            V); // Use vector of vectors instead of array of vectors.

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        Solution obj;
        vector<int> ans = obj.dfsOfGraph(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends