https://leetcode.com/problems/generate-parentheses/description/
class Solution {

    void parenth(int n , int left , int right ,
     vector<string>&ans ,string &temp )
     {

        if(left +right == 2*n)
        {
            ans.push_back(temp);
            return;
        }
        //left parenth
        if(left<n)
        {
            temp.push_back('(');
            parenth(n , left+1 , right , ans , temp);
            temp.pop_back();
        }

        //right parenth
        if(right <left)
        {
            temp.push_back(')');
            parenth(n , left, right+1 , ans , temp);
            temp.pop_back();
        }
     }
public:
    vector<string> generateParenthesis(int n) {
        
        vector<string>ans;
        string temp;
        parenth(n , 0 , 0 ,ans , temp);
       return ans;
    }
};