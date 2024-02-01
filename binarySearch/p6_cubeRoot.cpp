//https://www.geeksforgeeks.org/problems/cube-root-of-a-number0915/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int cubeRoot(int x) {
        // code here
        if(x<2) return x;
        int start = 1 , end = x ,mid,index;
        while(start <=end)
        {
            mid = start + (end - start)/2;
            if(mid*mid == x/mid)
            {
                index = mid;
                break;
            }
            else if(mid*mid > x/mid)
            {
                end = mid -1;
            }
            else
            {
                index = mid;
                start = mid +1;
            }
        }
        return index;
    }
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.cubeRoot(N) << endl;
    }
    return 0;
}
// } Driver Code Ends