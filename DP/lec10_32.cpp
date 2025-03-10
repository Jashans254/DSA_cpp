class Solution {
    public:
        int f(int i, int j, vector<vector<int>>& matrix) {
            if (j < 0 || j >= matrix[0].size()) return 1e8;  // Handling out-of-bound cases
            if (i == 0) return matrix[0][j];  // Base case: first row values are taken as is
    
            int up = matrix[i][j] + f(i - 1, j, matrix);
            int leftDiag = matrix[i][j] + f(i - 1, j - 1, matrix);
            int rightDiag = matrix[i][j] + f(i - 1, j + 1, matrix);
    
            return min({up, leftDiag, rightDiag});  // Finding the minimum path sum
        }
    
        int minFallingPathSum(vector<vector<int>>& matrix) {
            int n = matrix.size();
            int m = matrix[0].size();
            int mini = 1e8;  // Initialize to a large value
    
            for (int j = 0; j < m; j++) {
                mini = min(mini, f(n - 1, j, matrix));  // Start from the last row
            }
    
            return mini;
        }
    };
    