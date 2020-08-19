/*
Given an array of real numbers greater than zero in form of strings.
Find if there exists a triplet (a,b,c) such that 1 < a+b+c < 2 .
Return 1 for true or 0 for false. O(n) solution is expected.

Example:
Given [0.6, 0.7, 0.8, 1.2, 0.4],
You should return 1 as 0.6+0.7+0.4 = 1.7, 1 < 1.7 < 2
Hence, the output is 1.

Note: You can assume the numbers in strings don’t overflow the primitive data type
and there are no leading zeroes in numbers. Extra memory usage is allowed.
*/

int solve(vector<string> &A) {
    sort(A.begin(), A.end());
    int i = 0, j = A.size()-1, mid;
    float a, b, c;
    while(i < j-1) {
        mid = (i+j)/2; a = stof(A[i]); 
        b = stof(A[j]); c = stof(A[mid]);
        if(1 < a+b+c && a+b+c < 2)
            return true;
        else if(a+b+c >= 2)
            j--;
        else
            i++;
    }
    return false;
}
