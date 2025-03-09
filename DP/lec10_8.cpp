//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  
  int solveUtil(int n ,vector<int>& arr, vector<int>&dp,int k)
  {
     
     dp[0]=0;
     
     for(int i = 1;i<n;i++)
     {
         int mmSteps = INT_MAX;
         
         for(int j = 1 ; j<=k;j++)
         {
             if(i-j>=0) {
                 int jump = dp[i-j] + abs(arr[i] - arr[i-j]);
                 mmSteps = min(jump , mmSteps);
             }
         }
         dp[i] = mmSteps;
     }
      return dp[n-1];
  }
  int solve(int n , vector<int> & arr, int k )
  {
      vector<int>dp(n , -1);
      
      return solveUtil(n,arr,dp,k);
  }
    int minimizeCost(int k, vector<int>& arr) {
        // Code here
        
        int n = arr.size();
        
        vector<int>dp(n , -1);
        
        return solve(n, arr, k);
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.minimizeCost(k, arr);
        cout << res << endl;
        cout << "~" << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends