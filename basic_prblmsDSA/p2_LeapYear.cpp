//https://www.geeksforgeeks.org/problems/leap-year0943/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab
class Solution{
public:
    int isLeap(int N){
        //code here
        if(N%400==0) 
        return 1;
        else if (N% 4==0 && N%100!=0 )
        return 1;
        else
        return 0;
        
    }
};