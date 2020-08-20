/*
We define f(X, Y) as number of different corresponding bits in binary representation of X and Y.
For example, f(2, 7) = 2, since binary representation of 2 and 7 are 010 and 111, respectively.
The first and the third bit differ, so f(2, 7) = 2. You are given an array of N positive integers, A1, A2 ,…, AN.
Find sum of f(Ai, Aj) for all pairs (i, j) such that 1 ≤ i, j ≤ N. Return the answer modulo 10^9+7.

Example: A = [1, 3, 5]

We return
f(1, 1) + f(1, 3) + f(1, 5) + 
f(3, 1) + f(3, 3) + f(3, 5) +
f(5, 1) + f(5, 3) + f(5, 5) =

0 + 1 + 1 +
1 + 0 + 2 +
1 + 2 + 0 = 8
*/

int cntBits(vector<int> &A) {
    long i, n = A.size(), c0, c1;
    long long ans = 0;  bool flag;
    while(true) {
        flag = true;
        for(i = c0 = c1 = 0; i < n; ++i) {
            if(A[i] > 0) {
                flag = false;
                if(A[i]&1) c1++;
                else c0++;
                A[i] >>= 1;
            } else
                c0++;
        }
        if(flag) break;
        ans += (2*c0*c1) % 1000000007;
        ans %= 1000000007;
    }
    return ans;
}


