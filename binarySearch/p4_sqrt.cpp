//Given a non-negative integer x, return the square root of x rounded down to the nearest integer.
// The returned integer should be non-negative as well. Donot use inbuilt function
//https://leetcode.com/problems/sqrtx/solutions/25047/A-Binary-Search-Solution/comments/181771/
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