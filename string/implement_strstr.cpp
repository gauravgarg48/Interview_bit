/*
Implement strStr().
strstr - locate a substring ( needle ) in a string ( haystack ). 
Try not to use standard library string functions for this question.

Returns the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

NOTE: Good clarification questions:
What should be the return value if the needle is empty?
What if both haystack and needle are empty?
For the purpose of this problem, assume that the return value should be -1 in both cases. 
*/

int strStr(const string A, const string B) {
    int i, j, n1 = A.length(), n2 = B.length();
    if(n1 < n2) return -1;
    
    for(i = 0; i <= n1-n2; ++i) {
        for(j = 0; j < n2; ++j)
            if(A[i+j] != B[j]) break;
        if(j == n2)
            return i;
    }
    return -1;
}