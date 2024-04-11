#include<bits/stdc++.h>
using namespace std;

int main()
{
    //syntax : list<type> name_of_list
    list<int>l1;

    //to insert at back
    l1.push_back(50);
    l1.push_back(60);

    //to insert at front
    l1.push_front(40);
    l1.push_front(30);

    //iterate
    for(auto it  = l1.begin() ; it!= l1.end(); it++)
    {
        cout<<*it<<" ";
    }

    //to delete 
    l1.pop_back();
    l1.pop_front();

    //to extract
    cout<<l1.front()<<endl;
    cout<<l1.back()<<endl;

    // to get size
    cout<<l1.size()<<endl;

    //to print reverse
    for(auto it = l1.rbegin() ; it !=l1.rend();it++)
    {
        cout<<*it<<" ";
    }
}