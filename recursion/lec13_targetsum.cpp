

#include<iostream>
using namespace std;


bool find(int arr[] , int index , int n , int target)
{
    if(target == 0 )
    {
        return 1;
    }
    if(index == n || target<0)
    return 0 ;

    return find(arr , index+1 , n , target)  || find(arr , index+1 , n , target-arr[index]);
}
int main()
{
    int arr[] = { 2 , 4, 1 ,8 ,7};
    int target = 19;
    cout<<find(arr, 0 , 5 , target)<<" ";
}