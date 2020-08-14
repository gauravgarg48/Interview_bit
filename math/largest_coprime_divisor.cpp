/*
You are given two positive numbers A and B. You need to find the maximum valued integer X such that:
X divides A i.e. A % X = 0
X and B are co-prime i.e. gcd(X, B) = 1

Example: A = 30, B = 12
Output:  X = 5
*/

int cpFact(int A, int B) {
    int g = __gcd(A, B);
    while(g != 1) {
        g = __gcd(A, B);
        A /= g;
    }
    return A;
}