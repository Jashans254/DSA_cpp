//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    
  public:
  long long fibTD(int n, vector<long long> &dp) {
        if (n <= 1) {
            return n;
        }
        
        if (dp[n] != -1) {
            return dp[n];
        }
        
        return dp[n] = (fibTD(n - 1, dp) + fibTD(n - 2, dp)) % 1000000007;
    }
    long long int topDown(int n) {
        // code here
               vector<long long> fib(n + 1, -1);
        return fibTD(n, fib);

    }
    long long int bottomUp(int n) {
        // code here
 if (n <= 1) return n;
        
        long long prev2 = 0, prev = 1;
        
        for (int i = 2; i <= n; i++) {
            long long cur_i = (prev2 + prev) % 1000000007;
            prev2 = prev;
            prev = cur_i;
        }
        
        return prev;
    }
    
};

//{ Driver Code Starts.

