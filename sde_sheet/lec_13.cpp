class Solution {
    public:
        vector<int> majorityElement(vector<int>& v) {
    
            int n = v.size();
    
            vector<int> ls;
    
            map<int , int>mpp;
    
            int mini = int (n/3) +1;
    
            for(int i = 0 ;i<n;i++){
    
                mpp[v[i]]++;
    
                if(mpp[v[i]] == mini){
                    ls.push_back(v[i]);
                }
    
                if(ls.size() ==2) break;
            }
            
    
            return ls;
        }
    };

// alternative solution
class Solution {
    public:
        vector<int> majorityElement(vector<int>& v) {
        int n = v.size(); //size of the array
        vector<int> ls; // list of answers
    
        for (int i = 0; i < n; i++) {
            //selected element is v[i]:
            // Checking if v[i] is not already
            // a part of the answer:
            if (ls.size() == 0 || ls[0] != v[i]) {
                int cnt = 0;
                for (int j = 0; j < n; j++) {
                    // counting the frequency of v[i]
                    if (v[j] == v[i]) {
                        cnt++;
                    }
                }
    
                // check if frquency is greater than n/3:
                if (cnt > (n / 3))
                    ls.push_back(v[i]);
            }
    
            if (ls.size() == 2) break;
        }
    
        return ls;
        }
    };

// alternative solution
class Solution {
    public:
        vector<int> majorityElement(vector<int>& v) {
            
            int n = v.size();
    
            int cnt1 = 0 , cnt2 = 0 ;
            int el1 = INT_MIN;
            int el2 = INT_MIN;
    
            for(int i = 0 ; i<n;i++){
                if(cnt1 == 0 && el2!= v[i]){
                    cnt1 =1 ;
                    el1 = v[i];
                }
                else if(cnt2 == 0 && el1 != v[i]){
                    cnt2 =1 ;
                    el2 = v[i];
                }
    
                else if(v[i] == el1) cnt1++;
                else if(v[i] == el2) cnt2++;
                else{
                    cnt1 -- , cnt2 -- ;
                }
            }
    
            vector<int>ls;
    
            cnt1 = 0 , cnt2 = 0 ;
    
            for(int i = 0 ;i<n;i++){
                if(v[i] == el1) cnt1++;
                if(v[i] == el2) cnt2++;
            }
    
            int mini = int(n/3) +1;
            if(cnt1>=mini) ls.push_back(el1);
            if(cnt2 >= mini) ls.push_back(el2);
    
            return ls;
        }
    };