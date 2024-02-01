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
int get_max(int arr[] , int size)
{
    int ans = INT_MIN;// intialise ans variable by lowest possible value in int type
    for(int i = 0 ; i<size ;i++)
    {
        if(ans<arr[i]) // compare it by one by one
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
    int  max_value = get_max(arr , 6);
    cout<<"\nMaximum value is : "<<max_value;
    return 0 ;
}