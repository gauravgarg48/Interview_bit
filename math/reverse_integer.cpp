/*
Reverse digits of an integer.
Return 0 if the result overflows and does not fit in a 32 bit signed integer

Example 1:
x = 123
return 321

Example2:
x = -123
return -321
*/

int reverse(int A) {
    int sign, x = 0;
    sign = (A > 0) ? 1 : -1;
    A = abs(A);
    while(A) {
        if(x > INT_MAX/10 || x*10 > INT_MAX-A%10)
            return 0;
        x = x*10 + A%10;
        A /= 10;
    }
    return sign * x;
}
