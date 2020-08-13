/*
Given an even number ( greater than 2 ), return two prime numbers whose sum will be equal to given number.
NOTE A solution will always exist. read Goldbach’s conjecture

Example:
Input : 4
Output: 2 + 2 = 4

If there are more than one solutions possible, return the lexicographically smaller solution.
If [a, b] is one solution with a <= b, and [c,d] is another solution with c <= d,
then [a, b] < [c, d]. If a < c OR a==c AND b < d.
*/

vector<int> primesum(int A) {
    vector<bool> prime(A+1, true);
    prime[0] = prime[1] = false;
    
    int i, j;
    for(i = 2; i*i <= A; ++i) {
        if(prime[i])
            for(j = i*i; j <= A; j += i)
                prime[j] = false;
    }
    for(i = 2; i <= A/2; ++i) {
        if(prime[i] && prime[A-i])
            return {i, A-i};
    }
    return vector<int>();
}