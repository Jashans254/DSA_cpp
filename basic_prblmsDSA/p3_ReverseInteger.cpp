//https://leetcode.com/problems/reverse-integer/description/
class Solution {
public:
    int reverse(int X) {
        int rem , ans = 0 ;
        while(X)
        {
            rem  = X%10;
            X/=10;
            if(ans > INT_MAX/10 || ans<INT_MIN/10)
            return 0;
            ans = ans*10 +rem;
        }
        return ans;
    }
};