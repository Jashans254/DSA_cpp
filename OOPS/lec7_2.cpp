#include<iostream>
#include<stdexcept>  // Include for std::runtime_error

using namespace std;
// class exception
// {
// protected:
// string msg;
// public:
// exception(string msg)
// {
// this->msg = msg;
// }
// string what()
// {
// return msg;
// }
// };

// class runtime_error : public exception
// {
// public:

// runtime_error(const string &msg) : exception(msg);

// };

class Customer
{
    string name;
    int balance, account_balance;

public:
    Customer(string name, int balance, int account_balance)
    {
        this->name = name;
        this->balance = balance;
        this->account_balance = account_balance;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << amount << " Amount is deposited successfully" << endl;
        }
        else
        {
            throw runtime_error("Amount should be greater than 0");
        }
    }

    void withdraw(int amount)
    {
        if (amount <= balance && amount > 0)
        {
            balance -= amount;
            cout << amount << " Amount is withdrawn successfully" << endl;
        }
        else if (amount <= 0)
        {
            throw runtime_error("Amount should be greater than 0");
        }
        else
        {
            throw runtime_error("Insufficient Balance");
        }
    }
};

int main()
{

    // try{
// int *p = new int[10000000000];
// //cout<<"Memory is allocated"<<endl;
// delete[] p;
// }
// catch(const exception &e)
// {
// cout<<"exception Ocuured due to line : "<<e.what();
// }

    Customer C1("Jashan", 124, 50);
    try
    {
        C1.deposit(5000);
        C1.withdraw(6000);
    }
    catch (const exception &e)
    {
        cout << "Exception occurred: " << e.what() << endl;
    }
    catch (const bad_alloc &e)
    {
        cout << "Exception occurred: " << e.what() << endl;
    }
    catch (...)
    {
        cout << "Exception occurred" << endl;
    }

    return 0;
}
