class Solution {
    public:
        int climbStairs(int n) {
            if(n<=1)
            {
                return 1;
            }
            int ways1 = 1 , ways2 = 1 ;//intialise
            int totalways = 0;
            for(int i = 2; i<=n;i++)
            {
                totalways = ways1 + ways2;
                ways1 = ways2;
                ways2 = totalways;
            }
    
            return totalways;
        }
    };