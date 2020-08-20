/*
Given an integer array A of N integers, find the pair of integers in the array which
have minimum XOR value. Report the minimum XOR value.

Constraints:
2 <= N <= 100 000  
0 <= A[i] <= 1 000 000 000

Examples:

Input 1: A = [0, 2, 5, 7]
Input 2: A = [0, 4, 7, 9]

Output 1: 2
Output 2: 3
*/

int findMinXor(vector<int> &A) {
    sort(A.begin(), A.end());
    int i, n = A.size(), mn = A[0]^A[1];
    for(i = 2; i < n; ++i)
        mn = min(mn, A[i]^A[i-1]);
    return mn;
}