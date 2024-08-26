#include<iostream>
#include<stack>
using namespace std;

// bool check(string str)
// {
//     stack<char> s;
//     for(int i = 0 ;i<str.size();i++)
//     {
//         if(s.empty() && str[i]!=')')
//         {
//             s.push(str[i]);
//         }
//         else if(s.top()=='(' && str[i]==')')
//         {
//             s.pop();
//         }
//         else if(str[i]=='(')
//         {
//             s.push(str[i]);
//         }
//     }
//     if(s.empty())
//     {
//         return 1;
//     }
//     return 0; 
// }

// bool check(string str)
// {
//     stack<char> s;

//     for(int i = 0 ;i<str.size();i++)
//     {
//         // opening bracket
//         if(str[i]=='(')
//         {
//             s.push(str[i]);
//         }
//         //closing
//         else{
//             if(s.empty())
//             {
//                 return 0 ;
//             }
//             else 
//             {
//                 s.pop();
//             }
//         }
//     }
//     return s.empty();
// }
// space complexity - O(1) ; without stack


bool    check(string str)
{
    int left = 0 , right = 0 ;
    for(int i = 0 ; i<str.size();i++)
    {
        
        if(str[i]=='(')
        {
            left++;
        }
        else{
            if(left == 0)
            {
                return 0 ;
            }
            else{
                left--;
            }
        }
    }

    return left==0;
}
int main()
{
    string str = "((())))";

    cout<<check(str);
}