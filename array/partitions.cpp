/*
You are given a 1D integer array B containing A integers.
Count the number of ways to split all the elements of the array into 3 contiguous 
parts so that the sum of elements in each part is the same.
Such that : sum(B[1],..B[i]) = sum(B[i+1],...B[j]) = sum(B[j+1],...B[n])

Problem Constraints
1 <= A <= 10^5
-10^9 <= B[i] <= 10^9

Input Format: First argument is an integer A, second argument is an 1D integer array B of size A.
Output Format: Return a single integer no. of ways.

Example
Input 1: A = 5, B = [1, 2, 3, 0, 3]
Input 2: A = 4, B = [0, 1, -1, 0]

Output 1: 2
Output 2: 1

Explanation 1: [(1,2)+(3)+(0,3)], [(1,2)+(3,0)+(3)]
Explanation 2: [(0)+(-1,1)+(0)]
 */

int solve(int A, vector<int> &B) {
    long long tsum = 0, cur;
    int i, ans, x;
    
    for(i = 0; i < A; ++i) tsum += B[i];
    if(tsum%3 != 0) return 0;
    
    ans = cur = x = 0;  tsum /= 3;
    for(i = 0; i < A-1; ++i) {
        cur += B[i];
        if(cur == 2*tsum && i > 0)
            ans += x;
        if(cur == tsum) x++;
    }
    return ans;
}
