#include<bits/stdc++.h>
using namespace std;

class person
{
    public:
    int age;
    string name;

    bool operator < ( const person &other ) const{
        return age<other.age;
    }
} ;
int main()
{
    set<int> s;

    // to insert
    s.insert(2);

    // to traverse
    for(auto it = s.begin() ; it!=s.end();it++)
    {
        cout<<*it<<" ";
    }

    //to get data in descending order
    set<int , greater<int>> s2;

    //to search
    if(s.find(20)!=s.end())
    {
        cout<<"Present";
    }

    //to count 
    if(s.count(20))
    {
        cout<<s.count(20);
    }

    //to delete
    s.erase(2);

    // type of data ( class )
    set<person> s3;

    person p1;
    p1.age = 45;
    p1.name = "a";

    person p2;
    p2.age = 46;
    p2.name = " B";

    s3.insert(p1);
    s3.insert(p2);
    // for(auto it = s3.begin() ; it!=s3.end();it++)
    // {
    //     cout<<*it<<" ";
    // }
}