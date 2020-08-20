/*
Write a function that takes an unsigned integer and returns the number of 1 bits it has.

Example: The 32-bit integer 11 has binary representation
00000000000000000000000000001011
so the function should return 3.
*/

int numSetBits(unsigned int A) {
    int cnt = 0;
    while(A) {
        A = A&(A-1);
        cnt++;
    }
    return cnt;
}
