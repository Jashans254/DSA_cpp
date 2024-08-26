//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    vector<int> bracketNumbers(string  S) {
        // Your code goes here
        
        int count = 0 ;
        
        stack<int>st;
        vector<int>ans;
        
        for(int i = 0 ;i<S.size();i++)
        {
            // opening bracket
            if(S[i]=='(')
            {
                count++;
                st.push(count);
                ans.push_back(count);
            }
            //closing bracket
            else if( S[i] == ')')
            {
                ans.push_back(st.top());
                st.pop();
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;

        vector<int> ans = ob.bracketNumbers(s);

        for (auto i : ans)
            cout << i << " ";

        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends