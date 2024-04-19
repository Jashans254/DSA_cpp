// https://www.geeksforgeeks.org/problems/palindrome-string0817/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab%255C

//tle
//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	bool checkpal(string str , int start , int end)
	{
	    if(start>end) 
	    {return 1 ;}
	    
	    if(str[start]!= str[end])
	    {return 0 ;
	    }
	    
	    return checkpal(str , start + 1 , end-1);
	}
	int isPalindrome(string S)
	{
	    return checkpal(S , 0 , S.size()-1);
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends