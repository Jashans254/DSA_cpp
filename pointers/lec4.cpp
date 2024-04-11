//double pointers
#include<iostream>
using namespace std;

// //1st - a
// void fun(int *p)
// {
//     *p = *p +5;
// }

// //1st - b
// void fun(int *p)
// {
//     p++;
// }

// //1st - c
// void fun(int **p)
// {
//     **p = **p +1;
// }

// // 3rd 
// void second(int *p1 , int *p2)
// {
//     p1 = p2;
//     *p1 = 2;
// }

// //problem - 6
// int four(int x , int *py , int **ppz)
// {
//     int y , z;

//     **ppz+=1 , z = **ppz ;
//     *py+=2 , y = *py ;
//     x+=3;

//     return x +y+z;
// }

// //problem - 7 
// void five(char *str1 , char *str2)
// {
//     while((*str1=*str2))
//     {
//         str1++  , str2++;
//     }
// }
int main() 
{

    // intro to multiple pointers 

    // int n = 10 ;// value
    // int *p = &n; // pointer p points to address of varuable n with type int
    // int **ptr = &p; // pointer ptr points to the pointer p points to address of varuable n with type int
    // int ***p1 =&ptr;//  pointer p1 points to the pointer ptr points to the pointer p points to address of varuable n with type int

    // cout<<n<<endl;
    // *p = *p+4;
    // // 10 +4 = 14 
    // cout<<*p<<endl;
    // **ptr = **ptr +10;
    // cout<<**ptr<<endl;
    // ***p1 = 20 ;

    // "n" pointer -> address of "n-1" th pointer
    // cout<<***p1<<endl; 

    // cout<<endl;

    // problems 

    // problem 1 : - change the data in pointer variable passed as an argument 

    // // 1st - a
    // int  n1 = 10;
    // int *p2 = &n1;
    // cout<<n1<<endl;
    // fun(p2);
    // cout<<n1<<endl;

    // 1st- b
    // int  n1 = 10;
    // int *p2 = &n1;
    // cout<<n1<<endl;
    // fun(p2);
    // cout<<n1<<endl;

    //1st -c
    // int  n1 = 10;
    // int *p2 = &n1;
    // cout<<n1<<endl;
    // int **ptr = &p2;
    // fun(ptr);
    // cout<<n1<<endl;


    // //problem -2 

    // char c[]= "GATE2024";
    // char *p = c;
    // cout<<p + p[3] - p[1];
    // // address of c + 'E' -'A'
    // // add + 4 


    // // problem - 3
    // int i = 0 , j = 1;
    // second(&i , & j);
    // cout<<i<<" "<<j;

    // //problem - 4
    // int *ptr ;
    // int x = 0 ;
    // ptr = &x;
    // int y = *ptr;
    // *ptr = 1 ;
    // cout<<x<<" "<<y;

    // // problem - 5
    // int a = 5 , b = 10;
    // int &name = a;
    // int *ptr = &a;
    // (*ptr)++;
    // ptr = &b;
    // *ptr = *ptr + 5;
    // name+=5;
    // cout<<a<<" "<<b;

    // //problem - 6
    // int c = 4  , *b = &c , **a = &b;

    // cout<<four(c , b , a);


    // //problem - 7 
    //copying one string to other 
    // char first[] = "Mohit";
    // char second[] = "Robin";
    // five(first , second);
    // cout<<first;

}