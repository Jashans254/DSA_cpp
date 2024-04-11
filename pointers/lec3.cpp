// pointers with char array , function calls , length , palandrone string 

#include<iostream>
using namespace std;


//function calls
void incr1(int num)
{
    num++;
}
void incr2(int *num)
{
    *num+=1;
}
void incr3(int &num)
{
    num++;
}

// calculating length
int calcLen(const char *str)
{
    int cnt=0 , i = 0;
    while(str[cnt]!='\0')
    {
        cnt++;
        i++;
    }
    return cnt;
}

//checking palindrome
bool isPln(const char *str)
{
    int s= 0 , e = calcLen(str)-1;
    while(s<=e)
    {
        if(str[s] == str[e])
        {
            s++ , e--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main()
{
    char ar[] = {'a' ,'b','c','d','e' }; 
    // ,'\0'}; if needed

    char *ptr = ar;

    cout<<ptr<<endl;
    cout<<ar<<endl;
    cout<<*ptr<<endl;


    // to print address
    cout<<(void*)ptr<<endl;
    cout<<(void*)ar<<endl;

    //alternative
    cout<<static_cast<void*>(ptr)<<endl;
    

    // single char
    char name = 'a';
    cout<<name<<endl;
    char *ptr1 = &name;
    cout<<ptr1<<endl;
    cout<<(void*)ptr1<<endl;

    //call by value
    int n = 10;
    int temp = n;
    cout<<n<<endl;
    incr1(n);
    cout<<n<<endl;

    //call by pointer
    incr2(&n);
    cout<<n<<endl;

    //call by refrence
    incr3(n);
    cout<<n<<endl;

    const char str[] = "abcd";
    cout<<calcLen(str)<<endl;

    const char *paln1 = "ohod";
    cout<<"Is \""<<paln1<<"\" a palindrone?"<<(isPln(paln1)?" Yes ":" No");
    
}