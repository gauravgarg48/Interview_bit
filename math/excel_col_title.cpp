/*
Given a positive integer A, return its corresponding column title as appear in an Excel sheet.

Problem Constraints
1 <= A <= 1000000000

Input Format: First and only argument is integer A.
Output Format: Return a string, the answer to the problem.

Example Input: 28
Example Output: "AB"

Explanation:
1 -> A
2 -> B
3 -> C
...
26 -> Z
27 -> AA
28 -> AB 
*/

string Solution::convertToTitle(int A) {
    string ans = "";
    while(A) {
        A--;
        ans = char('A' + A%26) + ans;
        A /= 26;
    }
    return ans;
}

