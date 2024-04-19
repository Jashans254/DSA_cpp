// https://leetcode.com/problems/power-of-four/description/


class Solution {
    private:
    int powr( int num , int n = 1 )
    {
             if(num == n)
             {
                return 1;
             }
             if(n> num )
             {
                return 0 ;
             }
            if(n>INT_MAX/4 || n<INT_MIN/4) return 0;
            return powr(num,n*4);
    }

public:
    bool isPowerOfFour(int n) {
        if(n==1) return 1;
        //if(n<0) return 0 ;
       return powr(n);
    }
};