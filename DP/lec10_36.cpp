//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  
      int f(int i, int j1, int j2, int r, int c, vector<vector<int>>& grid) {
        if (j1 < 0 || j2 < 0 || j1 >= c || j2 >= c) {
            return -1e9;  // Large negative value for invalid states
        }

        if (i == r - 1) {  // Base case: Last row
            if (j1 == j2) return grid[i][j1];
            else return grid[i][j1] + grid[i][j2];
        }

        int maxi = -1e9;  // Maximum value from all paths
        for (int dj1 = -1; dj1 <= 1; dj1++) {
            for (int dj2 = -1; dj2 <= 1; dj2++) {
                int value = 0;
                if (j1 == j2) 
                    value = grid[i][j1];  // Both are at the same cell
                else 
                    value = grid[i][j1] + grid[i][j2];  // Different cells
                
                value += f(i + 1, j1 + dj1, j2 + dj2, r, c, grid);
                maxi = max(maxi, value);
            }
        }
        return maxi;
    }
    int solve(int r, int c, vector<vector<int>>& grid) {
        // code here
        
       return f(0, 0, c - 1, r, c, grid);
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