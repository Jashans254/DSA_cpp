https://www.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // You need to complete this function
    
    void tohcal(int N , int sour , int help  , int dest)
    {
        if(N==1)
        {
            cout<<"move disk " << N<<" from rod "<<sour<<" to rod "<<dest<<endl;
            return ;
        }
        tohcal(N-1 , sour , dest, help);
        cout<<"move disk " << N<<" from rod "<<sour<<" to rod "<<dest<<endl;
        
        tohcal(N-1 , help, sour , dest);
        
    }
    // avoid space at the starting of the string in "move disk....."
    long long toh(int N, int from, int to, int aux) {
        // Your code here
        tohcal(N ,  from , aux , to);
        return pow(2 , N)-1;
    }

};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}



// } Driver Code Ends