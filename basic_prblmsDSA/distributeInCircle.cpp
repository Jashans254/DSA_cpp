https://www.interviewbit.com/problems/distribute-in-circle/

int solve(int A, int B, int C) {
    int ans = (A%B + (C-1))%B;
    return ans;
}