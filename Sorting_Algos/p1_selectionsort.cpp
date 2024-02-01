#include<iostream>
using namespace std;
int main()
{
    int arr[] = {34,22,11,56,3,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Before Sorting\n";
    cout<<"Elements in the array are:-\n";
    for(int i = 0 ;i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    for(int i = 0 ; i<n-1;i++)
    {
        int index = i;
        for(int j = i+1;j<n;j++)
        {
            if(arr[j]<arr[index])
            {
                index = j;
            }
        }
        swap(arr[i],arr[index]);
    }
     
    cout<<"\nAfter Sorting.."<<endl;
    cout<<"Elements in the array are:-\n";
    for(int i = 0 ;i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}