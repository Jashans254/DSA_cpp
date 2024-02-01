//fibonaci series :- 0,1,1,2,3,5,8,13......
//the current value is sum of last two values ,and first two values 0 , 1  are fixed
#include<iostream>
using namespace std;
void printArray(int arr[] , int n)
{
    for(int i = 0 ; i<n;i++)
    {
        cout<<arr[i]<<" | ";
    }
}
int main()
{
    int arr[100] ,n;
    cout<<"Enter the length of fibonacci series: ";
    cin>>n;
    arr[0] = 0 , arr[1] = 1;
    for(int i=2;i<n;i++)
    {
        arr[i] = arr[i-1]+arr[i-2];
    }
    printArray(arr,n);
   
}