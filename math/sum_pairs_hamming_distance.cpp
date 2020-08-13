/*
Hamming distance between two non-negative integers is defined as the number of positions at which
the corresponding bits are different. Given an array A of N non-negative integers, find the sum of
hamming distances of all pairs of integers in the array. Return the answer modulo 1000000007.

Problem Constraints
1 <= |A| <= 200000
1 <= A[i] <= 109
Input Format: First and only argument is array A.
Output Format: Return one integer, the answer to the problem.

Example
Input: A = [2, 4, 6]
Output: 8
Explanation: We return, f(2, 2) + f(2, 4) + f(2, 6) + f(4, 2)
	+ f(4, 4) + f(4, 6) + f(6, 2) + f(6, 4) + f(6, 6) = 8
*/

int hammingDistance(const vector<int> &A) {
    int i, k, n = A.size();
    
    long long ans = 0, c1;
    vector<int> arr(A.begin(), A.end());
    for(k = 0; k < 32; ++k) {
        for(c1 = i = 0; i < n; ++i) {
            if(arr[i]&1) c1++;
            arr[i] /= 2;
        }
        ans = (ans + 2*(n-c1)*c1) % 1000000007;
    }
    return ans % 1000000007;
}
