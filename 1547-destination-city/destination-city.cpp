class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> sources;
        for (auto& p : paths) sources.insert(p[0]);

        for (auto& p : paths) {
            if (!sources.count(p[1])) return p[1];
        }
        return "";
    }
};