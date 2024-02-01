//Basic Binary Search operation on Array 
//Time Complexity O(logN)
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1 ,2 , 3 , 4, 5 ,6 };//prerequiste :- array should be in sorted form (increasing or decreasing)
    int key;
    cout<<"Enter element to be found : ";
    cin>>key;
    int n = 6;//size of array 
    int start = 0 , end = n-1 , mid;
    while(start<=end)
    {
        mid = start + (end - start)/2; // instead of (start + end)/2 to handle overflow 
        if(arr[mid] == key)
        {
            cout<<"Found!!"<<endl;
            break;
        }
        else if(arr[mid]<key)//if mid is smallet than  key 
        {
            start = mid+1; // go to right side 
        }
        else // mid is greater than key
        {
            end = mid -1 ;// go to left side
        }
    }
}