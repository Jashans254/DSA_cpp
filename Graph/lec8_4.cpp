// by recursion
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    
    
    void DFS(int node , vector<vector<int>>& adj , vector<bool>&visted , vector<int>&ans)
    {
        visted[node]= 1;
        ans.push_back(node);
        
        for(int j = 0 ; j<adj[node].size();j++)
        {
            if(!visted[adj[node][j]])
            {
                DFS(adj[node][j], adj , visted , ans);
            }
        }
    }
    vector<int> dfsOfGraph(vector<vector<int>>& adj) {
        // Code here
        
        int V = adj.size();
        vector<bool>visted(V,0);
        vector<int>ans;
        DFS(0 , adj , visted ,ans);
        
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