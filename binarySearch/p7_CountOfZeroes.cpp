//https://www.geeksforgeeks.org/problems/count-the-zeros2550/1 
//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int countZeroes(int arr[], int n) {
        // code here
        int start = 0 , end = n-1 ,first = -1 , last =-1, index;
        //first occurance
        while(start <=end)
        {
            int mid = start + (end-start)/2;
            if(arr[mid]==0)
            {
                first = mid;
                end = mid -1;
            }
            else 
            {
                start = mid+1;
            }
        }
        
        start = 0 ,end = n-1;
        while(start <=end)
        {
            int mid = start +(end - start)/2;
            if(arr[mid] == 0)
            {
                last = mid;
                start = mid+1;
            }
            else
            {
                start = mid +1;
            }
        }
        
        index = last - first +1;
        return index;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.countZeroes(arr, n);
        cout << ans << "\n";
    }
    return 0;
}


// } Driver Code Ends