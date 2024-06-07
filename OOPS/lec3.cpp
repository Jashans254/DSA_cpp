#include<iostream>
using namespace std;


// hw const keyword
class Customer
{
    string name;
    int acc_no;
    int  balance;
    static int total_customer;
    static int total_balance;
    public:

    Customer(string name , int acc_no , int balance)
    {
        this->name = name;
        this->acc_no = acc_no;
        this->balance = balance;
        total_customer++;
        total_balance+=balance;
    }

    void display()
    {
        cout<<name<<endl;
        cout<<acc_no<<endl;
        cout<<balance<<endl;
    }

    void display_total()
    {
        cout<<"Total number of Customer is "<<total_customer<<endl;
        cout<<"Total Balance is "<<total_balance<<endl;
    }

    //static function ; can access only static attributes
    static void display_total_static()
    {
        cout<<total_customer<<endl;
    }

    void deposit(int amount)
    {
        if(amount > 0)
        {
            balance+=amount;
            total_balance+=amount;
        }
    }
    void withdraw(int amount)
    {
        if(amount<= balance && amount > 0)
        {
            balance-=amount;
            total_balance-=amount;
        }
    }
};

int Customer :: total_customer = 0 ;
int Customer :: total_balance = 0 ;

int main()
{
    Customer A1("Jashan" , 124, 50000);
    Customer A2("Josep" , 125, 50000);

    A1.display();
    A2.display();

    // access directly , public only
    //Customer::total_customer = 5;

    Customer::display_total_static();

    A1.deposit(5000);
    A2.withdraw(4000);

    A1.display_total();
    return 0 ;
}