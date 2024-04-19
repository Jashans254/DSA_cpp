#include<iostream>
using namespace std;

int main() 
{
    int arr[3][3] = { 1 , 2 , 3 , 45 , 5 , 6 , 7 , 8 , 9  };
    int row = 3 ,col = 3;
    int max = INT_MIN;
    for( int i = 0 ; i<row ; i++ )
    {
        for(int j = 0 ; j<col; j++)
        {
            if(arr[i][j]>max)
            {
                max = arr[i][j];
            }
        }
       
    }
    cout<<"Max ele in matrix is "<<max<<endl;
    
}