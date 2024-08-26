//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}
// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void SortedStack :: sort()
{
    stack<int>ans;
    stack<int>temp;
   //Your code here
   while(!s.empty())
   {
       ans.push(s.top());
       s.pop();
       
       // compare
       while(!s.empty())
       {
           
           if(s.top()> ans.top())
           {
               temp.push(ans.top());
               ans.pop();
               ans.push(s.top());
               s.pop();
           }
           else
           {
               temp.push(s.top());
               s.pop();
           }
       }
       while(!temp.empty())
       {
           s.push(temp.top());
           temp.pop();
       }
   }
   
//   stack<int>rev;
   while(!ans.empty())
   {
       s.push(ans.top());
       ans.pop();
   }
   
//   while(!rev.empty())
//   {
//       s.push(rev.top());
//       rev.pop();
//   }
}