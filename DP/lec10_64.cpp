class Solution {
    public:
    
    int f(int ind , int T , vector<int>&a){
    
        if( ind ==0 ){
    
            return (T % a[0] == 0 );
        }
    
        int notTake = f(ind -1 , T , a);
    
        int take = 0 ;
        if(a[ind]<=T) take = f(ind , T - a[ind] ,a);
    
        return take + notTake ;
    }
        int change(int amount, vector<int>& coins) {
            
            int n = coins.size();
            return f(n-1 , amount , coins);
        }
    };