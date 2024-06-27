https://www.geeksforgeeks.org/problems/smallest-distant-window3132/1?page=1&difficulty

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
        // Your code goes here   
        
        vector<int>count(256, 0 ) ;
        int first = 0  , second = 0 , len = str.size() , diff = 0 ;
        
        // calculate unique chars
        while(first<str.size())
        {
            if(count[str[first]]  == 0 )
            {
                diff++;
            }
            count[str[first]]++;
            first++;
        }
        
        //set to zero 
        for(int i = 0 ;i<256;i++)
        {
            count[i] = 0 ;
        }
        
        first = 0 ;
        
        while(second < str.size())
        {
            //diff exists , increase the size 
            while(diff && second < str.size())
            {
                if(count[str[second]] == 0)
                {
                    diff--;
                }
                
                count[str[second]]++;
                second++;
            }
            
            
            len = min(len , second - first );
            
            // decrease the size
            while(diff!=1)
            {
                len = min(len , second - first );
                
                count[str[first]]--;
                if(count[str[first]] == 0)
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
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}
// } Driver Code Ends