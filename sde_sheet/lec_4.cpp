class Solution {
    public:
        void nextPermutation(vector<int>& A) {
            
            int n = A.size();
    
            //find the break point 
            int ind = - 1 ;
            for(int i = n -2; i>=0 ;i--){
    
                if(A[i]<A[i+1]){
                    ind = i;
                    break;
                }
            }
    
            if(ind == -1){
                reverse(A.begin() , A.end());
                return;
            }
    
            for(int i = n-1; i>ind;i--){
                if(A[i]> A[ind]){
                    swap(A[i],A[ind]);
                    break;
                }
            }
    
            reverse(A.begin() + ind +1 , A.end());
        }
    };