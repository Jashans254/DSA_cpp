class Solution {
    public:
        int removeDuplicates(vector<int>& arr) {
            int n = arr.size();
    
            int count = 0;
            for(int i = 0 ; i<n-1;i++){
                if(arr[i]==arr[i+1]){
                    for(int j = i+1 ;j<n-1;j++){
                         arr[j] = arr[j+1];
                    }
                    n--;
                    i--;
                }
            }
    
            return n;
        }
    };