//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
    

  public:
    vector<string> all_longest_common_subsequences(string s, string t) {
        // Code here
         int n = s.size(), m = t.size();

        vector<vector<int>> dp(n+1, vector<int>(m+1, 0)); // DP table initialized to 0

        // Fill the DP table
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (s[i-1] == t[j-1])  
                    dp[i][j] = 1 + dp[i-1][j-1];  
                else  
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);  
            }
        }
        int len = dp[n][m];  // Answer is in the last cell
        
        vector<string> ans(len , '$')

        
        int index = len -1;
        int i = n , j = m;
        while(i>0 && j>0){
            
            if(s[i-1] == t[j-1]){
                ans[index] = s[i-1];
                index--;
                i-- , j--;
            }
            else if(dp[i-1][j] >dp[i][j-1]){
                i--;
            }
            else j--;
        }
        
        
        return ans;
    }
};

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    vector<string> all_longest_common_subsequences(string s1, string s2) {
        int n1 = s1.size(), n2 = s2.size();

        // Step 1: Create and Fill DP Table in Reverse Order
        vector<vector<int>> dp(n1 + 1, vector<int>(n2 + 1, 0));

        for (int i = n1 - 1; i >= 0; i--) {
            for (int j = n2 - 1; j >= 0; j--) {
                if (s1[i] == s2[j])  
                    dp[i][j] = 1 + dp[i + 1][j + 1];  
                else  
                    dp[i][j] = max(dp[i + 1][j], dp[i][j + 1]);  
            }
        }

        // Step 2: Backtracking with Memoization
        unordered_set<string> ans; // Using unordered_set for efficiency
        unordered_set<string> visited; // To avoid duplicate recursive calls

        function<void(int, int, string)> f = [&](int i, int j, string lcs) {
            if (i == n1 || j == n2) {
                ans.insert(lcs);  // Store the LCS found
                return;
            }

            string key = to_string(i) + "," + to_string(j) + "," + lcs;
            if (visited.count(key)) return; // Skip if already visited
            visited.insert(key);

            if (s1[i] == s2[j]) {
                f(i + 1, j + 1, lcs + s1[i]);
            } else {
                if (dp[i][j] == dp[i][j + 1]) f(i, j + 1, lcs);
                if (dp[i][j] == dp[i + 1][j]) f(i + 1, j, lcs);
            }
        };

        f(0, 0, "");

        vector<string> result(ans.begin(), ans.end());
        sort(result.begin(), result.end());  // Sort once at the end
        return result;
    }
};



//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        vector<string> ans = ob.all_longest_common_subsequences(s, t);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends