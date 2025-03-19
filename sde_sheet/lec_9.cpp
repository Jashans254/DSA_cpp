class Solution {
    public:
        void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
            
            int left = m - 1;  // Last valid element in arr1
            int right = 0;     // First element in arr2
    
            // Swap misplaced elements between arr1 and arr2
            while (left >= 0 && right < n) {
                if (arr1[left] > arr2[right]) {
                    swap(arr1[left], arr2[right]);
                    left--;
                    right++;
                } else {
                    break;
                }
            }
    
            // Sort both arrays separately
            sort(arr1.begin(), arr1.begin() + m);
            sort(arr2.begin(), arr2.end());
    
            // Copy sorted arr2 back into arr1's extra space
            for (int i = 0; i < n; i++) {
                arr1[m + i] = arr2[i];
            }
        }
    };
    