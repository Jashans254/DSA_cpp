//https://leetcode.com/problems/peak-index-in-a-mountain-array/
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int start = 0 , end = n -1 , index ;
        while(start<=end)
        {
            int mid = end + (start - end)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
            {
                index = mid ;
                break;
            }
            else if(arr[mid]>arr[mid-1])// go to right 
            {
                start = mid+1;
            }
            else
            {
                end = mid -1;
            }
        }
        return index;
    }
};