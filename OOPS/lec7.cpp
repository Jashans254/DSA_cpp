#include<iostream>
using namespace std;

class Customer
{
    string name ;
    int balance , account_balance;

    public:

    Customer(string name , int balance , int account_balance)
    {
        this->name = name;
        this->balance = balance;
        this->account_balance = account_balance;
    }

    void deposit(int amount)
    {
        if(amount > 0)
        {
            balance+=amount;
            cout<<amount<<"bAmount is deposited successfully"<<endl;
        }
        else 
        {
           // cout<<"Amount should be greater than 0"<<endl;
           throw "Amount should be greater than 0\n";
        }
    }

    void withdraw(int amount)
    {
        if(amount <= balance && amount > 0)
        {
            balance-=amount;
            cout<<amount<<"Amount is withdrawn successfully"<<endl;
        }
        else if(amount <0)
        {
            // cout<<"Amount should be greater than 0"<<endl;
            throw "Amount should be greater than 0\n";

        }
        else{
            //cout<<"Insufficient Balance"<<endl;
            throw "Insufficient Balance\n";

        }
    }

};
int main()
{
    Customer C1("Jashan" , 124 , 50);
    try{
    C1.deposit(5000);
    C1.withdraw(6000);
    }
    catch(const char *e)
    {
        cout<<"Exception occured : "<<e<<endl;
    }
}