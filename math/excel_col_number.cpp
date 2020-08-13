/*
Given a column title A as appears in an Excel sheet, return its corresponding column number.

Problem Constraints
1 <= |A| <= 100
Input Format: First and only argument is string A.
Output Format: Return an integer

Example Input: "AB"
Example Output: 28

Explanation:
A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28 
*/

int titleToNumber(string A) {
    int i, n = A.length(), ans = 0;
    for(i = 0; i < n; ++i) {
        ans *= 26;
        ans += (A[i]-'A')+1;
    }
    return ans;
}
