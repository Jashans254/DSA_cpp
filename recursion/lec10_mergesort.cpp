//  insertion , selection , bubble sort - T.C :- O(n^2)
//merge sort - T.C :- O(nlog2(n))
//S.C :- O(n)
#include<iostream>
#include<vector>
using namespace std;


void print ( int arr[] ,int n)
{
    
    for(int i = 0 ;i<n;i++)
    {
        cout<<arr[i];
    }
}
void  merge( int arr[] , int start , int mid  , int end)
{
    vector<int> temp (end - start +1);

    int left = start , right = mid +1 , index = 0 ;

    while(left <=mid  && right <=end)
    {
        if(arr[left]<=arr[right])
        {
            temp[index] = arr[left];
            index++ , left++;
        }
        else{
            temp[index] = arr[right];
            index++ , right++;
        }
    }

    // left 
    while(left<=end)
    {
        temp[index] = arr[left];
        index++ , left++;
    }
    while(right <= end)
    {
        temp[index] = arr[right];
        index++ , right++;
    }

    index = 0 ;

    while(start <=end)
    {
        arr[start] = temp[start];
        start++ , index++ ;
    }

}
void mergesort(int arr[] , int start , int end  )
{

    if(start == end)//only one element 
    {
        return ;
    }

    //divide 
    int mid = start + (end - start)/2;
    mergesort(arr , start , mid);//left
    mergesort(arr , mid+1 , end) ;//right
    

    merge(arr , start , mid , end);

}

int main() 
{
    int arr[] = { 6 , 3 , 5 , 2 , 2 , 8 , 1 , 3 , 2 , 9};
    cout<<"Before Sorting "<<endl;
    print(arr , 10);
    // start , size-1
    mergesort(arr , 0 , 9);

    cout<<"After Sorting "<<endl;
    print(arr , 10);

    return 0 ;
}

