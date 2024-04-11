//Given a Matrix m * n  , we have to find the row index with maximum sum
#include<iostream>
using namespace std;

int main() 
{
    int row = 5 , col = 4;
    int a[5][4] = { 3,4, 7,1, 3 , 8, 3, 9 , 5, 4, 2 , 2,7 , 3 , 6 , 8 , 2 ,8 , 9 , 1};
    // Simply printing Matrix
    for(int i = 0  ; i<row;i++)
    {
        cout<<endl<<"Index "<<i<<" :- ";
        for(int j = 0 ; j<col;j++)
        {
            cout<<a[i][j]<<" ";
        }
    }
    // Findinig the sum and updating its value 
    int index = 0 , sum = INT_MIN;
    for(int i = 0 ;i<row ; i++)
    {
        int total = 0;
        for(int j =0 ;j<col;j++)
        {
            total+=a[i][j];
        }
        if(sum<total)
        {
            sum = total;
            index = i ;
        }
    }

    cout<<"\nIndex of row with Maximum sum is "<<index;


}