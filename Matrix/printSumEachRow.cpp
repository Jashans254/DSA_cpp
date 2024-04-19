#include<iostream>
using namespace std;

int main() 
{
    int arr[3][3] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9  };
    int row = 3 ,col = 3;
    int sum = 0 ;
    for( int i = 0 ; i<row ; i++ )
    {
        sum =  0;
        for(int j = 0 ; j<col; j++)
        {
            sum+=arr[i][j];
        }
        cout<<"Sum of col "<<i<<" is "<<sum<<endl;
    }
    
}