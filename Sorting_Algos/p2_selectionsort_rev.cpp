//Logic remains the same but here we will be selecting elements from last
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
     for(int i = n-1 ; i>0;i--)
    {
        int index = i;
        for(int j = i-1;j>=0;j--)
        {
            if(arr[j]>arr[index])// to get array in non-ascending order just change sign ( > ) to ( < ) 
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