// https://leetcode.com/problems/climbing-stairs/description/

//with array
class Solution {
public:
    int climbStairs(int n) {
        int arr[n+1];
        arr[0] = 1;
        arr[1]=1;
        for(int i = 2; i<=n ; i++)
        {
            arr[i] = arr[i-1]+arr[i-2];
        }
         return arr[n];
    }
   
};

//without array 

class Solution {
public:
    int climbStairs(int n) {
        if(n<=1)
        {
            return n;
        }
        int ways1 = 1 , ways2 = 1 ;//intialise
        int totalways = 0;
        for(int i = 2; i<=n;i++)
        {
            totalways = ways1 + ways2;
            ways1 = ways2;
            ways2 = totalways;
        }

        return totalways;
    }
};
