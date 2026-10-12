class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> st;
        for (char c : allowed) st.insert(c);

        int count = words.size();
        for (int i = 0; i < words.size(); i++) {
            for (int j = 0; j < words[i].size(); j++) {
                if (!st.count(words[i][j])) {
                    count--;
                    break;
                }
            }
        }
        return count;
    }
};