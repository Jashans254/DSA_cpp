https://leetcode.com/problems/add-strings/
class Solution {
    string add(string num1, string num2 )
    {
        int index1 = num1.size() - 1;
        int index2 = num2.size() - 1;

        string ans;

        int carry =  0 , sum = 0 ;

        while(index2>=0)
        {
            sum = (num1[index1] - '0') + (num2[index2] - '0') + carry ;
            carry = sum/10 ;
            char c = sum%10 + '0';
            ans+=c;
            index2-- , index1--;
        }
        //index left
        while(index1>=0)
        {
            sum = num1[index1] - '0' + carry;
            carry = sum/10;
            char c = '0' + sum%10;
            ans+=c;
            index1--;
        }
        if(carry)
        {
            ans+='1';
        }

        reverse(ans.begin() , ans.end());
        return ans;
    }
public:
    string addStrings(string num1, string num2) {

        if(num1.size()<num2.size())
        {
            return add(num2 , num1);
        }
        else
        {
            return add(num1 , num2);
        }
        
        
    }
};