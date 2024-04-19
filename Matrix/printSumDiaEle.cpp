// Printing sum of diagonal elements 
#include<iostream>
using namespace std;

int main() 
{
    int arr[3][3] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9  };
    int row = 3 ,col = 3;
    int first = 0 ; // elements 00 ,11 , 22 , 33 in 4*4
    for( int i = 0 ; i<row ; i++ )
    {
        first += arr[i][i];
    }
    cout<<"First Sum is "<<first<<endl;

    //second diagonal is 03 , 12, 21 , 30 in 4 * 4 
    int second = 0 ;
    int i = 0 , j = col -1 ;
    while( j>=0)
    {
        second += arr[i][j];
        i++;
        j--;
    }
    cout<<"Second sum is "<<second; 

    // if we want total sum of both diagonals then we have to check if the size of matrix is 
    // odd (n%2==1) then we subtract a[n/2][n/2] element from total sum 
    // for even do nothing
}