/*
The count-and-say sequence is the sequence of integers beginning as follows:
1, 11, 21, 1211, 111221, ...

1 is read off as one 1 or 11.
11 is read off as two 1s or 21.
21 is read off as one 2, then one 1 or 1211.

Given an integer n, generate the nth sequence.

Note: The sequence of integers will be represented as a string.
Example: if n = 2, the sequence is 11.
*/

string countAndSay(int A) {
    string ans = "1", tmp;
    int i, n, c;
    while(--A) {
        tmp = ""; c = 1;
        n = ans.length();
        for(i = 1; i < n; ++i) {
            if(ans[i] == ans[i-1])
                c++;
            else {
                tmp += to_string(c) + ans[i-1];
                c = 1;
            }
        }
        tmp += to_string(c);
        tmp += ans[i-1];
        ans = tmp;
    }
    return ans;
}

