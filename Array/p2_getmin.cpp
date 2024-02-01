//Program to get minimum element in the array
#include<iostream>
using namespace std;
void printing_array(int arr[] , int size)
{
    cout<<"Elements in the array are:-\n";
    for(int i = 0 ;i<size ; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int get_min(int arr[] , int size)
{
    int ans = INT_MAX;// intialise ans variable by highest possible value in int type
    for(int i = 0 ; i<size ;i++)
    {
        if(ans>arr[i]) // compare it by one by one
        {
            ans = arr[i]; // keep updating if arr[i] is lower than ans
        } 
    }
    return ans;
}
int main()
{
    int arr[] = { 8,2 , 4, 9 , 33, 5};//array is intialised 
    printing_array(arr , 6);
    int  min_value = get_min(arr , 6);
    cout<<"\nMinimum value is : "<<min_value;
    return 0 ;
}