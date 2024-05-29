https://www.geeksforgeeks.org/problems/count-number-of-elements-between-two-given-elements-in-array4044/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int getCount(int arr[], int n, int num1, int num2) {
        // Initialize indices to -1 to handle cases where elements are not found
        int index1 = -1, index2 = -1;
        
        // Find the first occurrence of num1
        for (int i = 0; i < n; i++) {
            if (arr[i] == num1) {
                index1 = i;
                break;
            }
        }
        
        // Find the last occurrence of num2
        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] == num2) {
                index2 = i;
                break;
            }
        }
        
        // If either num1 or num2 is not found, return 0
        if (index1 == -1 || index2 == -1) {
            return 0;
        }
        
        // If num1 comes after num2 in the array, return 0
        if (index1 >= index2) {
            return 0;
        }
        
        // Calculate the number of elements between index1 and index2
        return index2 - index1 - 1;
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
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    int num1,num2;
	    cin>>num1>>num2;
	    Solution ob;
	    cout << ob.getCount(a, n, num1, num2) <<"\n";
	}
	return 0;
}

// } Driver Code Ends