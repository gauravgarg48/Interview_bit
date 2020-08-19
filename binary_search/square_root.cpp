/*
Given an integar A. Compute and return the square root of A without using standard function.
If A is not a perfect square, return floor(sqrt(A)).

Input Format: The first and only argument given is the integer A.
Output Format: Return floor(sqrt(A))
Constraints
1 <= A <= 10^9

Example
Input 1:  A = 11
Output 1: 3

Input 2:  A = 9
Output 2: 3

*/

int sqrt(int A) {
    long i = 0, n = A, mid, ans = 0;
    while(i <= n) {
        mid = i + (n-i)/2;
        if(mid*mid == A)
            return mid;
        else if(mid*mid < A) {
            ans = mid;
            i = mid+1;
        } else
            n = mid-1;
    }
    return ans;
}
