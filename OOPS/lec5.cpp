#include<iostream>
using namespace std;

class Human
{
    protected:
    string name;
    int age;

    public:


    Human(string name , int age)
    {
        this->name = name;
        this->age = age;
    }
    
    void work() 
    {
        cout<<" I am working "<<endl;
    }
    void display()  
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
    // ~Human() {   
    //     cout<<"Hello human"<<endl;
    // }
    //call of base class destructor
};

class Student : public Human
{
    int roll_number, fees;

    public:
    Student(string name , int age, int roll_number, int fees)  : Human(name , age)//string name , int age ,
    {
        this->name = name;
        this->age = age;
        this->roll_number = roll_number;
        this->fees = fees;
    }


    void display()  //  function overriding
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Roll number : "<<roll_number<<endl;
        cout<<"Fees : "<<fees<<endl;
    }
    //call of derieved class destructor first
    // ~Student() {
    //     cout<<"Hello student"<<endl;
    // }

};

int main()
{

    Student A("abc" , 10 , 1 , 1000);
    A.work();
}