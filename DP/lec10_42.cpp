//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
  
    bool f(int ind , int target , vector<int> &arr,vector<vector<int>>&dp){
        if(target == 0 )  return true;
        
        if( ind == 0 ) return ( arr[0] == target);
        
        if(dp[ind][target]!= -1) return dp[ind][target];
        bool notTake = f(ind - 1 , target , arr,dp);
        bool take = false;
        if(arr[ind] <=target) take = f( ind-1 , target-arr[ind],arr,dp);
        return dp[ind][target]=take | notTake;
    }
    bool isSubsetSum(vector<int>& arr, int target) {
        // code here
         int n = arr.size();
        
        // 2D DP Table
        vector<vector<bool>> dp(n, vector<bool>(target + 1, false));

        // Base Case: Sum 0 is always possible
        for (int i = 0; i < n; i++) dp[i][0] = true;

        // Base Case: If first element is within target range
        if (arr[0] <= target) dp[0][arr[0]] = true;

        // Bottom-Up DP
        for (int ind = 1; ind < n; ind++) {
            for (int i = 1; i <= target; i++) {
                bool notTake = dp[ind - 1][i];  // Exclude current element
                bool take = false;
                if (arr[ind] <= i) 
                    take = dp[ind - 1][i - arr[ind]];  // Include current element

                dp[ind][i] = take || notTake;  // Store result
            }
        }

        return dp[n - 1][target];  // Final answer
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int sum;
        cin >> sum;
        cin.ignore();

        Solution ob;
        if (ob.isSubsetSum(arr, sum))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends