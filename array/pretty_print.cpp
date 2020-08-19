/*
Print concentric rectangular pattern in a 2d matrix. Let us show you some examples to clarify what we mean.
The outermost rectangle is formed by A, then the next outermost is formed by A-1 and so on.

Example

Input: A = 4.
Output:
4 4 4 4 4 4 4 
4 3 3 3 3 3 4 
4 3 2 2 2 3 4 
4 3 2 1 2 3 4 
4 3 2 2 2 3 4 
4 3 3 3 3 3 4 
4 4 4 4 4 4 4 
*/

vector<vector<int> > prettyPrint(int A) {
    int i, j, n = 2*A-1, x;
    vector<vector<int> > ans(n);
    for(i = 0; i < n; ++i) {
        vector<int> tmp(n);
        for(j = 0; j < n; ++j) {
            x = min({i, j, n-i-1, n-j-1});
            tmp[j] = A-x;
        }
        ans[i] = tmp;
    }
    return ans;
}

