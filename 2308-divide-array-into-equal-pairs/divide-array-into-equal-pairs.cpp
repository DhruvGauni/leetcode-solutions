class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int arr[501] = {0};
        for(auto& i : nums){
            arr[i]++;
        }
        for(auto& i : arr){
            if(i%2!=0) return false;
        }
        return true;
    }
};