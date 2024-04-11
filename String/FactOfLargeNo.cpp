https://www.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1
//Find the Factorial of a large number
//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> factorial(int N){
        // code here
        vector<int>ans(1,1);
        while(N>1)
        {
            int carry = 0 , res , size = ans.size();
            for(int i = 0;  i<size;i++)
            {
                res = ans[i]*N + carry;
                carry = res/10;
                ans[i] = res%10;
            }
            
            while(carry)
            {
                ans.push_back(carry%10);
                carry/=10;
                
            }
            N--;
        }
        reverse(ans.begin() , ans.end());
        return ans;
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
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends