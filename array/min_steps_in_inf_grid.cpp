/* Minimum Steps in Infinte Grid
You are in an infinite 2D grid where you can move in any of the 8 directions
(x,y) to (x-1, y-1), (x-1, y), (x-1,y+1), (x, y-1), (x, y+1), (x+1,y-1), (x+1, y), (x+1,y+1)

You are given a sequence of points and the order in which you need to cover the points.. 
Give the minimum number of steps in which you can achieve it. You start from the first point.
NOTE: This question is intentionally left slightly vague.

Input Format: Given two integer arrays A and B, where A[i] is x coordinate and B[i]
is y coordinate of ith point respectively.
Output Format: Return an Integer, i.e minimum number of steps.

Example

Input:
A = [0, 1, 1]
B = [0, 1, 2]
Output: 2

Explanation: Given three points are: (0, 0), (1, 1) and (1, 2).
It takes 1 step to move from (0, 0) to (1, 1). It takes one more step to move from (1, 1) to (1, 2).
*/

int coverPoints(vector<int> &A, vector<int> &B) {
    int i, n = A.size(), ans, r, c;
    r = A[0]; c = B[0];
    ans = 0;
    for(i = 1; i < n; ++i) {
        ans += max(abs(c-B[i]), abs(r-A[i]));
        r = A[i];
        c = B[i];
    }
    return ans;
}
