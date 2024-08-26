class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int count = 0 ;

        for(int i = 0 ; i<s.size();i++)
        {
            //opening
            if(s[i]=='(')
            {
                st.push(s[i]);
            }
            else
            {
                if(st.empty())
                {
                    count++;
                }
                else
                {
                    st.pop();
                }
            }
        }

        return count+st.size();
    }
};


// without stack
class Solution {
public:
    int minAddToMakeValid(string s) {
        int left = 0 , count =0 ;
        for(int i=0 ;i<s.size();i++)
        {
            if(s[i] == '(')
            {
                left++;
            }
            else
            {
                if(!left)
                  count++;
                else
                  left--;
            }
        }

        return left + count;
    }
};