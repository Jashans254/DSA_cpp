https://www.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab


//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int gcd(int a, int b) {
       if(b == 0)
       {
           return a;
       }
       return gcd(b , a%b);
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int a;
        scanf("%d",&a);
        
        
        int b;
        scanf("%d",&b);
        
        Solution obj;
        int res = obj.gcd(a, b);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends