class Solution {
    public:
        int minimumDifference(vector<int>& arr) {
            int n = arr.size();
    
            int totSum = accumulate(arr.begin(), arr.end(), 0); // Efficient sum calculation
            int k = totSum;
    
            vector<vector<bool>> dp(n, vector<bool>(k + 1, false));
    
            // Base case: sum 0 is always possible
            for (int i = 0; i < n; i++) dp[i][0] = true;
    
            // Only mark dp[0][arr[0]] if it's within bounds
            if (arr[0] <= k) dp[0][arr[0]] = true;
    
            // DP filling
            for (int ind = 1; ind < n; ind++) {
                for (int target = 1; target <= k; target++) {
                    bool notTake = dp[ind - 1][target];
                    bool take = false;
    
                    if (arr[ind] <= target) 
                        take = dp[ind - 1][target - arr[ind]];
    
                    dp[ind][target] = take || notTake;
                }
            }
    
            // Finding the minimum partition difference
            int mini = INT_MAX;
            for (int s1 = 0; s1 <= totSum / 2; s1++) {
                if (dp[n - 1][s1]) {
                    mini = min(mini, abs((totSum - s1) - s1));
                }
            }
            return mini;
        }
    };
    