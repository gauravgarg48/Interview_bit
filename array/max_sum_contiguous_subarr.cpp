/*
Find the contiguous subarray within an array, A of length N which has the largest sum.

Input Format: The first and the only argument contains an integer array, A.
Output Format: Return an integer representing the maximum possible sum of the contiguous subarray.
Constraints:
1 <= N <= 1e6
-1000 <= A[i] <= 1000

Example:

Input 1: A = [1, 2, 3, 4, -10]
Output 1: 10
Explanation 1: The subarray [1, 2, 3, 4] has the maximum possible sum of 10.

Input 2: A = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
Output 2: 6
Explanation 2: The subarray [4,-1,2,1] has the maximum possible sum of 6.
*/

int maxSubArray(const vector<int> &A) {
    int i, n = A.size(), cur, mx;
    mx = INT_MIN; cur = 0;
    for(i = 0; i < n; ++i) {
        cur += A[i];
        if(cur > mx) mx = cur;
        if(cur < 0) cur = 0;
    }
    return mx;
}

