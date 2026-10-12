class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans = {1};
        for (int i = 0; i < rowIndex; i++) {
            vector<int> next_row(ans.size() + 1, 0);
            for (int j = 0; j < ans.size(); j++) {
                next_row[j]     += ans[j];
                next_row[j + 1] += ans[j];
            }
            ans = next_row;
        }
        return ans;
    }
};