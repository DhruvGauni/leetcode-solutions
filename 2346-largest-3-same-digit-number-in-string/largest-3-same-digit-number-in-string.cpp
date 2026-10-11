class Solution {
public:
    string largestGoodInteger(string num) {
        int mx = -1;
        int n = num.size();
        for (int i = 0; i < n - 2; i++) {
            if (num[i] == num[i+1] && num[i+1] == num[i+2]) {
                mx = max(mx, num[i] - '0');
            }
        }
        if (mx == -1) return "";
        return string(3, '0' + mx);
    }
};