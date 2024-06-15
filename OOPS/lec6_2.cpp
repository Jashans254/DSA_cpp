#include<bits/stdc++.h>
using namespace std;

class Animal
{
    public:
    // void speak()  
    // {
    //     cout<<"huhhh"<<endl;
    // }
    virtual void speak()  = 0; // pure virtual / abstract class
    // virtual void speak()  
    // {
    //     cout<<"huhhh"<<endl;
    // }
};

class Dog : public Animal
{
    public:
    void speak()
    {
        cout<<"bark"<<endl;
    }
};
class Cat : public Animal
{
    public:
    void speak()
    {
        cout<<"Meow"<<endl;
    }
};
int main() 
{
    // Animal *p;
    // p = new Dog();
    // p->speak();
   
    vector<Animal*>v;
    v.push_back(new Dog());
    v.push_back(new Cat());
   // v.push_back(new Animal());
    for(int i=0;i<v.size();i++)
    {
        v[i]->speak();
    }
    return 0;
}