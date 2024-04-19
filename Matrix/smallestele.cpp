#include<iostream>
using namespace std;

int main() 
{
    int arr[3][3] = { 1 , 2 , 3 , 45 , 5 , 6 , 7 , -1 , 9  };
    int row = 3 ,col = 3;
    int min = INT_MAX;
    for( int i = 0 ; i<row ; i++ )
    {
        for(int j = 0 ; j<col; j++)
        {
            if(arr[i][j]<min)
            {
                min = arr[i][j];
            }
        }
       
    }
    cout<<"Min ele in matrix is "<<min<<endl;
    
}