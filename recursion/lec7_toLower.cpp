// https://www.geeksforgeeks.org/problems/java-convert-string-to-lowercase2313/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

//seg fault 1010/1012 test cases

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
    
    void to_lower(string &S , int index)
{
    if (index < 0 || index >= S.length()) {
        return;
    }
    if( S[index] >='A' &&S[index]<='Z')
    {
    S[index] = S[index]-'A' +'a';
    }
    to_lower(S , index-1);
}
  public:
    string toLower(string s) {
        // code here
        to_lower(s , s.size()-1);
        return s;
    }
    
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.toLower(s) << endl;
    }
    return 0;
}

// } Driver Code Ends