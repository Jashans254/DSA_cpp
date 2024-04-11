#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int , int> m;

    //insert
    m.insert(make_pair(20 , 30));

    //iterator
    for(auto it = m.begin() ; it!=m.end();it++)
    {
        cout<<(*it).first<<" "<<it->second;
    }

    //add or update
    m[100] = 60 ; // add
    m[20] = 50;

    for(auto it = m.begin() ; it!=m.end();it++)
    {
        cout<<(*it).first<<" "<<it->second<<endl;
    }

    if(m.count(20))
    {
        cout<<m.count(20);
    }

    m.erase(20);

    //multimap :- duplicate allowed
    multimap<int,int> m2;
    //m2[100] = 50 ; isnt allowed

    //lly unorderd
    unordered_map<int,int>m3;

    return 0 ;
}
