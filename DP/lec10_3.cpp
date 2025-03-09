// failed at 10th test case

class Solution {
  public:
  
  int f (int ind , vector<int>&heights)
  {
      if(ind == 0 ) return 0 ;
      
      int left = f(ind - 1 , heights)+ abs(heights[ind] - heights[ind-1]);
      
      int right = INT_MAX;
      
      if(ind>1)
      {
          right = f( ind - 2, heights)+ abs(heights[ind] - heights[ind-2]);
      }
      
      return min(left , right);
  }
    int minCost(vector<int>& height) {
        // Code here
        int n = height.size();
        return f(n-1 , height);
    }
};




