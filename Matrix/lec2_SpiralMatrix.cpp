https://leetcode.com/problems/spiral-matrix/description/

class Solution {
    public:
        vector<int> spiralOrder(vector<vector<int>>& matrix) {
            int top = 0; 
            int right = matrix[0].size() - 1; 
            int bottom = matrix.size() - 1; 
            int left = 0; 
    
            vector<int> ans;
    
            while (top <= bottom && left <= right) {
                // Traverse from left to right
                for (int j = left; j <= right; j++) {
                    ans.push_back(matrix[top][j]);
                }
                top++;
    
                // Traverse from top to bottom
                for (int i = top; i <= bottom; i++) {
                    ans.push_back(matrix[i][right]);
                }
                right--;
    
                // Traverse from right to left (if there are remaining rows)
                if (top <= bottom) {
                    for (int j = right; j >= left; j--) {
                        ans.push_back(matrix[bottom][j]);
                    }
                    bottom--;
                }
    
                // Traverse from bottom to top (if there are remaining columns)
                if (left <= right) {
                    for (int i = bottom; i >= top; i--) {
                        ans.push_back(matrix[i][left]);
                    }
                    left++;
                }
            }
    
            return ans;
        }
    };
    