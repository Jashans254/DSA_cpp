class Solution {
    public:
        int largestRectangleArea(vector<int>& histo) {
            stack<int> st; 
            int maxA = 0; 
            int n = histo.size(); 
    
            for(int i = 0; i <= n; i++) { 
                while (!st.empty() && (i == n || histo[st.top()] >= histo[i])) { 
                    int height = histo[st.top()]; 
                    st.pop(); 
                    int width = st.empty() ? i : i - st.top() - 1; 
                    maxA = max(maxA, width * height); 
                } 
                st.push(i); 
            } 
            return maxA; 
        }
    
        int maximalRectangle(vector<vector<char>>& mat) {
            int n = mat.size();
            if (n == 0) return 0; // Edge case: empty matrix
            int m = mat[0].size();
            int maxArea = 0;
            vector<int> height(m, 0);
    
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    height[j] = (mat[i][j] == '1') ? height[j] + 1 : 0; // ✅ Fixed comparison
                }
                int area = largestRectangleArea(height);
                maxArea = max(maxArea, area);
            }
            return maxArea;
        }
    };
    