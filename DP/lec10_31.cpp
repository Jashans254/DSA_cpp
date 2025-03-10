class Solution {
    public:
        int minimumTotal(vector<vector<int>>& triangle) {
            
            int n = triangle.size();
    
            vector<int>front(n , 0) , curr(n ,0);
    
            for(int j = 0 ;  j<n;j++) front[j] = triangle[n-1][j];
    
            for(int i = n-2; i>=0; i--)
            {
                for(int j = i; j>=0 ; j--)
                {
                    int d = triangle[i][j] + front[j];
                    int dg = triangle[i][j]  + front[j+1];
    
                    curr[j] = min(d , dg);
                }
                front = curr;
            }
    
            return front[0];
        }
    };