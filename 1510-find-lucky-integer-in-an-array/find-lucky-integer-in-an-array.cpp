class Solution {
public:
    int findLucky(vector<int>& arr) {
        int mpp[501] = {0};
        for(auto& i : arr){
            mpp[i]++;
        }
        for(int j = 500;j>0;j--){
            if(mpp[j] == j) return j;
        }
        return -1;
    }
};