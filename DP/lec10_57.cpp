#include <bits/stdc++.h> 

int knapsack(vector<int> wt, vector<int> val, int n, int maxWeight) 
{
	// Write your code here

	vector<int> prev(maxWeight+1 ,0 );

	for(int W = wt[0] ; W<=maxWeight ; W++) prev[W]= val[0]; 

	for(int ind = 1 ; ind<n; ind++){

		for(int W = maxWeight ; W>=0; W--){
			
			int notTake = 0 + prev[ W];

	int take = INT_MIN;

	if(wt[ind]<=W){
		take = val[ind] + prev[  W-wt[ind]];
	}

	prev[W] = max(take ,notTake);

		}
	}
	return prev[maxWeight];
}