#include<iostream>
using namespace std;
//custom built function to travese an array passed as argument along with its size
void printArray(int arr[] , int n)
{
    for(int i = 0 ; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main() 
{
    int arr[] = { 6 , 11 , 7 , 4 ,8 , 9};
    cout<<"1st Approach"<<endl;//using auxillary array ; space complexity will O(n) where n is size of array
    cout<<"Given array is \n";
    printArray(arr,6) ;
    int temp_arr[6];//declaring a temporary array of the same size as given array 
    int i = 5 ; // from last index;
    int j = 0 ; // from first index 
    while(i>=0)//last of given array becomes first of temp array , second last of given becomes second of temp array 
    {
        temp_arr[j] =arr[i]; // 
        j++;//incrementing index of temporary array
        i--;//decrementing index of given array at each pass
    }

    //copy back the reversed array (temp) to given array
    for(int i = 0 ; i<6;i++)
    {
        arr[i] = temp_arr[i];
    }
    cout<<"\nReversed array is "<<endl;
    printArray(arr, 6);
    //2nd approach ; (simmilar to 2 pointer appraoch)
    
    cout<<endl<<"2nd approach"<<endl;// take element from 1st and swap with last ,move one step from both side , keep swapping untill mid
    int arr1[] = { 6 , 11 , 7 , 4 ,8 , 9};
    cout<<"Given array is \n";
    printArray(arr1,6) ; 
    i =0 , j = 5; 
    while(i<j)
    {
        swap(arr1[i] , arr1[j]);
        i++;
        j--;
    }
    cout<<"\nReversed array is "<<endl;
    printArray(arr, 6);
}