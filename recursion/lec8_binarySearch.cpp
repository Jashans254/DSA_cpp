//linear search , binary search (non-dec & non-inc) , 
//hw: - rev arr , rotate arr by 1 

#include<iostream>
using namespace std;

// linear Search
//four parameters
bool linearSearch(int arr[] , int x , int index  , int N)
{
    if(index == N)
    {
        return 0;
    }
    if(arr[index] == x)
    {
        return 1;
    }

    return linearSearch(arr , x , index+1 , N);
}
//three parameters 
bool linearSearch1(int arr[] , int x , int index )
{
    if(index == -1)
    {
        return 0;
    }
    if(arr[index] == x)
    {
        return 1;
    }

    return linearSearch1(arr , x , index-1 );
}

//binary Search
//non decreasing order
bool BinarySearch(int arr[] , int start , int end , int x)
{
    if(start>end)
    {
        return 0 ;
    }

    int mid = start + (end - start)/2;

    if(arr[mid] == x)
    {
        return 1;
    }
    else if(arr[mid] <x)
    {
        return BinarySearch(arr , mid+1 , end ,x);
    }
    else 
    {
        return BinarySearch(arr , start , mid -1 ,x);
    }

}

//non increasing order
bool BinarySearch1(int arr[] , int start , int end , int x)
{
    if(start>end)
    {
        return 0 ;
    }

    int mid = start + (end - start)/2;

    if(arr[mid] == x)
    {
        return 1;
    }
    else if(arr[mid] >x)
    {
        return BinarySearch1(arr , mid+1 , end ,x);
    }
    else 
    {
        return BinarySearch1(arr , start , mid -1 ,x);
    }

}
//reverse an arr 
void rev(int arr[] , int start , int end)
    {
        if(start>=end)
        {
            return ;
        }
        swap(arr[start] , arr[end]);
        rev(arr, start + 1 , end -1);
    }
//rotate by 1 
void rotateby1(int arr[] , int index , int idx0)
{
    if(index == -1 )
    {
        arr[index+1] = idx0;
        return ;
    }

    arr[index + 1] = arr[index];
    return rotateby1(arr , index-1,idx0);
}
int main()
{

    int arr[] = { 1 , 2 , 3 , 4 , 5};
    cout<<linearSearch(arr , 5,0 , 5);
    cout<<endl<<"--------------"<<endl;
    cout<<linearSearch1(arr , 5,4);

    cout<<endl<<"--------------"<<endl;
    cout<<BinarySearch(arr , 0 , 4 , 50);

    int arr1[] = { 5, 4 , 3 , 2, 1};
    cout<<endl<<"--------------"<<endl;
    cout<<BinarySearch1(arr1, 0 , 4, 1);

    //reverse an arr 
    cout<<endl<<"--------------"<<endl;
    rev(arr , 0 , 4);
    for(int i = 0 ;i<5;i++) cout<<arr[i]<<" ";

    //rotate by 1 
    cout<<endl<<"--------------"<<endl;
    cout<<"Original array"<<endl;
    for(int i = 0 ;i<5;i++) cout<<arr1[i]<<" ";
    cout<<endl<<"--------------"<<endl;
    cout<<"Rotated Array"<<endl;
    rotateby1(arr1 , 3 , arr1[4]);
    for(int i = 0 ;i<5;i++) cout<<arr1[i]<<" ";
    return 0; 
}