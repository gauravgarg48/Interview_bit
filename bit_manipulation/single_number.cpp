/*
Given an array of integers, every element appears twice except for one. Find that single one.
Note: Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

Input Format: First and only argument of input contains an integer array A
Output Format: Return a single integer denoting single element

Constraints:
2 <= N <= 2 000 000  
0 <= A[i] <= INT_MAX

Example:
Input 1: A = [1, 2, 2, 3, 1]
Output 1: 3
Explanation: 3 occurs only once
*/

int singleNumber(const vector<int> &A) {
    int x = 0;
    for(int i: A)
        x = x^i;
    return x;
}
