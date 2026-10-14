class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mpp;
        for(auto& i : arr){
            mpp[i]++;
        }
        int mx = -1;
        for(auto& i : mpp){
            if(i.second == i.first) mx = max(mx,i.first);
        }
        return mx;
    }
};