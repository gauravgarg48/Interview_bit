/*
Given an integer array A, find if an integer p exists in the array such that the number
of integers greater than p in the array equals to p.

Input Format: First and only argument is an integer array A.
Output Format: Return 1 if any such integer p is found else return -1.

Example:
Input 1: A = [3, 2, 1, 3]
Output 1: 1
Explanation: For integer 2, there are 2 greater elements in the array. So, return 1.

Input 2: A = [1, 1, 3, 3]
Output 2: -1
Explanation: There is no such integer exists.

*/

int solve(vector<int> &A) {
    sort(A.begin(), A.end());
    int i, n = A.size();
    for(i = 0; i < n-1; ++i) {
        if(A[i] == A[i+1]) continue;
        else if(A[i] == n-i-1)
            return 1;
    }
    if(A[i] == 0) return 1;
    return -1;
}