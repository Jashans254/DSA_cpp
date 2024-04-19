
//https://leetcode.com/problems/fibonacci-number/
//Leetcode solution
class Solution {
public:
    int fib(int n) {
        if(n<=1){
    return n;
    }

    return fib(n-1) + fib(n-2);
    }
};
/*
//print fibonacci series 
Local pc 
*/
#include<iostream>
using namespace std;

int fibo(int n )
{
    if(n<=1){
    return n;
    }

    return fibo(n-1) + fibo(n-2);
}
int main() 
{
    int n ;
    cout<<"Enter upto which series is to be printed: ";
    cin>>n;
    //recursive
    for(int i = 0 ; i<=n;i++)
    {
        cout<<fibo(i)<<" ";
    }
}