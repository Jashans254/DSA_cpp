//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
  
int f(int ind , int W , vector<int> &val , vector<int> & wt){
    
    if(ind == 0){
        
        return ((int )(W / wt[0]))* val[0];
    }
    
    int notTake = 0 + f(ind-1 , W , val , wt);
    
    int take = 0 ;
    if(wt[ind]<= W){
        take = val[ind] + f(ind , W - wt[ind] , val , wt);
    }
    return max(take , notTake);
}
    int knapSack(vector<int>& val, vector<int>& wt, int w) {
        // code here
        int n = val.size();
        return f(n-1 , w  , val , wt);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int W;
        cin >> W;
        cin.ignore();
        string str;
        getline(cin, str);
        stringstream ss(str);
        vector<int> val;
        int num;
        while (ss >> num) {
            val.push_back(num);
        }
        string str2;
        getline(cin, str2);
        stringstream ss2(str2);
        vector<int> wt;
        int num2;
        while (ss2 >> num2) {
            wt.push_back(num2);
        }
        Solution ob;
        cout << ob.knapSack(val, wt, W) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends