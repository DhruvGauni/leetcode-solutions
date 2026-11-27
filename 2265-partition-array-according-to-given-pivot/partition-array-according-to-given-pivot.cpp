class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int small = 0,equal = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]<pivot) small++;
            else if(nums[i]==pivot) equal++;
        }
        int i = 0;
        int j = small;
        int k = small+equal;
        vector<int> ans(nums.size());
        for(auto& l : nums){
            if(l < pivot){
                ans[i] = l;
                i++;
            }
            else if(l==pivot){
                ans[j] = l;
                j++;
            }
            else{
                ans[k] = l;
                k++;
            }
        }
        return ans;

    }
};