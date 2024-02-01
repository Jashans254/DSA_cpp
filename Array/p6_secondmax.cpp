//Get the Max element
//skip the max element and check for second max
#include<iostream>
using namespace std;
int main() 
{
    int arr[] = { 1, 5, 10 , 20 , 40};
    int n = 5;
    int index ,ans = INT_MIN;
    for(int i=0; i<n;i++)
    {
        if(arr[i]>ans)
        {
            ans = arr[i];
        }
    }
    int second = INT_MIN;
    for(int i = 0 ;i<n;i++)
    {
        if(ans !=arr[i])
        {
            
            second = max(second , arr[i]);
            
        }
    }
    cout<<"Second largest element is "<<second;
}