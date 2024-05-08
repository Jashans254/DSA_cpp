//https://leetcode.com/problems/complement-of-base-10-integer/description/

class Solution {
public:
    int bitwiseComplement(int n) {
        int m = n ;
        int mask = 0 ;

        if(n== 0 )
        return 1;

        while(m!=0)
        {
            mask =(mask << 1) | 1 ;
            m = m >>1;
        }
        int ans = (~n) & mask ;

        return ans;
    }
};


//approach-2
class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        int ans = 0 , rem , mul = 1;
        while(n)
        {
            rem = n%2;
            rem = rem^1;
            n = n/2;
            ans = ans+ rem*mul;
            mul = mul*2;
        }
        return ans;
    }
};