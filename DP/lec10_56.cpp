#include <bits/stdc++.h> 

int knapsack(vector<int> wt, vector<int> val, int n, int maxWeight) 
{
	// Write your code here
	vector<vector<int>> dp( n , vector<int>(maxWeight+1 , 0));

	for(int W = wt[0];W<=maxWeight ; W++) dp[0][W] = val[0];
	for(int ind = 1 ; ind<n; ind++){

		for(int W = 0 ; W<= maxWeight; W++){
			
			int notTake = 0 + dp[ind - 1][ W];

	int take = INT_MIN;

	if(wt[ind]<=W){
		take = val[ind] + dp[ind-1][  W-wt[ind]];
	}

	dp[ind][W] = max(take ,notTake);

		}
	}
	return dp[n-1][maxWeight];
}