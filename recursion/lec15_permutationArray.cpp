//https://leetcode.com/problems/permutations/submissions/1274158969/
#include<bits/stdc++.h>
using namespace std;


void permut(int arr[] , vector<vector<int>>&ans , vector<int>&temp , vector<bool>&visited)
{
    if(visited.size() == temp.size())
    {
        ans.push_back(temp);
        return ; 
    }
    for(int i = 0 ; i<visited.size() ;i++)
    {
        if(visited[i] == 0 )
        {
            visited[i] = 1;

            temp.push_back(arr[i]);
            permut(arr , ans ,temp , visited );
            visited[i] = 0 ;
            temp.pop_back();
        }
    }
}
int main() 
{
    int arr[] = { 1 , 2 ,3};

    vector<vector<int>> ans;
    vector<int> temp;
    vector<bool>visited(3 , 0);
    permut(arr , ans , temp , visited);

    for(int i = 0 ; i <ans.size() ; i++)
    {
        for(int j  = 0  ; j<ans[i].size() ; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}


// leetcode solution
class Solution {
    void permut(vector<int>&arr , vector<vector<int>>&ans ,int index)
{
    if(index == arr.size())
    {
        ans.push_back(arr);
        return ; 
    }
    for(int i = index ; i<arr.size() ;i++)
    {
        swap(arr[i] , arr[index]);
        permut(arr , ans , index+1 );
        swap(arr[i] , arr[index]);
    
    }
}
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        permut(nums , ans , 0);
        return ans;
    }
};