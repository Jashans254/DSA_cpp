class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        stack<char> st;
        
        // Process string s
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '#') {
                if(!st.empty()) {
                    st.pop();
                }
            } else {
                st.push(s[i]);
            }
        }
        
        string finalS = "";
        while(!st.empty()) {
            finalS += st.top();
            st.pop();
        }
        
        stack<char> st1;
        
        // Process string t
        for(int i = 0; i < t.size(); i++) {
            if(t[i] == '#') {
                if(!st1.empty()) {
                    st1.pop();
                }
            } else {
                st1.push(t[i]);
            }
        }
        
        string finalT = "";
        while(!st1.empty()) {
            finalT += st1.top();
            st1.pop();
        }
        
        // Compare the final processed strings
        return finalS == finalT;
    }
};


//
