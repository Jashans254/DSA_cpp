#include<iostream>
using namespace std;

void printArray( int arr[] , int index , int n)
{
    if(index == n)
    {
        return;
    }

    cout<<arr[index]<<endl;
    printArray(arr , index+1 , n);
}

void printArray1( int arr[] , int index , int n)
{
    if(index == n)
    {
        return;
    }
    printArray1(arr , index+1 , n);
    cout<<arr[index]<<endl; 
}
void printArray2( int arr[] , int index )
{
    if(index == -1)
    {
        return;
    }
    printArray2(arr , index-1);
    cout<<arr[index]<<endl; 
}
void printArray3( int arr[] , int index )
{
    if(index == -1)
    {
        return;
    }
    
    cout<<arr[index]<<endl; 
    printArray3(arr , index-1);
}
int sumArray(int arr[] , int index , int n)
{
    if(index == n)
    {
        return 0;
    }
    return arr[index] + sumArray(arr , index + 1 , n);
}
int sumArray1(int arr[] , int index )
{
    if(index == -1)
    {
        return 0;
    }
    return arr[index] + sumArray1(arr , index - 1 );
}
int minEle(int arr[] , int index )
{
    if(index == 0)
    {
        return arr[index];
    }
    return min(arr[index] , minEle(arr , index-1));
}

int maxEle(int arr[] , int index )
{
    if(index == 0)
    {
        return arr[index];
    }
    return max(arr[index] , maxEle(arr , index-1));
}
int sumArrayEven(int arr[] , int index )
{
    if(index == -1)
    {
        return 0;
    }
    if(arr[index]%2==0)
    {
    return arr[index] + sumArrayEven(arr , index - 1 );
    }
    return sumArrayEven(arr , index - 1 );
}

int productArray(int arr[] , int index)
{
    if(index == -1)
    {
        return 1;
    }
    return arr[index] * productArray(arr , index - 1 );
}
int main() 
{
    int arr[] = { 1 , 2, 3, 4 , 5, 6};
    int n = 6;

    //three arguments
    //normal
    printArray(arr , 0 , 6);
    cout<<"----------"<<endl;
    //reverse
    printArray1(arr , 0 , 6);
    cout<<"------------"<<endl;

    //two arguments
    printArray2(arr , 5);
    //reverse
    cout<<"------------"<<endl;
    printArray3(arr , 5);

    //sum of elements
    cout<<"------------"<<endl;
    //iterative
    int sum = 0 ;
    for(int i = 0 ;i<n;i++)
    {
        sum+=arr[i];
    }
    cout<<"------------"<<endl;
    cout<<"Sum of elements is "<<sum<<endl;
    cout<<"------------"<<endl;
    //three arguments
    cout<<"Sum of elements is "<<sumArray(arr , 0 , 6)<<endl;;

    //two arguments;
    cout<<"------------"<<endl;
    cout<<"Sum of elements is "<<sumArray1(arr , 5 )<<endl;

    //Minimum element
    cout<<"------------"<<endl;
    cout<<"Minimum Element is "<<minEle(arr , 5);

    //Minimum element
    cout<<"------------"<<endl;
    cout<<"Maximum Element is "<<maxEle(arr , 5);

    //Sum of Even
    cout<<"------------"<<endl;
    cout<<"Sum of Even elements is "<<sumArrayEven(arr , 5 )<<endl;

    int arr1[] = { 1 , 2, 3 , 5};
    //Product of All Elements
    cout<<"------------"<<endl;
    cout<<"Product of Even elements is "<<productArray(arr1 , 3)<<endl;
    return 0 ;
}