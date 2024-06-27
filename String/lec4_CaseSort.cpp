https://www.geeksforgeeks.org/problems/case-specific-sorting-of-strings4845/1?page=2&difficulty

//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string s, int n)
    {
        // your code here
        vector<int>lower( 26 , 0); 
        vector<int>upper( 26  , 0);

        for(int i = 0 ; i<n; i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                lower[s[i] - 'a']++;
                s[i] = '#';
            }
            else if(s[i] >= 'A' && s[i] <= 'Z' )
            {
                upper[s[i] - 'A']++;
                
            }
        }

        string ansLower , ansUpper;
        for(int i = 0 ; i<26; i++)
        {
            char c = 'A' + i ;
            while(upper[i])
            {
                ansUpper+=c ;
                upper[i]--;
            }
        }
        for(int i = 0 ; i<26; i++)
        {
            char c = 'a' + i ;
            while(lower[i])
            {
                ansLower+=c ;
                lower[i]--;
            }
        }
        int first = 0 , second = 0 ,third = 0 ;
        while( second+ third <n)
        {
            if(s[first] == '#')
            {
                s[first] = ansLower[second];
                second++;
            }
            else
            {
                s[first] = ansUpper[third];
                third++;
            }
            first++;
        }

        return s;
    
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends