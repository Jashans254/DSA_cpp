//program to find first and last occurance of a target element using BS
//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int n = arr.size();
        int start = 0 , end = n-1  , mid;
        int first =-1;
        int last = -1;
        // first position
        while(start<=end)
        {
            mid = start + (end - start )/2;
            if(arr[mid] == target)
            {
                first = mid;//update first (it can be first posn)
                end = mid - 1;//go to left to check other ocuurence if present
            }
            else if(arr[mid]<target)// go to right
            {
               start = mid +1; 
            }
            else
            {
                end = mid -1;
            }
        }
        // last position
        start = 0  ;//start and end should be again intailized 
        end = n-1;
        while(start<=end)
        {
            mid = start + (end - start )/2;
            if(arr[mid] == target)
            {
                last = mid;//update last (it can be last posn)
                start = mid +1;//go to right to check other ocuurence if present
            }
            else if(arr[mid]<target)// go to right
            {
               start = mid +1; 
            }
            else
            {
                end = mid -1;
            }
        }
        vector<int>a(2);
        a[0] = first ;
        a[1] = last;
        return a;
    }
};