https://www.geeksforgeeks.org/problems/set-bits0143/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int setBits(int n) {
        // Write Your Code here
        
        int count  = 0 ;
        while((n>0))
        {
           
            if(n%2==1) 
            {
                count++ ;
            }
             n=n/2;
        }
        return count ;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}

// } Driver Code Ends