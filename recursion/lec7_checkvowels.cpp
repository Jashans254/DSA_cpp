#include<iostream>
using namespace std;


int count(string str , int idx)
{
    if(idx == -1)
    {
        return 0 ;
    }
    if(str[idx] == 'a' || str[idx] == 'e' || str[idx] == 'i' || str[idx] == 'o' ||str[idx] == 'u'  )
    {
    return 1+count(str , idx-1);
    }
    return count(str , idx-1);
}
int main() 
{

    string str2 = "Hello";
    //call function
    
    cout<<"count of vowels in "<<str2<<" is " <<count(str2 , str2.size() -1);
}