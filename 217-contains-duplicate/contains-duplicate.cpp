class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> ans;
        for(int x : nums){
            if(!ans.insert(x).second) return true;
        }
        return false;
    }
};