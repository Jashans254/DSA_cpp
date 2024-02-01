//Given a sorted array of distinct integers and a target value, 
//return the index if the target is found. 
//If not, return the index where it would be if it were inserted in order.
//https://leetcode.com/problems/search-insert-position/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0 , end = n-1 , mid ,index;
        while(start <=end)
        {
            mid = start +(end- start)/2;
            if(nums[mid] == target)
            {
                index = mid ; // found
                break;
            }
            else if (nums[mid] < target )
            {
                start = mid +1 ;// go to right 
            }
            else  
            {
                index = mid ; // it can be 
                end = mid - 1;// go to left 
            }
        }
        return index;
    }
};