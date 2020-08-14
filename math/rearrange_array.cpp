/*
Rearrange a given array so that Arr[i] becomes Arr[Arr[i]] with O(1) extra space.
Lets say N = size of the array. Then, following holds true :
All elements in the array are in the range [0, N-1]
N * N does not overflow for a signed integer

Example:
Input : [4, 0, 2, 1, 3]
Return: [3, 4, 2, 0, 1]
*/

void arrange(vector<int> &A) {
    int i, n = A.size(), x, y;
    for(i = 0; i < n; ++i) {
        x = A[i]%n;
        y = A[x]%n;
        A[i] = y*n + x;
    }
    for(i = 0; i < n; ++i)
        A[i] = A[i]/n;
    return;
}
