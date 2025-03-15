class Solution {
    public:
        // Helper function: Checks if a subset with the given target sum exists
        bool isSubsetSum(vector<int>& arr, int target) {
            int n = arr.size();
            
            // Optimized DP arrays (previous & current row)
            vector<bool> prev(target + 1, false), cur(target + 1, false);
    
            // Base case: Sum 0 is always possible
            prev[0] = cur[0] = true;
    
            // If first element is within range, mark it
            if (arr[0] <= target) prev[arr[0]] = true;
    
            // Bottom-Up DP
            for (int ind = 1; ind < n; ind++) {
                for (int i = 1; i <= target; i++) {
                    bool notTake = prev[i];  // Exclude current element
                    bool take = false;
                    if (arr[ind] <= i) 
                        take = prev[i - arr[ind]];  // Include current element
    
                    cur[i] = take || notTake;  // Store result
                }
                prev = cur;  // Move current row to previous
            }
    
            return prev[target];  // Final answer
        }
    
        // Main function: Checks if the array can be partitioned into two equal subsets
        bool canPartition(vector<int>& arr) {
            int n = arr.size(); 
            int totSum = accumulate(arr.begin(), arr.end(), 0);
    
            // If total sum is odd, partitioning is not possible
            if (totSum % 2 != 0) return false;
    
            int target = totSum / 2;
            return isSubsetSum(arr, target);
        }
    };
    