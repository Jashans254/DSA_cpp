// https://leetcode.com/problems/ugly-number/

class Solution {
public:
    bool isUgly(int n) {
        if(n <= 0) 
            return false; // 0 and negative numbers are not considered ugly
        for (int i = 2; i <= 5; ++i) {
            while (n % i == 0)
                n /= i;
        }
        return n == 1; // if n becomes 1, it means all its prime factors are 2, 3, or 5
    }
};
