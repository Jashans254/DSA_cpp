#include <bits/stdc++.h> 

int f( int ind , int W , vector<int> & wt , vector<int> &val){
	if(ind == 0){
		if(wt[0] <= W) return val[0];
		return 0;
	}

	int notTake = 0 + f(ind - 1 , W ,wt , val);

	int take = INT_MIN;

	if(wt[ind]<=W){
		take = val[ind] + f(ind-1 , W- wt[ind],wt , val);
	}

	return max( take , notTake);
}
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	// Write your code here

	return f(n-1 , maxWeight, weight, value);
}