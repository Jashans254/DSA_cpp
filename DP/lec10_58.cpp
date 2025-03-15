class Solution {
    public:
        int findContentChildren(vector<int>& g, vector<int>& s) {
            sort(g.begin(), g.end());  // Sort greed factors
            sort(s.begin(), s.end());  // Sort cookie sizes
    
            int i = 0, j = 0, count = 0;
            while (i < g.size() && j < s.size()) {
                if (s[j] >= g[i]) {  // If the cookie can satisfy the child
                    count++;
                    i++;  // Move to next child
                }
                j++;  // Move to next cookie
            }
            return count;
        }
    };
    