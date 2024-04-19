#include<iostream>
using namespace std;

int sumNcubes(int n)
{
    if(n == 1) return  1;

    return n*n*n  + sumNcubes(n-1);
}
int main() 
{
    int n ;
    
    cout<<"Enter any number: ";
    cin>>n;
    cout<<sumNcubes(n);

}