https://www.geeksforgeeks.org/problems/smallest-window-containing-0-1-and-2--170637/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string S) {
        // Code here
        vector<int>count(256 , 0);
        int first = 0 ,second = 0 ,len = S.size();
        
        int diff = 3; // 0 , 1, 2
        int diff1= 0;
        while(first<S.size())
        {
            if(count[S[first]]==0)
                  {
                      diff1++;
                  }
            count[S[first]]++;
            first++;
        }
        if(diff1<diff)
        {
            return -1;
        }
        for(int i = 0 ; i<count.size();i++)
        {
            count[i] = 0 ;
        }
        first = 0 ;
        while(second<S.size())
        {
            //diff exist
            while(diff && second<S.size())
            {
                if(count[S[second]] == 0)
                {
                    diff--;
                }
                count[S[second]]++;
                second ++;
            }
            
            len = min(len , second - first);
            
            while(diff!=1)
            {
                  len = min(len , second - first);
                  count[S[first]]--;
                  if(count[S[first]]==0)
                  {
                      diff++;
                  }
                  first++;
            }
        }
        return len;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}
// } Driver Code Ends