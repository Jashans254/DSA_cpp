// https://www.geeksforgeeks.org/problems/squares-in-nn-chessboard1801/1?page=1&difficulty%5B%5D=-1&category%5B%5D=Numbers&sortBy=submissions

class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        // code here
        
        long long ans;
        for(long long i =  1 ; i<=N; i++)
        {
            ans +=(i*i);
        }
        return ans;
    }
};