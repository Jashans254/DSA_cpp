//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int longestCommonSubstr(string& s, string& t) {
        // your code here
        
                 int n = s.size(), m = t.size();

        vector<vector<int>> dp(n+1, vector<int>(m+1, 0)); // DP table initialized to 0
        
        vector<int> prev(m+1 ,0) , cur(m+1 ,0);
        // Fill the DP table
        int ans = 0 ;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (s[i-1] == t[j-1])  {
                    cur[j] = 1 + prev[j-1];  
                    ans = max ( ans ,cur[j]);}
                else  {
                    cur[j] = 0;  }
            }
            prev = cur;
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr(s1, s2) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends