//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
  
    bool f(int ind , int target , vector<int> &arr){
        if(target == 0 )  return true;
        
        if( ind == 0 ) return ( arr[0] == target);
        
        bool notTake = f(ind - 1 , target , arr);
        bool take = false;
        if(arr[ind] <=target) take = f( ind-1 , target-arr[ind],arr);
        return take | notTake;
    }
    bool isSubsetSum(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        return f(n-1 , target , arr);
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