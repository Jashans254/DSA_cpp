// Given a Matrix of size n*m (n=rows and m= cols). Reverse each column of the matrix.

// Example:
// 1 2 3          7 8 9
// 4 5 6    →     4 5 6
// 7 8 9          1 2 3
// use two pointer approach ; swap whole row 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 3;
    vector<vector<int> >m ( n , vector<int>(n,0));
    
    int col = m.size();
    int row = m[0].size();

    for(int i = 0 ; i<col;i++)// increment col
    {
        int start = 0 , end = row -1;
        while(start<=end)// one column at a time 
        {
            swap(m[start][i], m[end][i]);// top with bottom row element 
            start++; 
            end--;
        }
    }
}
