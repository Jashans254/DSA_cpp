// pointer with array and pointer arthimetic

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {11, 7  ,8 , 12 , 14};

    // all the following pointers , points to the address of array (first element only)
    int *ptr = &arr[0];
    int *ptr1 = arr;
    int *ptr2 = arr+0;
    int *ptr3 = &0[arr];

    cout<<arr<<" "<<&arr<<endl;
    cout<<ptr<<" "<<ptr1<<" "<<ptr2<<" "<<ptr3<<endl;
    //defrencing 
    cout<<*(arr+3)<<endl;

    //printing values 
    for(int i = 0 ; i<5; i++)
    {
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;

    //printing address 
    for(int i = 0 ; i<5; i++)
    {
        cout<<(arr+i)<<" ";
    }
    cout<<endl;

    //using pointer
    int *ptr5 = arr;
     for(int i = 0 ; i<5; i++)
    {
        cout<<ptr[i]<<" ";
    }
    cout<<endl;

    ptr5 = arr;
     for(int i = 0 ; i<5; i++)
    {
        cout<<*ptr<<" ";
        ptr++;// baseaddress + datatype 
    }
    cout<<endl;

    // arr++ , arr-- not allowed 

    //hw
    //try address of char array
    char s1[] = "agbds";
    char *st1= s1;
    cout<<st1<<endl;
    //try address of char
    char c = 'a';
    char *ch = &c;
    cout<<c<<endl;
    //try address of string
    string s = "absc";
    string *st = &s;
    cout<<st<<endl;

    // store address of last element
    int arr1[] = {1 , 2, 3 , 4,5};
    int *lstptr = arr1 + 4;
    for(int i = 0 ;i<5;i++)
    {
        cout<<*lstptr<<" ";
        lstptr--;
    }

}