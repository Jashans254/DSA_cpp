class Solution {
public:
    int largestRectangleArea(vector<int>& height) {
        int n = height.size();
        vector<int>Right(n) ;
        vector<int>Left(n);
        stack<int>st;

        // next smallest left
        for( int i = 0 ; i<n; i++)
        {
            while(!st.empty() && height[st.top()]>height[i])
            {
                Right[st.top()] = i ;
                st.pop();
            }
            st.push(i);
        }

        while(!st.empty())
        {
            Right[st.top()] = n;
            st.pop();
        }

        // next smallest right
        for(int i =n-1;i>=0 ;i--)
        {
            while(!st.empty() && height[st.top()]>height[i])
            {
                Left[st.top()] = i ;
                st.pop();
            }
            st.push(i);
        }

        while(!st.empty())
        {
            Left[st.top()] = -1;
            st.pop();
        }

        int ans = 0 ;
        for( int i = 0  ; i<n; i++)
        {
            ans = max( ans , height[i]* (Right[i]-Left[i]-1));

        }

        return ans;
    }
};



//alternative
class Solution {
    public:
        int largestRectangleArea(vector<int>& histo) {
            stack<int> st; 
    int maxA = 0; 
    int n =histo.size(); 
    for(int i=0;i<=n;i++) { 
    while(!st.empty() && (i==n || histo[st.top()] >= histo[i])) { 
    int height = histo[st.top()]; 
    st.pop(); 
    int width; 
    if(st.empty()) width = i; 
    else width = i- st.top() - 1; 
    maxA = max(maxA, width * height); 
    } 
    st.push(i); 
    } 
    return maxA; 
        }
    };
    