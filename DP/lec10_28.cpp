class Solution {
    public:
        
        int f( int i , int  j ,vector<vector<int>>& triangle,int n)
        {
            if(i== n-1){
                return triangle[n-1][j];
    
            }
    
            int d = triangle[i][j] + f(i+1,j, triangle , n);
            int dg = triangle[i][j] + f(i+1 , j+1 , triangle , n);
    
            return min(d , dg);
        }
        int minimumTotal(vector<vector<int>>& triangle) {
    
            
            int n = triangle.size();
            vector<vector<int>> dp(n , vector<int>(n , -1));
            return f(0 , 0 , triangle , n);
            
        }
    };