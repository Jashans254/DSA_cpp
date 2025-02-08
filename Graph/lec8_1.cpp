//Adjacency Matrix
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){ 
    int vertex , edges;
    cout<<"Enter the number of vertex and edges"<<endl;
    cin>>vertex>>edges;

    vector<vector<bool>>adjacencyMatrix(vertex , vector<bool>(vertex , 0));// intialise each row with 0 
    cout<<"Enter the edges"<<endl;
    int u , v;
    for(int i = 0 ; i<edges ; i++)
    {
        cin>>u>>v;
        adjacencyMatrix[u][v] = 1;
        adjacencyMatrix[v][u] = 1;
    }

    // printing
    cout<<"Adjacency Matrix"<<endl;
    for(int i = 0 ; i<vertex ; i++)
    {
        for(int j = 0 ; j<vertex ; j++)
        {
            cout<<adjacencyMatrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}