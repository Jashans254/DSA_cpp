#include<iostream>
using namespace std;

class Human
{

    private:
    int a;
    protected :
    int b;
    public:
    int c;
    void display()
    {
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
    }
};
class Person
{
    string religion  , color;
    public:
    string name;
    int age , weight;
};

class Student : protected Person
{
    int roll_no, fees;

    public:
    void  fun(string n , int a , int w)
    {
        name = n;
        age = a;
        weight = w;
    }
    void display() 
    {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<weight<<endl;
    }
};
class Teacher: public Person
{
    int salary , id;
    public:
  
};
int main()
{
    // Human h1;
    // h1.a = 10;
    // h1.b = 20;
    // h1.c = 30;
    // h1.display();

    Student A;
    //A.name = "abc";
    A.fun("abc" , 10 , 20);


    return 0;
}