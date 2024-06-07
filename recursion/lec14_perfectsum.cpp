https://www.geeksforgeeks.org/problems/perfect-sum-problem5633/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{


int countSubsets(int arr[], int index, int n, int target) {
    // Base cases
   
    if (index == n) {
       return target == 0 ;
    }

    long long ans=countSubsets(arr, index + 1, n, target);
    ans+= countSubsets(arr, index + 1, n, target - arr[index]);
    return ans%1000000007;
}
	public:
	int perfectSum(int arr[], int n, int sum)
	{
         return countSubsets(arr,  0,  n,  sum);
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends