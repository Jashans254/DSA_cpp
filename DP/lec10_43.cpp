//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
  
   
    bool isSubsetSum(vector<int>& arr, int target) {
        

         int n = arr.size();
        
        // Optimized DP arrays (previous & current row)
        vector<bool> prev(target + 1, false), cur(target + 1, false);

        // Base case: Sum 0 is always possible
        prev[0] = cur[0] = true;

        // If first element is within range, mark it
        if (arr[0] <= target) prev[arr[0]] = true;

        // Bottom-Up DP
        for (int ind = 1; ind < n; ind++) {
            for (int i = 1; i <= target; i++) {
                bool notTake = prev[i];  // Exclude current element
                bool take = false;
                if (arr[ind] <= i) 
                    take = prev[i - arr[ind]];  // Include current element

                cur[i] = take || notTake;  // Store result
            }
            prev = cur;  // Move current row to previous
        }

        return prev[target];  // Final answer
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