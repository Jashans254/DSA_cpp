//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  int f(int  ind , int sum , vector<int>&num,vector<vector<int>> &dp){
      
      if(sum == 0) return 1;
      if(ind == 0) return num[0] == sum;
      if(dp[ind][sum]!=-1) return dp[ind][sum];
      int notTake =f(ind-1 , sum,num,dp);
      int take = 0 ;
      if(num[ind]<=sum) take = f(ind-1 , sum - num[ind],num,dp);
      
      
      return dp[ind][sum] = notTake + take;
  }
    int perfectSum(vector<int>& num, int tar) {
        // code here
         int n = num.size();
        vector<vector<int>> dp( n , vector<int>(tar+1 ,-1));
       
        
        return f(n-1 , tar , num , dp);
    }
};





//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int target;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> target;
        cin.ignore(); // Ignore newline character after target input

        Solution solution;
        cout << solution.perfectSum(arr, target);
        cout << "\n~\n";
    }

    return 0;
}

// } Driver Code Ends