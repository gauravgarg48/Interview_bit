/*
Given a non-negative number represented as an array of digits,
Add 1 to the number ( increment the number represented by the digits ).
The digits are stored such that the most significant digit is at the head of the list.

Example:
If the vector has [0, 1, 2, 3] the returned vector should be [1, 2, 4] as 123 + 1 = 124.
*/

vector<int> plusOne(vector<int> &A) {
    int i, z, n = A.size(), c = 1;
    for(z = 0; z < n-1; ++z)
        if(A[z] > 0) break;
    vector<int> ans(n-z, 0);
    for(i = n-1; i >= z; --i) {
        c = A[i]+c;
        ans[i] = c%10;
        c = c/10;
    }
    if(c > 0)
        ans.insert(ans.begin(), c);
    return ans;
}
