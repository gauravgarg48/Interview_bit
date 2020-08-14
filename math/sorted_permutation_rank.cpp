/*
Given a string, find the rank of the string amongst its permutations sorted lexicographically.
Assume that no characters are repeated. The answer might not fit in an integer, so return your answer % 1000003.

Example :
Input : 'acb'
Output : 2

The order permutations with letters 'a', 'c', and 'b' : 
abc, acb, bac, bca, cab, cba
*/

int Solution::findRank(string A) {
    int i, j, n = A.length(), ans = 1, x;
    
    vector<int> fact(260);
    fact[0] = 0, fact[1] = 1;
    for(i = 2; i < 260; ++i)
        fact[i] = (fact[i-1]*i) % 1000003;
    
    for(i = 0; i < n; ++i) {
        x = 0;
        for(j = i+1; j < n; ++j)
            if(A[j] < A[i]) x++;
        ans += x*fact[n-i-1];
    }
    return ans%1000003;
}

