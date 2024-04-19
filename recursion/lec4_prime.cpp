#include<iostream>
using namespace std;

bool isPrime(int n , int i =2)
{
    if(n<=2)
    {
        return (n==2)?true:false; 
    }

    if(n%i==0)
    {
        return 0 ;
    }
    if(i*i>n)
    {
        return 1;
    }
    return isPrime(n , i+1);
}
int main() 

{
    int n ;
    
    cout<<"Enter any number: ";
    cin>>n;

    cout<<((isprint(n))?"is prime":"not prime");
}