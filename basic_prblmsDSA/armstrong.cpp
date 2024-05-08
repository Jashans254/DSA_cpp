//armstrong is a number such that sum of cube of its digits is equal to the number
// 153 = 1 + 125 + 27
// count digit function used

#include<iostream>
#include<cmath>
using namespace std;

int countdigit( int m)
{
    int count = 0 ;
    while(m)
    {
        count++;
        m/=10;

    }
    return count;
}
bool armstrong(int num , int digit)
{
    int n =num , rem ,ans = 0 ;
    while(n)
    {
        rem = n%10;
        n/=10;
        ans = ans + pow(rem , digit);
    }
    if(ans == num)
    {
        return 1;
    }
    else
    {
    return 0 ;
    }
}
int main() 
{
    int num;
    cin>>num;

    int digit = countdigit(num);
    cout<<armstrong(num , digit);
    return 0 ;
}