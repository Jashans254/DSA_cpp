//Program showing basic input and output of an array
#include<iostream>
using namespace std;
//Functions for static array (we cant change the size at runtime)
//Function to fill the array 
void populating_array(int arr[] , int size)
{
    for(int i = 0 ;i<size ; i++)
    {
        cin>>arr[i];
    }
    cout<<"\nArray populated !\n";
}
//Function to print elements
void printing_array(int arr[] , int size)
{
    cout<<"Elements in the array are:-\n";
    for(int i = 0 ;i<size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
//Function always take reference to the array address only in the function argument 
void print_size(int *arr  )
{
    cout<<"\n Size of arr in function is"<<sizeof(arr);
    //Output would be the size of an pointer which is 8 bytes in 64 bit processor
}
int main()
{
    //we will preintialize the array size with a large enough size with a constant value
    const int size =1000;
    int arr[size];
    int n;
    // we will take input size of array from user 
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter elements in the array one by one:";
    //calling a custom built function 
    populating_array( arr ,n);
    //rendering all the elements 
    printing_array(arr , n);

    /*optional code to showcase array as an argument
    // to get length of array :- sizeof(arr)/sizeof(arr[0])
     cout<<"Size of array in bytes inside main function "<<sizeof(arr);
     //inside a function
     print_size();
    */
}