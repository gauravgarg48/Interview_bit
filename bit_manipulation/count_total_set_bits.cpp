/*
Given a positive integer A, the task is to count the total number of set bits in the binary
representation of all the numbers from 1 to A. Return the count modulo 10^9 + 7.

Problem Constraints
1 <= A <= 10^9

Input Format: First and only argument is an integer A.
Output Format: Return an integer denoting the count.

Example
Input: A = 3
Output: 4

Explanation:
DECIMAL    BINARY  SET BIT COUNT
  1          01        1
  2          10        1
  3          11        2
Answer = (1+1+2) % 1000000007 = 4
*/

int solve(int A) {
    long long ans = 0, x = 1, y;
    A++;
    while(A >= x) {
        y = A%(2*x);
        y = (A-y)/2 + max(y-x, 0LL);
        ans = (y+ans) % 1000000007;
        x *= 2;
    }
    return ans % 1000000007;
}
