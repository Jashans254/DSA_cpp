https://leetcode.com/problems/check-if-the-sentence-is-pangram/

class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> alpha(26 , 0);

        for(int i = 0 ; i<sentence.size() ;i++)
        {
            alpha[sentence[i]- 'a'] = 1;
        }

        for(int i = 0 ; i<26;i++)
        {
            if(alpha[i] == 0)
            {
                return 0 ;

            }
        }

        return 1;
    }
};