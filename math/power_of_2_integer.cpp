/* Given a positive integer which fits in a 32 bit signed integer, 
find if it can be expressed as A^P where P > 1 and A > 0.
A and P both should be integers.

Example
Input : 4
Output : True
as 2^2 = 4.
*/

int isPower(int A) {
    if(A < 1) return false;
    if(A == 1) return true;
    
    long long n, p;
    for(n = 2; n*n <= A; ++n) {
        p = log(A)/log(n);
        if(pow(n, p) == A)
            return true;
    }
    return false;
}


