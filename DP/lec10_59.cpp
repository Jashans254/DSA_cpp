class Solution {

    int f(int ind , int T , vector<int> &nums){
    
        if(ind == 0 ){
    
            if(T % nums[0] == 0) return T / nums[0];
    
            return 1e9;
        }
    
        int notTake = 0 + f(ind - 1 , T , nums);
        int take = INT_MAX;
    
        if(nums[ind]<=T) take = 1 + f(ind , T - nums[ind] , nums);
    
        return min(take , notTake);
    }
    public:
        int coinChange(vector<int>& num, int target) {
            int n = num.size();
            int ans = f(n-1 , target , num);
    
            if( ans >= 1e9) return -1;
    
            return ans;
        }
    };