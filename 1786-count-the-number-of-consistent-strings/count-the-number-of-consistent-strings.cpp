class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        bool ok[26] = {false};
        for (char c : allowed) ok[c - 'a'] = true;

        int count = 0;
        for (auto& w : words) {
            bool good = true;
            for (char c : w) {
                if (!ok[c - 'a']) { good = false; break; }
            }
            if (good) count++;
        }
        return count;
    }
};