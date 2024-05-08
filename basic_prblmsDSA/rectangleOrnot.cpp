// https://www.interviewbit.com/problems/is-rectangle/

int solve(int a, int b, int c, int d) {
    if((a ==b && c == d) || ( a==c && b == d) || (a == d && b == c) )
    {
        return 1;
    }
    return 0 ;
}