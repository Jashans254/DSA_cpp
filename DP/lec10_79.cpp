class Solution {
    public:
    
        int longestCommonSubsequence(string s, string t) {
            
            int n = s.size();
            int m = t.size();
    
            vector<vector<int>>dp( n+1 , vector<int>( m+1 ,-1));
            vector<int> prev(m+1 , 0) , cur(m+1,0);
            for(int j = 0 ; j<=m;j++) prev[j] = 0;
    
            for(int i = 1 ;i<=n;i++){
    
                for(int j = 1 ;j<=m;j++){
                        if(s[i-1] == t[j-1]) cur[j]= 1 + prev[ j-1 ];
                        else
                          cur[j]=max(prev[j],cur[ j-1]); 
                }
                prev = cur;
            }
            return prev[m]; 
        }
    };