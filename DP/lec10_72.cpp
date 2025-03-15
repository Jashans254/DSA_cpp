//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
  
int f(int ind , int N , vector<int> &price){
    
    if(ind == 0){
        return N * price[0];
    }
    
    int notTake = 0 + f(ind-1 , N , price);
    int take = INT_MIN;
    
    int rodLength = ind +1 ;
    if( rodLength <=N){
        
        take = price[ind] + f(ind , N- rodLength ,price);
    }
    
    return max(take , notTake);
}
    int cutRod(vector<int> &price) {
        // code here
        
        int n = price.size();
        
        
        return f(n-1 , n , price);
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