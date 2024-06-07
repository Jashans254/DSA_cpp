#include<iostream>
using namespace std;

void print(int arr[] , int index  , int n , int sum)
{
    if(index == n)
    {
        cout<<sum<<endl;
        return;
    }
    print(arr , index + 1 , n , sum + arr[index]);
    print(arr , index + 1 , n , sum);
}
int main()
{
    int arr[] = {1 , 2 , 3 ,4};

    print(arr,0 , 4 , 0);
}