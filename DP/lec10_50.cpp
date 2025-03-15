//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
int mod = (int) ( 1e9 + 7);
int f(int ind , int sum , vector<int> &num , vector<vector<int>> &dp){
    
    if(ind == 0){
        
        if(sum == 0 && num[0] == 0) return 2;
        if( sum == 0 || sum == num[0]) return 1;
        
        return 0;
    }
    
    
    if( dp[ind][sum] !=-1) return dp[ind][sum];
    
    int notTake = f(ind - 1 , sum  , num , dp);
    
    int take = 0 ;
    if(num[ind]<=sum) take = f(ind - 1 , sum - num[ind] , num , dp);
    
    return dp[ind][sum] = (notTake + take)%mod;
}

int findWays ( vector<int> &num , int tar)
{
    int n = num.size();
    
    vector<vector<int>> dp( n , vector<int> (tar +1 , -1));
    
    return f( n-1 , tar , num , dp);
}
    int countPartitions(vector<int>& arr, int d) {
        // Code here
        
        int n = arr.size();
        
        int totSum = 0 ;
        
        for( auto &it : arr) totSum +=it;
        
        if(totSum -d <0 || (totSum -d) %2) return false;
        
        return findWays(arr , (totSum -d)/2);
    }
};


//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.countPartitions(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends