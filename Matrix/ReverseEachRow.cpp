// Reverse each row of matrix 
#include<iostream>
using namespace std;

int main()
{
    int arr[3][3] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9  }; 
    int row = 3 , col = 3;
    // Simply printing Matrix
    cout<<"Before Reversing :-"<<endl;
    for(int i = 0  ; i<row;i++)
    {
        
        for(int j = 0 ; j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for( int i = 0 ;i<row ; i++)
    {
        int start = 0 , end = col -1;
        while(start <=end)
        {
            swap(arr[i][start] , arr[i][end]);
            start++;
            end--;
        }
    }

    // printing Matrix
    cout<<"\nPrintig after Reversing Row elements "<<endl;
    for(int i = 0  ; i<row;i++)
    {
        for(int j = 0 ; j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}