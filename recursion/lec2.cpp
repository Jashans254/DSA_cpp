#include<iostream>
using namespace std;

// // two parameters
// void print1toN(int num , int N){
//     if(num == N){
//         cout<<N;
//         return ;
//     }
//     cout<<N<<endl;
//     print1toN(num +1, N);
// }
// void print1toN(int n )
// {
//     if(n == 0)
//     {
//         return ;
//     }
//     print1toN(n-1);
//     cout<<n<<endl;
// }
// void print10toN(int n )
// {
//     if(n == 10)
//     {
//         cout<<n<<endl;
//         return ;
//     }
//     print10toN(n-1);
//     cout<<n<<endl;
//}


// void printEven(int n)
// {
//     if(n == 2) 
//     {
//         cout<<n;
//         return;
//     }
//     printEven(n-2);
//     cout<<n<<endl;
// }


void tableN(int num,int n = 11 )
{
    if(n  ==1)
    {
        return ;
    }
    tableN(num,n-1);
    cout<<num<<" * "<<n-1<<" = "<<num*(n-1)<<endl;
}
int main()
{
    // // two parameters
    // print1toN(1,5);

    // //one parameter only 
    // print1toN(10);

    // //even number
    // int N = 11;
    // if(N%2!=0) N--;
    // printEven(11);

    // //hw 
    // //n>10
    // print10toN(11);

    //table of n 
    tableN(2);
    return 0 ;
}