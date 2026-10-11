class Solution {
public:
    int maxScore(string s) {
        int ones = count(s.begin(), s.end(), '1');  // ones in right part (start: everything)
        int zeros = 0;                              // zeros in left part
        int maxi = 0;

        for (int i = 0; i < s.size() - 1; i++) {    // stop at n-2 so right side is non-empty
            if (s[i] == '0') zeros++;
            else ones--;                            // this '1' moves to the left, leaves the right
            maxi = max(maxi, zeros + ones);
        }
        return maxi;
    }
};