/*
You are given a binary string(i.e. with characters 0 and 1) S consisting of characters S1, S2, …, SN. 
In a single operation, you can choose two indices L and R such that 1 ≤ L ≤ R ≤ N and flip the 
characters SL, SL+1,…, SR. By flipping, we mean change character 0 to 1 and vice-versa.

Your aim is to perform ATMOST one operation such that in final string number of 1s is maximised.
If you don’t want to perform the operation, return an empty array.
Else, return an array consisting of two elements denoting L and R.
If there are multiple solutions, return the lexicographically smallest pair of L and R.

S = 010
Pair of [L, R] | Final string
_______________|_____________
[1 1]          | 110
[1 2]          | 100
[1 3]          | 101
[2 2]          | 000
[2 3]          | 001

We see that two pairs [1, 1] and [1, 3] give same number of 1s in final string. So, we return [1, 1].
*/

vector<int> flip(string A) {
    vector<int> ans;
    int i, j, cur, mx, n = A.length();
    
    vector<int> arr(n);
    for(i = 0; i < n; ++i) {
        if(A[i] == '1') arr[i] = -1;
        else arr[i] = 1;
    }
    
    cur = mx = 0;
    for(i = j = 0; i < n; ++i) {
        cur += arr[i];
        if(cur > mx) {
            mx = cur;
            ans = {j+1, i+1};
        }
        
        if(cur < 0) {
            cur = 0;
            j = i+1;
        }
    }
    
    return ans;
}
