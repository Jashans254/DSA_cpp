//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
class Solution {
public:
    int findMin(vector<int>& arr) {
        int n = arr.size();
        int start = 0 , end = n -1 ;
        int ans = arr[0];
        while(start <=end)
        {
            int mid = start + (end - start )/2;
            if(arr[mid]>=arr[0])// go to right 
            {
                start = mid +1;
            }
            else
            {
                ans = arr[mid];
                end = mid -1;
            }
        }
        return ans;
    }
};