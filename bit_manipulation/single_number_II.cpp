/*
Given an array of integers, every element appears thrice except for one which occurs once.
Find that element which does not appear thrice.
Note: Your algorithm should have a linear runtime complexity.
Could you implement it without using extra memory?

Input Format: First and only argument of input contains an integer array A
Output Format: return a single integer.
Constraints:
2 <= N <= 5 000 000  
0 <= A[i] <= INT_MAX

Example:
Input: A = [1, 2, 4, 3, 3, 2, 2, 3, 1, 1]
Output: 4
Explanation: 4 occur exactly once
*/

int singleNumber(const vector<int> &A) {
    int i, n = A.size(), x1, x2, x3;
    x1 = x2 = x3 = 0;
    for(i = 0; i < n; ++i) {
        x2 |= x1 & A[i];
        x1 = x1^A[i];
        x3 = x1 & x2;
        x1 &= ~x3;
        x2 &= ~x3;
    }
    return x1;
}
