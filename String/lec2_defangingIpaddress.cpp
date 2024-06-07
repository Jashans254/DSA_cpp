https://leetcode.com/problems/defanging-an-ip-address/description/

class Solution {
    //T.C : - O(N) , S.C :- O(N)
public:
    string defangIPaddr(string address) {
        int index = 0 ;
        string ans;
        while(index<address.size())
        {
            if(address[index] =='.')
            {
            ans = ans + "[.]";
            }
            else
            {
                ans = ans + address[index];
            }
            index++;
        
        }

        return ans;
    }
};