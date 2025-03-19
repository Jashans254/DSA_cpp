class Solution {
    public:
        int findDuplicate(vector<int>& nums) {
            int n = nums.size();
    
            sort(nums.begin() , nums.end());
    
            for(int i = 0 ; i<n-1;i++){
                if(nums[i] == nums[i+1]){
                    return nums[i];
                }
            }
            return nums[n];
        }
    };


// alternative solution
class Solution {
    public:
        int findDuplicate(vector<int>& arr) {
           int n = arr.size();
    
           vector<int>freq(n+1 ,0);
    
           for(int i = 0 ;i<n;i++){
    
            if(freq[arr[i]]==0){
                freq[arr[i]]++;
            }else{
                return arr[i];
            }
           }
    
           return arr[n];
        }
    };


// alternative solution
class Solution {
    public:
        int findDuplicate(vector<int>& nums) {
          int slow = nums[0];
          int fast = nums[0];
    
          do{
            slow = nums[slow];
            fast = nums[nums[fast]];
          }while(slow!= fast);
    
          fast = nums[0];
          while(slow!=fast){
            slow = nums[slow];
            fast = nums[fast];
          }
    
          return slow;
        }
    };