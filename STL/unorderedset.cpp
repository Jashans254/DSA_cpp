#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int>u;

    u.insert(20);
    u.insert(10);
    u.insert(50);
    u.insert(5);

    // to traverse
    for(auto it = u.begin() ; it!=u.end();it++)
    {
        cout<<*it<<" ";
    }
}