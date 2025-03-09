class Solution {
    public:
        int minPathSum(vector<vector<int>>& grid) {
            int n = grid.size();
            int m = grid[0].size();
            
            vector<int>prev( m , 0);
            for (int i = 0; i < n; i++) {
                vector<int> curr(m ,0);
                for (int j = 0; j < m; j++) {
                    if (i == 0 && j == 0) {
                        curr[j] = grid[i][j]; // Base case: start position
                    } else {
                        int up = (i > 0) ? prev[j] : INT_MAX;
                        int left = (j > 0) ? curr[j - 1] : INT_MAX;
                        curr[j] = grid[i][j] + min(up, left);
                    }
                }
                prev = curr;
            }
            return prev[m - 1];
        }
    };
    