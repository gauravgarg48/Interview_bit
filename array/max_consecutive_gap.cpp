/*
Given an unsorted array, find the maximum difference between the successive elements in its sorted form.
You may assume that all the elements in the array are non-negative integers and fit in the 32-bit signed integer range.
You may also assume that the difference will not overflow.
Try to solve it in linear time/space.

Example :
Input : [1, 10, 5]
Output : 5 
Return 0 if the array contains less than 2 elements.
*/

int maximumGap(const vector<int> &A) {
    int i, n = A.size(), x, mx = INT_MIN;
    if(n < 2) return 0;
    priority_queue<int> pq(A.begin(), A.end());
    while(!pq.empty()) {
        x = pq.top(); pq.pop();
        if(pq.empty()) break;
        mx = max(mx, x-pq.top());
    }
    return mx;
}