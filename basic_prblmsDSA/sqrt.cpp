// https://leetcode.com/problems/sqrtx/description/

//by simple while loop
class Solution {
public:
    int mySqrt(int x) {
        if(x<2) return x;
        int i = 1;
        while(i<=x/i)
        {
            if(i==x/i)
            {
                return i;
            }
            i++;
        }
        return i-1;
    }
};

// by using binary search
class Solution {
public:
    int mySqrt(int x) {
        if(x<2) return x;
        int start = 1 , end = x ,mid,index;
        while(start <=end)
        {
            mid = start + (end - start)/2;
            if(mid == x/mid)
            {
                index = mid;
                break;
            }
            else if(mid > x/mid)
            {
                end = mid -1;
            }
            else
            {
                index = mid;
                start = mid +1;
            }
        }
        return index;
    }
};