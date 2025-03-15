//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    int perfectSum(vector<int>& num, int tar) {
        int n = num.size();
        vector<vector<int>> dp(n, vector<int>(tar + 1, 0));

        // Base case: empty subset always forms a sum of 0.
        dp[0][0] = 1;
        
        // If the first element is within the target range, count it
        if (num[0] <= tar) dp[0][num[0]] += 1;  

        // Special case for num[0] == 0 (double count the empty subset)
        if (num[0] == 0) dp[0][0] = 2;  

        for (int ind = 1; ind < n; ind++) {
            for (int sum = 0; sum <= tar; sum++) {
                int notTake = dp[ind - 1][sum];
                int take = 0;
                if (num[ind] <= sum) take = dp[ind - 1][sum - num[ind]];

                dp[ind][sum] = notTake + take;
            }
        }

        return dp[n - 1][tar];
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