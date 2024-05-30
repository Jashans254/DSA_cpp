https://leetcode.com/problems/subsets/description/


//localpc soln
#include<bits/stdc++.h>
using namespace std;


void subsequence(int arr[] , int index , int n , vector<vector<int>>&ans , vector<int>temp)
{
    if(index == n)
    {
        ans.push_back(temp);
        return;
    }
    //not included
    subsequence(arr , index+1 , n , ans , temp);
    temp.push_back(arr[index]);
    //included
    subsequence(arr , index+1 , n , ans , temp);
}

int main() 
{
    int arr[] = { 1 , 2 , 3};

    vector<vector<int>>ans;
    vector<int>temp;
    subsequence(arr , 0 ,3 , ans , temp);

    for(int i = 0 ; i < ans.size() ; i++)
    {
        for(int j = 0 ; j < ans[i].size() ; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}



// leetcode soln 

class Solution {

    void subsequence(vector<int>& arr, int index , int n , vector<vector<int>>&ans , vector<int>&temp)
{
    if(index == n)
    {
        ans.push_back(temp);
        return;
    }
    //not included
    subsequence(arr , index+1 , n , ans , temp);
    temp.push_back(arr[index]);
    //included
    subsequence(arr , index+1 , n , ans , temp);
    temp.pop_back();
}

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
    vector<vector<int>>ans;
    vector<int>temp;
    subsequence(nums , 0 ,nums.size() , ans , temp);

    return ans;
    }

    
};