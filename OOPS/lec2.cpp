#include<iostream>
using namespace std;

class Customer
{
    string name;
    int acc_no;
    int  balance;
    int * roi;

    public:

    // Default constructor
    Customer()
    {
        cout<<"Construcor is called "<<endl;
        name = " ";
        acc_no = 0;
        balance = 0;
    }

    // //Parameterised 
    // Customer(string a , int b , int c)
    // {
    //     name = a;
    //     acc_no = b;
    //     balance = c;
    // }

    // this pointer 
    // Customer(string name , int acc_no , int balance)
    // {
    //     this->name = name;
    //     this->acc_no = acc_no;
    //     this->balance = balance;
    // }
   
    

    // constructor overloading
    Customer(string a , int b )
    {
        name = a;
        acc_no = b;
        balance = 0;
    }

    // inline constructor

    inline Customer(string a , int b , int c) : name(a) , acc_no(b) , balance(c) {}

    void display()
    {
        cout<<name<<endl;
        cout<<acc_no<<endl;
        cout<<balance<<endl;
    }   

    ~Customer()
    {
        cout<<"Destructor  is called "<<endl;
        delete roi;
    }

};

int main()
{
    Customer c1;
    c1.display();

    Customer c2("Jashan" , 124, 50000);
    c2.display();

    Customer c3("Jashan" , 134);

    Customer *c4;
    c4->display();

    delete c4;
}

