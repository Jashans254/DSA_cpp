https://www.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab


class Solution{
    public:
    int missingNumber(int arr[], int n) { 
       sort(arr,arr+n);
       int count=1;
       for (int i=0;i<n;i++){
           if (arr[i]==count)
           count++;
       }
       return count;
    }
};


//alternate solution

class Solution{
    public:
    int missingNumber(int arr[], int n) {
        int mx=INT_MIN;
        for(int i=0;i<n;i++) {
            if(arr[i]<=0)
                arr[i]=0;
            mx=max(mx,arr[i]);
        }
        mx=mx+1;
        for(int i=0;i<n;i++) {
            if(arr[i]>0) {
                int ind=arr[i]%mx-1;
                if(ind<n && ind>=0) arr[ind]+=mx;
            }
        }
        for(int i=0;i<n;i++)
            if(arr[i]<mx)
                return i+1;
        return n+1;
    }
};
