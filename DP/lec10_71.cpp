//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
  

    int knapSack(vector<int>& val, vector<int>& wt, int w) {
        // code here
        int n = val.size();
        
        vector<vector<int>> dp( n , vector<int>(w+1 , 0));
        vector<int> prev(w+1 ,0) , cur(w+1,0);
        for(int W = 0 ; W<=w ; W++){
            prev[W] = ((int )(W / wt[0]))* val[0];
        }
        
        for(int ind = 1 ; ind <n; ind++){
            
            for(int W = 0 ; W <=w;W++){
                int notTake = 0 + prev[ W ]; 
    
               int take = 0 ;
               if(wt[ind]<= W){
             take = val[ind] + cur[ W - wt[ind] ];
             }
               cur[W] = max(take , notTake);
            }
            
            prev = cur;
        }
        
        return prev[ w ]; 
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int W;
        cin >> W;
        cin.ignore();
        string str;
        getline(cin, str);
        stringstream ss(str);
        vector<int> val;
        int num;
        while (ss >> num) {
            val.push_back(num);
        }
        string str2;
        getline(cin, str2);
        stringstream ss2(str2);
        vector<int> wt;
        int num2;
        while (ss2 >> num2) {
            wt.push_back(num2);
        }
        Solution ob;
        cout << ob.knapSack(val, wt, W) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends





// single array optimized space
//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
  

    int knapSack(vector<int>& val, vector<int>& wt, int w) {
        // code here
        int n = val.size();
        
        vector<vector<int>> dp( n , vector<int>(w+1 , 0));
        vector<int> prev(w+1 ,0) ;
        for(int W = 0 ; W<=w ; W++){
            prev[W] = ((int )(W / wt[0]))* val[0];
        }
        
        for(int ind = 1 ; ind <n; ind++){
            
            for(int W = 0 ; W <=w;W++){
                int notTake = 0 + prev[ W ]; 
    
               int take = 0 ;
               if(wt[ind]<= W){
             take = val[ind] + prev[ W - wt[ind] ];
             }
               prev[W] = max(take , notTake);
            }
            
           
        }
        
        return prev[ w ]; 
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int W;
        cin >> W;
        cin.ignore();
        string str;
        getline(cin, str);
        stringstream ss(str);
        vector<int> val;
        int num;
        while (ss >> num) {
            val.push_back(num);
        }
        string str2;
        getline(cin, str2);
        stringstream ss2(str2);
        vector<int> wt;
        int num2;
        while (ss2 >> num2) {
            wt.push_back(num2);
        }
        Solution ob;
        cout << ob.knapSack(val, wt, W) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends