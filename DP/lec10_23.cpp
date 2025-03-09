class Solution {
    public:
        int uniquePathsWithObstacles(vector<vector<int>>& mat) {
            int n = mat.size();
            int m = mat[0].size();
            
            vector<int> prev(m, 0); // Should be of size m (columns)
    
            for (int i = 0; i < n; i++) { // Iterate row-wise
                vector<int> curr(m, 0);
                for (int j = 0; j < m; j++) { // Iterate column-wise
                    if (mat[i][j] == 1) {
                        curr[j] = 0; // Obstacle, no path
                    } else if (i == 0 && j == 0) {
                        curr[j] = 1; // Start cell
                    } else {
                        int up = (i > 0) ? prev[j] : 0;
                        int left = (j > 0) ? curr[j - 1] : 0;
                        curr[j] = up + left;
                    }
                }
                prev = curr; // Move current row to previous row
            }
            
            return prev[m - 1]; // Return last cell of last row
        }
    };
    