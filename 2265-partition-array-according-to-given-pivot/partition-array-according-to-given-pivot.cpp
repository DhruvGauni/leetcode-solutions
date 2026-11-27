class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans(nums.size());
        int i = 0;
        int big = 0;
        for(auto& o : nums){
            if(o>pivot){
                big++;
            }
        }
        int j = nums.size()-big;
        for(auto& l : nums){
            if(l<pivot){
                ans[i] = l;
                i++;
            }
            else if(l>pivot){
                ans[j] = l;
                j++;
            }
        }
        while(i<nums.size()-big){
            ans[i] = pivot;
            i++;
        }
        return ans;
    }
};