/*
Given an array of integers, sort the array into a wave like array and return it,
In other words, arrange the elements into a sequence such that a1 >= a2 <= a3 >= a4 <= a5 ...
NOTE : If there are multiple answers possible, return the one thats lexicographically smallest.

Example

Given [1, 2, 3, 4]
One possible answer : [2, 1, 4, 3]
Another possible answer : [4, 1, 3, 2]
So, in example case, you will return [2, 1, 4, 3]
*/

vector<int> wave(vector<int> &A) {
    sort(A.begin(), A.end());
    int i, n = A.size();
    for(i = 1; i < n; i += 2)
        swap(A[i-1], A[i]);
    return A;
}
