https://www.geeksforgeeks.org/problems/transpose-of-matrix-1587115621/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find transpose of a matrix.
    void transpose(vector<vector<int>>& mat, int n) {
        // code here
        
        for(int i = 0 ; i<n;i++)
        {
            for(int j = i+1  ; j<n;j++)
            {
                swap(mat[i][j],mat[j][i]);
            }
        }
    }
};

