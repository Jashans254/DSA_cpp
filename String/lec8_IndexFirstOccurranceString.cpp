https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/

Approch 1 : Brute Force

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        
        if (m == 0) {
            return 0; // Special case: if needle is empty, return 0
        }
        
        if (n == m && n == 1) {
            return haystack == needle ? 0 : -1;
        }
        
        for (int i = 0; i <= n - m; i++) {
            int first = i, second = 0;
            while (second < m) {
                if (haystack[first] != needle[second]) {
                    break;
                } else {
                    first++;
                    second++;
                }
            }
            if (second == m) {
                return first - second;
            }
        }
        
        return -1;
    }
};


Approach 2: KMP

class Solution {
   	void  lpsfind( vector<int>&lps,string s) {
	    // Your code goes here
	    int pre = 0 , suf = 1;
	    while(suf<s.size())
	    {
	        if(s[pre] == s[suf])
	        {
	            lps[suf] = pre +1 ;
	            pre++ ;
	            suf++;
	        }
	        else 
	        {
	            if(pre == 0)
	            {
	                lps[suf] = 0 ;
	                suf++;
	            }
	            else
	            {
	                pre = lps[pre -1];
	            }
	        }
	    }
	}
public:
    int strStr(string haystack, string needle) {

        vector<int> lps(needle.size() , 0);
        lpsfind(lps , needle);

        int first = 0 , second = 0 ;
        while(second<needle.size() && first<haystack.size())
        {
            if(needle[second] == haystack[first])
            {
                second++ ;
                first++;
            }
            else{
                if(second == 0)
                {
                    first++;
                }
                else
                {
                    second = lps[second-1];
                }
            }
        }
        if(second == needle.size())
        {
            return first - second;
        }
        return -1 ;
    }
};
