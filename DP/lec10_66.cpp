class Solution {
    public:
    
    int f(int ind , int T , vector<int>&a ,  vector<vector<int>>&dp){
    
        if( ind ==0 ){
    
            return (T % a[0] == 0 );
        }
        if(dp[ind][T]!=-1) return dp[ind][T];
        int notTake = f(ind -1 , T , a,dp);
    
        int take = 0 ;
        if(a[ind]<=T) take = f(ind , T - a[ind] ,a,dp);
    
        return dp[ind][T] = take + notTake ;
    }
        int change(int amount, vector<int>& a) {
            
            int n = a.size();
            vector<vector<int>> dp(n, vector<int>(amount+1, 0));
    
            for(int T = 0 ; T <= amount;T++){
                dp[0][T] = ( T% a[0] == 0);
            }
    
            for(int ind = 1 ; ind < n; ind++){
    
                for(int T =  0 ; T<=amount ; T++){
    
                    int notTake = dp[ind -1][T]; 
    
        int take = 0 ;
        if(a[ind]<=T) take = dp[ind][T - a[ind] ];
    
        dp[ind][T] = take + notTake ;
                    
                }
            }
            return dp[n-1][ amount ];
        }
    };