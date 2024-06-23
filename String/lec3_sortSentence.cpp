https://leetcode.com/problems/sorting-the-sentence/description/


class Solution {
public:
    string sortSentence(string s) {
        vector<string> ans(10);
        string temp;
        int count = 0, index = 0;

        while (index < s.size()) {
            if (s[index] == ' ') {
                int pos = temp[temp.size() - 1] - '0';
                temp.pop_back();
                ans[pos] = temp;
                temp.clear();
                count++;
            } else {
                temp += s[index];
            }
            index++;
        }

        // Process the last word (if any)
        if (!temp.empty()) {
            int pos = temp[temp.size() - 1] - '0';
            temp.pop_back();
            ans[pos] = temp;
            count++;
        }

        temp.clear();
        for (int i = 1; i <= count; i++) {
            temp += ans[i];
            temp += " ";
        }
        // Remove the trailing space
        if (!temp.empty()) {
            temp.pop_back();
        }

        return temp;
    }
};
