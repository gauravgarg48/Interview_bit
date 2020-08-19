/*
Given the array of strings A, you need to find the longest string S which is the prefix of ALL the strings
in the array. Longest common prefix for a pair of strings S1 and S2 is the longest string S which is the
prefix of both S1 and S2. For Example, longest common prefix of "abcdefgh" and "abcefgh" is "abc".

Input Format: The only argument given is an array of strings A.
Output Format: Return longest common prefix of all strings in A.

Example
Input: A = ["abab", "ab", "abcd"];
Output: "ab"
Explanation : Longest common prefix of all the strings is "ab".
*/

string longestCommonPrefix(vector<string> &A) {
    int i, j, n = A.size(), len = A[0].length();
    for(i = 0; i < len; ++i) {
        for(j = 1; j < n; ++j) {
            if(A[j].length() <= i) break;
            if(A[j][i] != A[0][i]) break;
        }
        if(j < n) break;
    }
    return A[0].substr(0, i);
}
