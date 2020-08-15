/*
A robot is located at the top-left corner of an m x n grid. The robot can only move either
down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid.
How many possible unique paths are there?
Note: m and n will be such that the resulting answer fits in a 32 bit signed integer.

Example :
Input : A = 2, B = 2
Output : 2
possible routes : (0, 0) -> (0, 1) -> (1, 1) 
            OR  : (0, 0) -> (1, 0) -> (1, 1)
*/

int uniquePaths(int n, int m) {
    // (m+n-2) C (n-1) = (m+n-2)! / (n-1)! (m-1)! 
    long long ans = 1;
    for (int i = n; i < (m + n - 1); i++) {
        ans *= i;
        ans /= (i - n + 1);
    }
    return ans;
}
