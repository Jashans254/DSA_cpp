https://www.geeksforgeeks.org/problems/trailing-zeroes-in-factorial5134/1

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    int trailingZeroes(int N)
    {
        // Write Your Code here
        int count = 0 ;
        while(N>=5)
        {
            count+= N/5;
            N/=5;
        }
        return count ;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        int ans  = ob.trailingZeroes(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends