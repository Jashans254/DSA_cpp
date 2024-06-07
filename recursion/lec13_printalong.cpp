// localpc soln
#include<bits/stdc++.h>
using namespace std;


void subsequence(int arr[] , int index , int n  ,vector<vector<int>>&ans , vector<int>&sumans , vector<int>&temp ,int sum)
{
    if(index == n)
    {
        ans.push_back(temp);
        sumans.push_back(sum);
        return;
    }
    //not included
    subsequence(arr , index+1 , n , ans , sumans , temp , sum);
    temp.push_back(arr[index]);
    //included
    subsequence(arr , index+1 , n , ans ,sumans,temp, sum+=(arr[index]));
    temp.pop_back();
}

int main() 
{
    int arr[] = { 1 , 2  , 3 , 4};

    vector<vector<int>> ans ;
    vector<int>sumans ;
    vector<int>temp;
    subsequence(arr , 0 ,4, ans ,sumans , temp , 0 );

    for(int i = 0 ; i < ans.size() ; i++)
    {
        for(int j = 0 ; j < ans[i].size() ; j++)
        {
            cout<<ans[i][j]<<" ";
        }

        cout<<"-->"<<sumans[i]<<endl;
    }
   // cout<<endl;
}

