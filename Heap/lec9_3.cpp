// step down method ; array as input 
#include<iostream>
using namespace std;

void Heapify(int arr[] , int index , int n)
{
    int largest = index;
    int left = 2*index + 1;
    int right = 2*index + 2;


    if(left < n && arr[left] > arr[largest])
    largest = left;

    if(right <n && arr[right] > arr[largest])
    largest = right;

    if(largest != index)
    {
        swap(arr[largest] , arr[index]);
        Heapify(arr , largest , n);
    }
}
void BuildHeap(int arr[],int n)
{

    for( int i = n/2-1; i>=0 ; i--)
    {
        Heapify(arr , i , n);
    }

}
void printHeap(int arr[] , int n)
{
    for(int i = 0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[] = { 10 , 3 , 8 , 9 , 5 , 13 , 18 , 14 , 11 , 70};

    BuildHeap(arr , 10);

    printHeap(arr , 10);
}