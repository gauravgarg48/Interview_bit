/*
Reverse the bits of an 32 bit unsigned integer A.

Problem Constraints
0 <= A <= 2^32

Input Format: First and only argument of input contains an integer A.
Output Format: Return a single unsigned integer denoting the decimal value of reversed bits.

Example

Input: 3
Output: 3221225472
Explanation:
        00000000000000000000000000000011    
=>      11000000000000000000000000000000
*/

unsigned int reverse(unsigned int A) {
    unsigned int x = 0;
    for(int i = 31; i >= 0; --i) {
        x = x*2 + A%2;
        A /= 2;
    }
    return x;
}

