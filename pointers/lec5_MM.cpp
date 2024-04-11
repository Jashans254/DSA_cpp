#include<iostream>
using namespace std;
void f1(){
    cout<<"I m f1"<<endl;
}
void f2(){
    cout<<"I m f2"<<endl;
}
void f3(){
    cout<<"I m f3"<<endl;
    f1();
}
int main() 
{
    //Not allowed
    // int n ;
    // cin>> n;

    // int arr[n];

    int x , y , z ;
    x = 10 , y = 20 ,  z = 30;
    f1();
    f2();
    f3();

    // all the address stored in stack but memory in heap

    //Allocation
    int *ptr = new int ;
    float *ptr1 = new float ;
    int *p = new int[20];

    //Deallocation

    delete ptr ;
    delete ptr1;
    delete[] p;
    return 0 ;

}