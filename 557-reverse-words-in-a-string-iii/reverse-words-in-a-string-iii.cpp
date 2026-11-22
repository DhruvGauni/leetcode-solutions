class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int l = 0;
        for (int i = 0; i <= n; i++) {
            if (i == n || s[i] == ' ') {
                int a = l, b = i - 1;
                while (a < b) {
                    swap(s[a], s[b]);
                    a++;
                    b--;
                }
                l = i + 1;
            }
        }
        return s;
    }
};