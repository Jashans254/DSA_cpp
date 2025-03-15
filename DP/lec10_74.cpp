//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
  
int f(int ind , int N , vector<int> &price , vector<vector<int>>&dp){
    
    if(ind == 0){
        return N * price[0];
    }
    if(dp[ind][N]!=-1) return dp[ind][N];
    int notTake = 0 + f(ind-1 , N , price ,dp);
    int take = INT_MIN;
    
    int rodLength = ind +1 ;
    if( rodLength <=N){
        
        take = price[ind] + f(ind , N- rodLength ,price,dp);
    }
    
    return dp[ind][N] = max(take , notTake);
}
    int cutRod(vector<int> &price) {
        // code here
        
        int n = price.size();
        
        vector<vector<int>>dp (n , vector<int>( n+1 , 0));
        
        for(int N = 0 ; N<=n; N++){
            dp[0][N] =  N * price[0];
        }
        
        for(int ind = 1 ; ind<n;ind++){
            
            for(int N = 0 ; N<=n;N++){
                    int notTake = 0 + dp[ind-1][ N ];
                    int take = INT_MIN;
                    
                    int rodLength = ind +1 ;
                    if( rodLength <=N){
                    
                    take = price[ind] + dp[ind ][ N- rodLength ];
                    }
                    
                    dp[ind][N] = max(take , notTake);                
            }
        }
        return dp[n-1 ][ n]; 
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution ob;

        cout << ob.cutRod(a) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends