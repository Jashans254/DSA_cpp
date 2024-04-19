// https://www.geeksforgeeks.org/problems/java-reverse-a-string0416/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab
//seg fault

//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
    void rev(string &str , int start , int end)
    {
        if(start>=end)
        {
            return ;
        }
        
        char c = str[start] ;
        str[start] = str[end];
        str[end] = c;
        
        rev(str , start + 1 , end -1);
    }
  public:
    string revStr(string s) {
        // code here
        
        rev(s , 0 , s.size() -1);
        return s;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.revStr(s) << endl;
    }
    return 0;
}

// } Driver Code Ends