/*
Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.
Return 0 / 1 ( 0 for false, 1 for true ) for this problem

Example:
"A man, a plan, a canal: Panama" is a palindrome.
"race a car" is not a palindrome.
*/

bool comp(char ch1, char ch2) {
    return (ch1 == ch2 || ch1-'A' == ch2-'a' || ch1-'a' == ch2-'A');
}
int isPalindrome(string A) {
    int i = 0, n = A.length();
    while(i < n) {
        if(!isalnum(A[i])) i++;
        else if(!isalnum(A[n])) n--;
        else if(comp(A[i], A[n])) {
            i++; n--;
        } else
            return false;
    }
    return true;
}
