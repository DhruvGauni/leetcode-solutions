class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]){
                nums[i] *= 2;
                nums[i+1] = 0;
            }
        }
        int i = 0,j=0;
        int n = nums.size();
        while(j<n){
            while(i<n && nums[i]!=0) i++;
            if(i == n)break;
            j = i;
            while(j<n && nums[j] == 0)j++;
            if(j==n)break;
            swap(nums[i],nums[j]);
            i++;
        }
        return nums;
    }
};