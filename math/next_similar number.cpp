/*
You have to find the smallest number that has same set of digits as A and is greater than A.
If A is the greatest possible number with its set of digits, then return -1.
Given a number A in a form of string. A doesn't contain leading zeroes.

Problem Constraints
1 <= A <= 10^100000

Example
Input 1: A = "218765"
Input 2: A = "4321"

Output 1: "251678"
Output 2: "-1"
*/

string solve(string A) {
    int i, j, n = A.length();
    for(i = n-2; i >= 0; --i) {
        if(A[i+1] > A[i]) break;
    }
    if(i < 0) return "-1";
    for(j = n-1; j > i; --j) {
        if(A[j] > A[i]) break;
    }
    swap(A[i], A[j]);
    reverse(A.begin()+i+1, A.end());
    return A;
}