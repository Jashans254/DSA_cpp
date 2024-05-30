// localpc soln
#include<bits/stdc++.h>
using namespace std;


void subsequence(int arr[] , int index , int n , vector<int>&ans , int temp)
{
    if(index == n)
    {
        ans.push_back(temp);
        return;
    }
    //not included
    subsequence(arr , index+1 , n , ans , temp);
    temp+=(arr[index]);
    //included
    subsequence(arr , index+1 , n , ans , temp);
}

int main() 
{
    int arr[] = { 1 , 2  , 3};

    vector<int>ans;
    int temp = 0 ;
    subsequence(arr , 0 ,3, ans , temp);

    for(int i = 0 ; i < ans.size() ; i++)
    {
        cout<<ans[i]<<" "; 
    }
     cout<<endl;
}

