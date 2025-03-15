//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    int perfectSum(vector<int>& num, int tar) {
        int n = num.size();
        vector<int> prev(tar+1,0) , cur(tar+1);

        prev[0] = cur[0] = 1;
        
        if(num[0] <=tar ) prev[num[0]] = 1;

        for (int ind = 1; ind < n; ind++) {
            for (int sum = 0; sum <= tar; sum++) {
                int notTake = prev[sum];
                int take = 0;
                if (num[ind] <= sum) take = prev[sum - num[ind]];

                cur[sum] = notTake + take;
            }
            
            prev = cur;
        }

        return prev[tar];
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