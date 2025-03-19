class Solution {
    public:
        double myPow(double x, int n) {
         double ans = 1.0;
            bool isNegative = (n < 0); // Check if exponent is negative
            long long N = abs((long long)n); // Convert to positive to avoid overflow
            
            for (long long i = 0; i < N; i++) {
                ans = ans * x;
            }
            
            if (isNegative) {
                return 1.0 / ans;
            }
            return ans;
        }
    };

// alternative solution
class Solution {
    public:
        double myPow(double x, int n) {
         double ans = 1.0;
         double oriNum = n;
    
         if( x == 0 || x == 1){
            return x;
         }
    
         if(n<0){
            x = 1/x;
            n = -(n +1);
            ans = ans*x;
         }
    
         while(n>0){
    
            if(n%2==1){
                ans = ans*x;
                n = n-1;
            }
    
            else{
                n = n/2;
                x = x*x;
    
            }
         }
    
         return ans;
        }
    };