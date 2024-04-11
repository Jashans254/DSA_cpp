//Wer are given two matrices A & B with same size , we have to find their sum A + B = C
#include<iostream>
using namespace std;

void printRow(int arr[][4] , int row , int col)// col is needed in arr[][4]
{
    for(int i = 0 ; i<row;i++)
    {
        for(int j =0 ; j <col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
}

int main() 
{
    int arr1[3][4] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 }; //Matrix 1
    int arr2[3][4] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 }; //Matrix 2
    
    int arr3[3][4];
    for(int row =0 ; row<3;row++)
    for(int col = 0 ; col<4;col++)
    {
        arr3[row][col] = arr1[row][col] + arr2[row][col]; // simply adding corresponding element and store it 
    }

    printRow(arr3, 3 ,4);
}