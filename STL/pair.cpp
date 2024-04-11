#include<bits/stdc++.h>
using namespace std;

class temp 
{
    public:
    string first;
    int second;
}p5;

int main() 
{
    //syntax: pair<type1, type2> name_of_pairs;
    pair<string,int>p;

    //1st way
    p = make_pair("Rohit" , 30);
    cout<<p.first<<" "<<p.second;
    
    //2nd way
    pair<string , int> p1;

    p1.first = "Mohit";
    p1.second = 40;
    cout<<endl<<p1.first<<" "<<p1.second;


    //3 values
    pair<string , pair<int , int>> p2;
    p2.first = "sham";
    p2.second.first = 30 ;
    p2.second.second = 50 ;
    cout<<endl<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second;

    //4 values
    pair<pair<string,string> , pair<int , int>> p3;
    p3.first.first = "Ravi";
    p3.first.second = "kumar";
    p3.second.first = 30 ;
    p3.second.second = 50 ;
    cout<<endl<<p3.first.first<<" "<<p3.first.second<<" "<<p3.second.first<<" "<<p3.second.second;

    //implementing using class 
    p5.first = "Virat";
    p5.second = 40;
    cout<<endl<<p5.first<<" "<<p5.second;

    
    return 0 ;


}