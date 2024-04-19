#include<iostream>
#include<vector>
using namespace std;

//T.C -> O(n) , S.C. -O(n)
//T(n) = 1 + T(n-1)
void print(int n)
    {
        if(n== 0)
        {
            return;
        }
        cout<<n;
        print(n-1);
    }
//T.C -> O(n) , S.C. -O(n)
void print1(int arr[] , int index)
{
    if(index == -1)
    return ;

    cout<<arr[index];
    print1(arr , index-1);
}

//T.C -> O(n) , S.C. -O(n^2) due to local var array arr
int sum(vector<int> arr , int index , int n)
{
    if(index == n)
    {
        return 0 ;
    }

    return arr[index] + sum (arr , index + 1 , n);
}
//T.C -> O(n) , S.C. -O(n) due to refernce 
int sum1(vector<int> &arr , int index , int n)
{
    if(index == n)
    {
        return 0 ;
    }

    return arr[index] + sum1(arr , index + 1 , n);
}

//T.C -> O(log2(n)) , S.C. -O(n) 
//T(n) = 1 + T(n/2)
bool BinarySearch(int arr[] , int start , int end , int x)
{
    int mid = start + (end-start) /2;

    if( arr[mid] == x)
    {
        return 1;
    }
    else if( arr[mid] < x)
    {
        return BinarySearch(arr , mid+1 , end , x);
    }
    else
    {
         return BinarySearch(arr , start , mid, x);
    }
}
//T.C -> O(2^n) , S.C. -O(n) 
//T(n) = 1 + T(n-1) + T(n-2)
int fib(int n)
{
    if(n<=1)
    {
        return n;
    }
    return fib(n-1) + fib(n-2);
}

//T.C -> O(n) , S.C. -O(n)
int fact(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n* fact(n-1);
}

//T.C -> O(n) , S.C. -O(n)
int power(int base , int exponent)
{
    if(exponent == 0 )
    {
        return 1;
    }
    return base * power(base , exponent -1);
}

//T.C -> O(n/2) , S.C. -O(n)
bool ispalindrome (string str , int start , int end)
{
    if(start >=end)
    {
        return true;
    }

    return (str[start] == str[end] && ispalindrome(str , start +1 , end - 1));
}

//T.C -> O(n/2) , S.C. -O(n)

void revstring(string &str , int start , int end)
{
    if(start <end)
    {
        swap(str[start] , str[end]);
    }
    revstring(str , start+1 , end -1);
}

//T.C -> O(n) , S.C. -O(n)
bool isEven (int n)
{
    if(n== 0)
    {
        return ;
    }

    return !isEven(n-1);
}
int main() 
{
    int n = 5 ;
    //T.C = O(n) , S.C . -> O (1)
    for(int i=0 ; i<n ;i++)
    {
        cout<<i<<" ";
    }
    
}