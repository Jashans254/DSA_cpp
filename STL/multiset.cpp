#include<bits/stdc++.h>
using namespace std;

int main() 
{
    multiset<int> m;

    m.insert(30);
    m.insert(20);
    m.insert(20);
    m.insert(50);

    m.erase(20);// it will erase all value :20
    // to traverse
    for(auto it = m.begin() ; it!=m.end();it++)
    {
        cout<<*it<<" ";
    }
}