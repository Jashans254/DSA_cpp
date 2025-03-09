//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  
  int f (int ind , vector<int>&heights, vector<int>&dp)
  {
      if(ind == 0 ) return 0 ;
      
      if(dp[ind]!=-1) return dp[ind];
      int left = f(ind - 1 , heights,dp)+ abs(heights[ind] - heights[ind-1]);
      
      int right = INT_MAX;
      
      if(ind>1)
      {
          right = f( ind - 2, heights,dp)+ abs(heights[ind] - heights[ind-2]);
      }
      
      return dp[ind] = min(left , right);
  }
    int minCost(vector<int>& height) {
        // Code here
        int n = height.size();
        vector<int> dp(n+1 , -1);
        return f(n-1 , height, dp);
    }
};


//{ Driver Code Starts.

int main() {
    string str;
    getline(cin, str);
    int t = stoi(str);
    while (t--) {
        getline(cin, str);
        stringstream ss(str);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution ob;
        cout << ob.minCost(arr) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends