/*
Given an integer A, return the number of trailing zeroes in A!.
Note: Your solution should be in logarithmic time complexity.

Problem Constraints
1 <= A <= 10000

Input Format: First and only argumment is integer A.
Output Format: Return an integer, the answer to the problem.

Example 
Input 1: A = 4
Input 2: A = 5

Output 1: 0
Output 2: 1

Explanation 1: 4! = 24
Explanation 2: 5! = 120
*/

int trailingZeroes(int A) {
    int x = 5, res = 0;
    while(x <= A) {
        res += A/x;
        x *= 5;
    }
    return res;
}

