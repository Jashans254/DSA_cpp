#include<iostream>
using namespace std;

int main()
{
    int a , b ,c;
    cin>>a>>b;
    // if(b == 0)
    // {
    //     cout<<"Divide by 0 error"<<endl;
    //     return 0;
    // }

    try{
        if(b == 0)
        throw "Divide by 0 error\n";
          c = a/b;
    }
    catch(const char *e){
        cout<<"Exception : "<<e;
    }

    cout<<c<<endl;
}