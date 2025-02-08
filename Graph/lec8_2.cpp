// // Adjacency List

// unweighted graph

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){ 
    

//     int vertex , edges;
//     cout<<"Enter the number of vertex and edges"<<endl;
//     cin>>vertex>>edges;

//     vector<int>adjacencyList[vertex]; // this is a vector of vectors

//     int u , v;
//     cout<<"Enter the edges"<<endl;
//     for(int i = 0 ; i<edges ; i++)  
//     {
//         cin>>u>>v;
//         adjacencyList[u].push_back(v);
//         adjacencyList[v].push_back(u);
//     }

//     //print the list

//     cout<<"Adjacency List"<<endl;
//     for(int i = 0 ; i<vertex ; i++)
//     {
//         cout<<i<<"-> ";
//         for(int j = 0 ; j<adjacencyList[i].size() ; j++)
//         {
//             cout<<adjacencyList[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// weighted graph
// Adjacency List
#include<iostream>
#include<vector>
using namespace std;
int main(){ 
    

    int vertex , edges;
    cout<<"Enter the number of vertex and edges"<<endl;
    cin>>vertex>>edges;

    vector<pair<int,int>>adjacencyList[vertex]; // this is a vector of vectors

    int u , v , weight;
    cout<<"Enter the edges"<<endl;
    for(int i = 0 ; i<edges ; i++)  
    {
        cin>>u>>v;
        adjacencyList[u].push_back(make_pair(v,weight));
        adjacencyList[v].push_back(make_pair(u,weight));
    }

    //print the list

    cout<<"Adjacency List"<<endl;
    for(int i = 0 ; i<vertex ; i++)
    {
        cout<<i<<"-> ";
        for(int j = 0 ; j<adjacencyList[i].size() ; j++)
        {
            cout<<adjacencyList[i][j].first<<" ";
            cout<<adjacencyList[i][j].second<<" ";
        }
        cout<<endl;
    }
    return 0;
}