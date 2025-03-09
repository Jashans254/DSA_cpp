class Solution {
    public:
        int f(int i, int j, vector<vector<int>>& grid) {
            if (i == 0 && j == 0) return grid[i][j]; // Base case: starting cell
            if (i < 0 || j < 0) return INT_MAX; // Out of bounds, return large value
    
            int up = f(i - 1, j, grid);
            int left = f(i, j - 1, grid);
    
            return grid[i][j] + min(up, left);
        }
    
        int minPathSum(vector<vector<int>>& grid) {
            int n = grid.size();
            int m = grid[0].size();
            return f(n - 1, m - 1, grid);
        }
    };
    