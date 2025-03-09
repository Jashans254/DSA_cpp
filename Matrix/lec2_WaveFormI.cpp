// if even column then print from up to down
// if odd column then print from down to up 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    vector<vector<int>> m(n, vector<int>(n, 0)); 

    int count=1;
    cout<<"Given Matrix"<<endl;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0 ; j<n;j++)
        {
            m[i][j] = count++;
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"In wave form "<<endl;
    int col = m.size();
    int row = m[0].size();
    for(int j = 0 ;j<col;j++)
    {
        if(j%2==0)
        {
            for(int i = 0 ; i<row;i++)
            {
                cout<<m[i][j]<<" ";
            }
            cout<<endl;
        }
        else
        {
            for(int i = row -1;i>=0;i--)
            {
                cout<<m[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}