//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int minCost(vector<int>& height) {
        // Code here
        
        int n = height.size();
        
       
        
        int prev = 0 ;
        int prev2 = 0 ;
        int curr = 0 ;
        for(int i = 1 ; i<n;i++)
        {
            int fs = prev + abs(height[i]- height[i-1]);
            
            int ss = INT_MAX;
            
            if(i>1)
            {
                ss = prev2 + abs(height[i]- height[i-2]);
            }
            
            curr= min(fs , ss);
            
            prev2 = prev;
            prev = curr;
        }
        
        return prev;
    }
};


//{ Driver Code Starts.

int main() {
    string str;
    getline(cin, str);
    int t = stoi(str);
    while (t--) {
        getline(cin, str);
        stringstream ss(str);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution ob;
        cout << ob.minCost(arr) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends