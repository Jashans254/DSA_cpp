class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
           int n = nums.size();
        
           vector<int>ans(2,-1);
           for(int i = 0 ; i< n ; i++)
           {
              
             
               for(int j = i+1 ; j<n;j++){
                
               if(nums[i]+nums[j] == target && i !=j){
                ans.push_back(i);
                ans.push_back(j);
                 return {i,j};
               }
                
                
               }
           }
    
           return ans;
        }
    };

// 
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(int n, vector<int> &arr, int target) {
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int moreNeeded = target - num;
        if (mpp.find(moreNeeded) != mpp.end()) {
            return {mpp[moreNeeded], i};
        }
        mpp[num] = i;
    }
    return { -1, -1};
}

// two pointer
class Solution {
    public:
        vector<int> twoSum(vector<int>& arr, int target) {
          int n = arr.size();
          sort(arr.begin() , arr.end());
          int left = 0 , right = n-1;
          while(left <right){
    
            int sum = arr[left] + arr[right];
            if(sum == target){
                return {left , right};
            }
            else if( sum<target) left ++;
            else right --;
          }
    
          return {-1,-1};
        }
        
    };