https://www.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        vector<int> negative(n);
        vector<int>positive(n);
        int pos =0, neg = 0 ;
        for(int i = 0 ;i<n;i++)
        {
            if(arr[i]>=0)
            {
                positive[pos++] = arr[i];
            }
            else
            {
                negative[neg++] = arr[i];
            }
        }
        
        int  i = 0;
        while(i!=pos)
        {
            arr[i] = positive[i];
            i++;
        }
       int neg1 = 0 ;
        while(i!=n)
        {
            arr[i] = negative[neg1];
            i++;
            neg1++;
        }
        
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends