#include<iostream>
using namespace std;
void printArray(int arr[] , int n)
{
    for(int i = 0 ; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[] = { 56 ,24,63,29,90};
    int n = 5;
    int temp[4];
    printArray(arr,n);
    cout<<"\nApproach 1"<<endl;//using auxillary array 
    //loop 0th to last second element and store all elements in temp upto n-2th index
    for(int i = 0 ; i<n-1;i++)
    {
        temp[i]=arr[i];
    }
    arr[0] = arr[n-1];//replace 0th by last element 
    for(int i = 1 ; i<n;i++)//copy back to orginal array
    {
        arr[i]=temp[i-1];//at 1th is temp's 0th and so on
    }
    printArray(arr,n);
    cout<<endl;
    int arr1[] = { 56 ,24,63,29,90};
    
    cout<<"\nApproach2"<<endl;
    printArray(arr1,n);
    cout<<endl;
    int tempvar = arr1[n-1];
    for(int i = n-2; i>=0;i--)//shift second last to last , third last to second last upto initail second (index = 1)
    {
        arr1[i+1] = arr1[i];
    }
    arr1[0] = tempvar;//update the first
    printArray(arr1,n);
}