class Solution {
    public:
        vector<int> getRow(int n) {
            vector<int> ansE(n + 1, 1); // Initialize with 1's, size n+1
            long long ans = 1;
    
            // Printing the rest of the part and filling ansE
            for (int i = 1; i <= n / 2; i++) {
                ans = ans * (n - i + 1) / i;
                ansE[i] = ans;  // Set the ith value
                ansE[n - i] = ans;  // Set the symmetric value
            }
    
            return ansE;
        }
    };
    