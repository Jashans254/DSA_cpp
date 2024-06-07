https://www.geeksforgeeks.org/problems/check-if-string-is-rotated-by-two-places-1587115620/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    void rotateclockwise(string &s)
    {
        char c = s[s.size()-1]; // last
        int idx = s.size() - 2;
        while(idx >= 0)
        {
            s[idx+1] = s[idx];
            idx--;
        }
        s[0] = c;
    }
    
    void rotateanticlockwise(string &s)
    {
        char c = s[0];
        int idx = 1 ;
        while(idx < s.size())
        {
            s[idx -1] = s[idx];
            idx++;
        }
        
        s[s.size() -1] = c;
    }
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        if(str1.size()!=str2.size())
        return 0 ;
        
        // Your code here
        string clockwise = str1; 
        string anticlockwise = str1;
        
        rotateclockwise(clockwise);
        rotateclockwise(clockwise);
        
        if(clockwise == str2)
        {
            return 1;
        }
        rotateanticlockwise(anticlockwise);
        rotateanticlockwise(anticlockwise);
        
        if(anticlockwise == str2)
        {
            return 1;
        }
        
        return 0 ;
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends