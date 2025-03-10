class Solution {
    public:
        int f(int i, int j, vector<vector<int>>& matrix, vector<vector<int>>&dp) {
            if (j < 0 || j >= matrix[0].size()) return 1e8;  // Handling out-of-bound cases
            if (i == 0) return matrix[0][j];  // Base case: first row values are taken as is
    
            if(dp[i][j]!=-1) return dp[i][j];
            int up = matrix[i][j] + f(i - 1, j, matrix,dp);
            int leftDiag = matrix[i][j] + f(i - 1, j - 1, matrix,dp);
            int rightDiag = matrix[i][j] + f(i - 1, j + 1, matrix,dp);
    
            return dp[i][j]= min({up, leftDiag, rightDiag});  // Finding the minimum path sum
        }
    
        int minFallingPathSum(vector<vector<int>>& matrix) {
            int n = matrix.size();
            int m = matrix[0].size();
            int mini = 1e8;  // Initialize to a large value
    
            vector<vector<int>>dp(n , vector<int> (m , -1));
    
    
            for(int j = 0 ; j<m;j++) dp[0][j] = matrix[0][j];
            for(int i = 1 ; i<n; i++){
                for(int j = 0 ; j<m; j++){
                    int u = matrix[i][j] +dp[i-1][j];
                    int ld = matrix[i][j] ;
                    if(j-1>=0) ld+= dp[i-1][j-1];
                    else ld +=1e8;
                    int rd =  matrix[i][j];
                    if(j+1<m) rd+= dp[i-1][j+1];
                    else rd += 1e8;
    
                    dp[i][j] = min({u , ld , rd});
                }
            } 
            for (int j = 0; j < m; j++) {
                mini = min(mini, dp[n-1][j]);  // Start from the last row
            }
    
            return mini;
        }
    };
    