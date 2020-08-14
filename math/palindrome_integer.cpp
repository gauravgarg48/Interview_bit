/*
Determine whether an integer is a palindrome. Do this without extra space.
A palindrome integer is an integer x for which reverse(x) = x where reverse(x) is x with its digit reversed.
Negative numbers are not palindromic.

Example:
Input : 12121
Output : True

Input : 123
Output : False
*/

int isPalindrome(int A) {
    if(A < 0) return false;
    int rev = 0, x = A;
    while(x) {
        rev = rev*10 + x%10;
        x /= 10;
    }
    return (rev == A);
}