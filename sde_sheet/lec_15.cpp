class Solution {
    public:
        vector<vector<int>> threeSum(vector<int>& v) {
            int n = v.size();
    
            set<vector<int>>st;
    
            for(int i = 0 ;i<n;i++){
                for(int j = i+1 ; j<n;j++){
                    for(int k = j+1 ; k<n;k++){
    
                        if(v[i] + v[j] + v[k] == 0){
                            vector<int> temp = {v[i] ,v[j] ,v[k] };
                            sort(temp.begin() , temp.end());
                            st.insert(temp);
                        }
                    }
                }
            }
    
            vector<vector<int>> ans(st.begin() , st.end());
            return ans;
        }
    };

// 
class Solution {
    public:
        vector<vector<int>> threeSum(vector<int>& arr) {
            int n = arr.size();
    
            set<vector<int>> st;
    
        for (int i = 0; i < n; i++) {
            set<int> hashset;
            for (int j = i + 1; j < n; j++) {
                //Calculate the 3rd element:
                int third = -(arr[i] + arr[j]);
    
                //Find the element in the set:
                if (hashset.find(third) != hashset.end()) {
                    vector<int> temp = {arr[i], arr[j], third};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                hashset.insert(arr[j]);
            }
        }
    
        //store the set in the answer:
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
        }
    };

// pointer approach
class Solution {
    public:
        vector<vector<int>> threeSum(vector<int>& arr) {
          int n = arr.size();
    
          vector<vector<int>>ans;
          sort(arr.begin() , arr.end());
    
          for(int i = 0 ; i<n;i++){
    
            if( i!= 0 && arr[i] == arr[i-1]) continue;// remove duplicates
    
            int j = i+1;
            int k = n-1;
    
            while(j<k){
                int sum = arr[i] + arr[j] + arr[k];
                if(sum<0){
                    j++;
                }
                else if( sum>0){
                    k--;
                }
                else{
    
                    vector<int>temp = {arr[i] ,arr[j],arr[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
    
                    while(j<k && arr[j] == arr[j-1]) j++;
                    while(j<k && arr[k] == arr[k+1]) k--;
                }
            }
    
    
          }
    
          return ans;
        }
    };