#include<iostream>
using namespace std;
// function to print 
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
// function to find an element
int findEle(int arr[][4] , int row , int col ,int x)
{
   for(int i = 0 ; i<row;i++)
    {
        for(int j =0 ; j <col;j++)
        {
            if(arr[i][j] == x)
            {
                return x;
            }
        }
    }
    return -1;
}
int main() 
{
    int arr[3][4] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 };
   
   // Print all the values  column wise
   for(int col = 0 ; col<4;col++)
   for(int row =0 ; row<3;row++)
   cout<<arr[row][col]<<" ";
   cout<<endl;

   //print all values row wise
   printRow(arr , 3 , 4);//function call

   //FIND ME
   int x; 
   cout<<"\nEnter element to be found: ";
   cin>>x;
   int res = findEle(arr , 3 ,4 , x);
   if(res)
   {
    cout<<"Found";
   }
   else
   {
    cout<<"Not Found";
   }
}