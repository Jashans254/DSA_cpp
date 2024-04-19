#include<bits/stdc++.h>
using namespace std;

int main()
{
    //syntax : vector<datatype> name(size[optional] , intialize[optional]);
    //method -1
    vector<int> v1;

    //method -2
    vector<int> v2(3);

    //method -3 
    vector<int> v3(4 , 2);

    //method -4
    vector<int> a ; 
    a.push_back(4);
    a.push_back(5);
    a.push_back(3);

    //method -5
    vector<int>v5 = { 2 , 4 , 6 , 8 , 10};

    //method -6
    vector<int>v6(5);
    for(int i = 0 ; i<5;i++)
    {
        cin>>v6[i];
    }

    //method -7 , not allowed for static int arr[n] , but vector dynamically
    int n ;
    cin>>n;
    vector<int> v(n);
    cout<<"Enter elements in the array: "<<endl;
    for(int i = 0 ; i<5;i++)
    {
        cin>>v6[i];
    }
    // to remove 
    v.pop_back();// remove last element
    v.erase(v.begin()+ 2); // index
    v.clear() ;// all array

    //front , back ,at , empty 
    v.at(4); // positon to value
    v.front();// first element
    v.back() ;//last element
    v.empty() ; // check if array is empty

    //iterator 
    for(auto it= v.begin() ;it!=v.end() ; it++)
    {
        cout<<*it<<" ";
    }

    // reverse iteration
    for(auto it= v.rbegin() ;it!=v.rend() ; it++)
    {
        cout<<*it<<" ";
    }

    //to sort
    sort(v.begin() , v.end() ); //increasing 

    sort(v.begin() , v.end() , greater<int>());

    // update value 
    v[1] = 5;

    //to copy all values
    vector<int> u ;
    u = v;

    // searching :- returns t/f
    binary_search(v.begin() , v.end() , 54);

    // search - to get index
    auto it = find(v.begin() , v.end() ,54);
    cout<<*it<<endl;

    // to count no. of occurances 
    int count1 = count(v.begin() , v.end() , 5);

    //to get max
    max_element(v.begin() , v.end() );

    //to get min
    min_element(v.begin() , v.end() );

    // upper bound 
    //syntax: upper_bound(first iterator ,last iterator ,x);
    upper_bound(v.begin() , v.end() ,5);

    //lower_bound
    lower_bound(v.begin() , v.end() ,5);
    // to remove 
    v.pop_back();// remove last element
    v.erase(v.begin()+ 2); // index
    v.clear() ;// all array
    return 0 ;
}