//basic symbols

#include<iostream>
using namespace std;

int main()
{
    int a = 10 ;
    cout<<"a is "<<a<<endl;
    int *ptr = &a;
    cout<<"Address of a is "<<ptr<<endl;

    //derefrencing
    cout<<"Value of using pointer "<<*ptr<<endl;

    char c = 'a';
    cout<<"c is "<<c<<endl;
    char *ch = &c;
    cout<<"Address of c is "<<ch<<endl;
    cout<<"Value of using pointer "<<*ch<<endl;

    // 
    int num = 10;
    int *p = &num;
    //increment by 5 using pointer
    *p+=5;
    cout<<"Num is "<<*p<<endl;

}