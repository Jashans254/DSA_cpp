#include<iostream>
using namespace std;

// //callling multiple functoins
// void fun3(int  n)
// {
//     cout<<n<<" days left for your birthday"<<endl;
// }
// void fun2(int  n)
// {
//     cout<<n<<" days left for your birthday"<<endl;
// }
// void fun1(int  n)
// {
//     cout<<n<<" days left for your birthday"<<endl;
// }
// void fun0()
// {
//     cout<<"happy birthday"<<endl;
// }


 // // calling only one function but without recursion (nested function)
// void fun3(int n);
// void fun2(int n);
// void fun1(int n);
// void fun0();
// void fun3(int  n)
// {
//     cout<<n<<" days left for your birthday"<<endl;
//     fun2(n-1);
// }
// void fun2(int  n)
// {
//     cout<<n<<" days left for your birthday"<<endl;
//     fun1(n-1);
// }
// void fun1(int  n)
// {
//     cout<<n<<" days left for your birthday"<<endl;
//     fun0();
// }
// void fun0()
// {
//     cout<<"happy birthday"<<endl;
// }


// // recursive call 
// void fun3(int n )
// {
//     if(n==0)
//     {
//         cout<<"Happy birthday"<<endl;
//         return ;
//     }
//     cout<<n<<" Days left for birthday!!"<<endl;
//     fun3(n-1);
// }

// //
// void printNto1(int n)
// {
//     if(n ==0)
//     {
//         return ;
//     }
//     cout<<n<<endl;
//     printNto1(n-1);
// }


// void printEvenNto1(int n)
// {
    
//     if(n==2)
//     {
//         cout<<n;
//         return;
//     }
//     cout<<n<<endl;
//     printEvenNto1(n-2);
// }



// void printOddNto1(int n)
// {
//     if(n%2==1) { 
//     if(n==1)
//     {
//         cout<<n;
//         return;
//     }
//     cout<<n<<endl;
//     printOddNto1(n-2);
//     }
//     else
//     {
//         printOddNto1(n-1);
//     }
//     return;
// }

// //
// void printName(string str , int n = 10)
// {
//     if(n==0)
//     {
//         return;
//     }
//     cout<<str<<endl;

//     printName(str , n-1);
// }

void print1toN(int n )
{
    if(n == 0)
    {
        return ;
    }
    print1toN(n-1);
    cout<<n<<endl;
}
int main() 

{

    // //iterative approach
    // for(int i = 5 ; i>1  ; i--)
    // {
    //     cout<<i<<" days left for your birthday"<<endl;
    // }
    // cout<<"-----------------------------"<<endl;

    // //callling multiple functoins
    // fun3(3);
    // fun2(2);
    // fun1(1);
    // fun0();

    // // calling only one function but without recursion (nested function)
    // fun3(3);

    // // recursive call 
    // fun3(5);

    // // print n to 1 iterative
    // for(int i = 5 ;i>0;i--)
    // {
    //     cout<<i<<endl;
    // }

    // //recursive
    // printNto1(5);

    // //even number
    // printEvenNto1(10);


    //homework
    // //odd number
    // printOddNto1(10);

    // //print "Name" 10 times
    // printName("Helloji");

    //print 1 to n
    print1toN(10);




    return 0 ;
}

    