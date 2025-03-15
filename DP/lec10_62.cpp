class Solution {
    public:
        int coinChange(vector<int>& nums, int target) {
            int n = nums.size();
            vector<int> prev(target + 1, 1e9), cur(target + 1, 1e9);
    
            // Base case: When target is 0, no coins are needed
            prev[0] = cur[0] = 0;
    
            // Fill base case for first coin
            for (int T = 0; T <= target; T++) {
                if (T % nums[0] == 0) prev[T] = T / nums[0];
            }
    
            for (int ind = 1; ind < n; ind++) {
                for (int T = 0; T <= target; T++) {
                    int notTake = prev[T]; 
                    int take = 1e9;
    
                    if (nums[ind] <= T) take = 1 + cur[T - nums[ind]]; // **Use cur, not prev**
    
                    cur[T] = min(take, notTake);
                }
                prev.swap(cur); // **Efficient way to copy instead of prev = cur**
            }
    
            int ans = prev[target];
            return (ans >= 1e9) ? -1 : ans;
        }
    };
    