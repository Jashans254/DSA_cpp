// https://www.geeksforgeeks.org/problems/lower-case-to-upper-case3410/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;
 
string to_upper(string in);
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		cout << to_upper(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends

void to_Upper(string &S , int index)
{
    if(index==-1)
    {
        return ;
    }
    S[index] = 'A' + S[index] -'a';
    to_Upper(S , index-1);
}

string to_upper(string str){
    //code
    to_Upper(str , str.size()-1);
    return str;
}