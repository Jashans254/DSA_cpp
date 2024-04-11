#include<iostream>
using namespace std;

int main()
{
//     char name[5];
//     cout<<"Enter your name:";
//     cin>>name;
//     cout<<name<<endl;
//     const char name2[] = {'A','B','C'};
//    // cout<<name2<<endl;

    // string s;
    // cout<<"Enter any string value:";
    // cin>>s;
    // cout<<s<<endl;

    // string s2;
    // cout<<"Enter string with space:";
    // getline(cin,s2);
    // cout<<s2;

    // combine
    string s3 = "hel" , s4 = "lo";
    s3+=s4;
    cout<<s3;

    //pushback:- only 1 character
    s4.push_back('j');
    cout<<s4;
    //append :- string
    s4.append("jj");
    cout<<s4;

    //escape character
    string s5 = "Rohit is a \"good\" boy";
    cout<<endl<<s5;

    //program to reverse the string
    string rev = "Rohit";
    int s = 0 , e = rev.size()-1;
    while(s<e)
    {
        swap(rev[s] , rev[e]);
        s++ , e--;
    }
    cout<<endl<<rev;

    // program to find length manually
    string str = "ChennaiSuperKings";
    int i = 0 ,len = 0;
    while(str[i]!='\0')
    {
        len++;
        i++;
    }
    cout<<endl<<"Length is "<<len;
}