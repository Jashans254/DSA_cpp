//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int solve(int n, int m, vector<vector<int>>& grid) {
        // code here
        
        vector<vector<vector<int>>> dp( n  , vector <vector<int>> ( m , vector<int> ( m ,0)));
        
        vector<vector<int>> front( m , vector<int>(m)) , curr( m , vector<int>(m));
        // int front[m][m];
        // int curr[m][m];
        for(int j1 = 0 ; j1<m;j1++){
            
            for(int j2 = 0 ; j2<m; j2++){
                
                if(j1 == j2 ) front[j1][j2] = grid[n-1][j1];
                else front[j1][j2] = grid[n-1][j1]+ grid[n-1][j2];
            }
        }
        
        
        for(int i = n-2 ; i>=0; i--){
            for(int j1 = 0;j1<m; j1++){
                for(int j2 = 0 ; j2<m;j2++){
                    
                    int maxi = -1e9;  // Maximum value from all paths
        for (int dj1 = -1; dj1 <= 1; dj1++) {
            for (int dj2 = -1; dj2 <= 1; dj2++) {
                int value = 0;
                if (j1 == j2) 
                    value = grid[i][j1];  // Both are at the same cell
                else 
                    value = grid[i][j1] + grid[i][j2];  // Different cells
                
                if(j1+dj1>=0 && j1+dj1<m && j2+dj2 >= 0 && j2+dj2 <m)
                {
                value +=front[j1+dj1][j2+dj2];
                }
                else
                {
                    value += -1e8;
                }
                maxi = max(maxi, value);
            }
        }
    curr[j1][j2] =maxi;
                }
            }
            
            front = curr;
        }
        
        return front[0][m-1];
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid;
        for (int i = 0; i < n; i++) {
            vector<int> temp;
            for (int j = 0; j < m; j++) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            grid.push_back(temp);
        }

        Solution obj;
        cout << obj.solve(n, m, grid) << "\n";
        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends