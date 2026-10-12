class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(auto& i : nums){
            mpp[i]++;
        }
        int count = 0;
        for(auto& j : mpp){
            int x = j.second;
            count = count + x*(x-1)/2;
        }
        return count;
    }
};